cmake_minimum_required(VERSION 3.10)
project(tictactoe)

set(CMAKE_CXX_STANDARD 17)

# Biblioteca principal do jogo
add_library(tictac src/tictac.cpp src/tictac.hpp)

# Ativa suporte a testes
enable_testing()

# Google Test (requer que esteja instalado no sistema ou via vcpkg)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Executável de testes
add_executable(test_tictac test/test_tictac.cpp)
target_link_libraries(test_tictac tictac ${GTEST_LIBRARIES} pthread)

# Adiciona os testes ao CTest
add_test(NAME TicTacTests COMMAND test_tictac)
