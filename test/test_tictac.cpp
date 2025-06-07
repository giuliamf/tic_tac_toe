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

TEST(TicTacToeTest, JogoEmpatado) {
    int tabuleiro[3][3] = {
        {1, 2, 1},
        {2, 1, 2},
        {2, 1, 2}
    };
    EXPECT_EQ(verificaVencedor(tabuleiro), 0);
}
