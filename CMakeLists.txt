cmake_minimum_required(VERSION 3.10)
project(tictactoe)

set(CMAKE_CXX_STANDARD 17)

# Flags de cobertura
set(COVERAGE_FLAGS "-fprofile-arcs -ftest-coverage -O0 -g")

# Adiciona GoogleTest
add_subdirectory(googletest)
include_directories(googletest/googletest/include)

# Biblioteca do jogo
add_library(tictac src/tictac.cpp src/tictac.hpp)
target_compile_options(tictac PRIVATE ${COVERAGE_FLAGS})
target_link_libraries(tictac gcov)

# Executável de testes
add_executable(test_tictac test/test_tictac.cpp)
target_link_libraries(test_tictac tictac gtest gtest_main pthread)
target_compile_options(test_tictac PRIVATE ${COVERAGE_FLAGS})
target_link_libraries(test_tictac gcov)

enable_testing()
add_test(NAME TicTacTests COMMAND test_tictac)
