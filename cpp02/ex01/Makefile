CXX = c++

CXXFLAGES = -Wall -Wextra -Werror -std=c++98 -g

SRC = *.cpp

TARGET = fixed

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGES) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(TARGET)

re: clean all