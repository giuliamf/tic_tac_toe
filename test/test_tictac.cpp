// Copyright 2025 Giulia Moura

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
        {1, 2, 2},
        {2, 1, 1}
    };
    EXPECT_EQ(verificaVencedor(tabuleiro), 0);
}

TEST(TicTacToeTest, XVenceNaLinha) {
    int tabuleiro[3][3] = {
        {1, 1, 1},
        {2, 2, 0},
        {0, 0, 0}
    };
    EXPECT_EQ(verificaVencedor(tabuleiro), 1);
}

TEST(TicTacToeTest, OVenceNaColuna) {
    int tabuleiro[3][3] = {
        {2, 1, 0},
        {2, 1, 0},
        {2, 0, 1}
    };
    EXPECT_EQ(verificaVencedor(tabuleiro), 2);
}


TEST(TicTacToeTest, XVenceDiagonalPrincipal) {
    int tabuleiro[3][3] = {
        {1, 2, 0},
        {0, 1, 2},
        {0, 0, 1}
    };
    EXPECT_EQ(verificaVencedor(tabuleiro), 1);
}

TEST(TicTacToeTest, OVenceDiagonalSecundaria) {
    int tabuleiro[3][3] = {
        {1, 1, 2},
        {0, 2, 0},
        {2, 0, 1}
    };
    EXPECT_EQ(verificaVencedor(tabuleiro), 2);
}

TEST(TicTacToeTest, JogoImpossivelComDoisVencedores) {
    int tabuleiro[3][3] = {
        {2, 2, 2},
        {1, 1, 1},
        {0, 0, 0}
    };
    EXPECT_EQ(verificaVencedor(tabuleiro), -2);
}

TEST(TicTacToeTest, JogoImpossivelMaisXDoQueO) {
    int tabuleiro[3][3] = {
        {1, 1, 1},
        {1, 1, 2},
        {2, 2, 0}
    };
    EXPECT_EQ(verificaVencedor(tabuleiro), -2);
}

