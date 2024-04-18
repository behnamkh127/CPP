CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = *.cpp

TARGET = sedIsForLosers

all: $(TARGET)

$(TARGET): $(SRC) 
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

re:	clean all