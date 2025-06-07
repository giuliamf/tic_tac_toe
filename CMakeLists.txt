cmake_minimum_required(VERSION 3.10)
project(tictactoe)

set(CMAKE_CXX_STANDARD 17)

# Adiciona GoogleTest (como subdiretório)
add_subdirectory(googletest)
include_directories(googletest/googletest/include)

# Biblioteca do jogo
add_library(tictac src/tictac.cpp src/tictac.hpp)

# Executável de testes
add_executable(test_tictac test/test_tictac.cpp)
target_link_libraries(test_tictac tictac gtest gtest_main pthread)

enable_testing()
add_test(NAME TicTacTests COMMAND test_tictac)
