int verificaVencedor(int tabuleiro[3][3]) {
    // Verifica vitória em linhas
    for (int i = 0; i < 3; ++i) {
        if (tabuleiro[i][0] != 0 &&
            tabuleiro[i][0] == tabuleiro[i][1] &&
            tabuleiro[i][1] == tabuleiro[i][2]) {
            return tabuleiro[i][0];
            }
    }

    // Verifica vitória em colunas
    for (int j = 0; j < 3; ++j) {
        if (tabuleiro[0][j] != 0 &&
            tabuleiro[0][j] == tabuleiro[1][j] &&
            tabuleiro[1][j] == tabuleiro[2][j]) {
            return tabuleiro[0][j];
            }
    }

    // Verifica vitória na diagonal principal
    if (tabuleiro[0][0] != 0 &&
        tabuleiro[0][0] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][2]) {
        return tabuleiro[0][0];
        }


    // Verifica se o tabuleiro está cheio
    bool temEspacoVazio = false;
    for (int i = 0; i < 3 && !temEspacoVazio; ++i)
        for (int j = 0; j < 3; ++j)
            if (tabuleiro[i][j] == 0)
                temEspacoVazio = true;

    // Empate se não há espaços vazios
    if (!temEspacoVazio)
        return 0;

    return -1;
}
