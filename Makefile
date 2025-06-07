CXX = g++
CXXFLAGS = -Wall -std=c++17 -fprofile-arcs -ftest-coverage -O0 -g -Igoogletest/googletest -Igoogletest/googletest/include
LDFLAGS = -lpthread -fprofile-arcs -ftest-coverage

SRC = src/tictac.cpp
HDR = src/tictac.hpp
TEST = test/test_tictac.cpp
TARGET = test_tictac

GTEST_SRCS = \
  googletest/googletest/src/gtest-all.cc \
  googletest/googletest/src/gtest_main.cc

GTEST_OBJS = $(GTEST_SRCS:.cc=.o)

all: $(TARGET)

$(GTEST_OBJS): %.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(SRC) $(TEST) $(HDR) $(GTEST_OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(SRC) $(TEST) $(GTEST_OBJS) $(LDFLAGS)

run: $(TARGET)
	./$(TARGET)

coverage: run
	cp test_tictac-tictac.gcno tictac.gcno
	cp test_tictac-tictac.gcda tictac.gcda
	gcov tictac.cpp > gcov.log


clean:
	rm -f $(TARGET) *.gcno *.gcda *.gcov
	rm -f src/*.gcno src/*.gcda src/*.gcov
	rm -f $(GTEST_OBJS)
