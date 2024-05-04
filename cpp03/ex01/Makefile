CXX = C++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = *.cpp

HDR = *.hpp

TARGET = claptrap

all: $(TARGET)

$(TARGET): $(SRC) $(HDR)
	$(CXX) $(CXXFLAGS)  -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(TARGET)

re: clean all