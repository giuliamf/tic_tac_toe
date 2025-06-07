CXX = g++
CXXFLAGS = -Wall -std=c++17 -fprofile-arcs -ftest-coverage -O0 -g
LDFLAGS = -lgtest -lgtest_main -lpthread -fprofile-arcs -ftest-coverage

SRC = src/tictac.cpp
HDR = src/tictac.hpp
TEST = test/test_tictac.cpp
TARGET = test_tictac

all: $(TARGET)

$(TARGET): $(SRC) $(TEST) $(HDR)
	$(CXX) $(CXXFLAGS) -o $@ $(SRC) $(TEST) $(LDFLAGS)

run: $(TARGET)
	./$(TARGET)

coverage: run
	gcov src/tictac.cpp

clean:
	rm -f $(TARGET) *.gcno *.gcda *.gcov
	rm -f src/*.gcno src/*.gcda src/*.gcov
