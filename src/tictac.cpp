#include "tictac.hpp"

int verificaVencedor(int tabuleiro[3][3]) {
    // Verifica se há algum espaço vazio (0)
    bool temEspacoVazio = false;
    for (int i = 0; i < 3 && !temEspacoVazio; ++i)
        for (int j = 0; j < 3; ++j)
            if (tabuleiro[i][j] == 0)
                temEspacoVazio = true;

    // Se não há espaços vazios e nenhum venceu, então é empate
    if (!temEspacoVazio)
        return 0;

    return -1; // padrão do primeiro teste
}
