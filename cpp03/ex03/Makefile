CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -Wshadow -std=c++98

SRC = *.cpp

HDR = *.hpp

TARGET = diamondtrap

all: $(TARGET)

$(TARGET): $(SRC) $(HDR)
	$(CXX) $(CXXFLAGS)  -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(TARGET)

re: clean all