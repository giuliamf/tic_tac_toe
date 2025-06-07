#include "gtest/gtest.h"
#include "../src/tictac.hpp"

TEST(TicTacToeTest, ApenasUmXIndefinido) {
    int tabuleiro[3][3] = {
        {1, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    EXPECT_EQ(verificaVencedor(tabuleiro), -1);
}
