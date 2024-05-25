CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = *.cpp

HDR = *.hpp

TARGET = animal

all: $(TARGET)

$(TARGET): $(SRC) $(HDR)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET) 

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(TARGET)

re: clean all