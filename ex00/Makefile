CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

TARGET = megaphone

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

fclean:	clean

re:	fclean all