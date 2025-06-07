#include <iostream>

using namespace std;

const int TAM = 10;
const int TAM_NAVIO = 3;

void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

bool posicionarNavioHorizontal(int tabuleiro[TAM][TAM], int linha, int coluna) {
    if (coluna + TAM_NAVIO > TAM)
        return false;

    for (int i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha][coluna + i] != 0)
            return false; // Sobreposição
    }

    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha][coluna + i] = 3;
    }

    return true;
}

bool posicionarNavioVertical(int tabuleiro[TAM][TAM], int linha, int coluna) {
    if (linha + TAM_NAVIO > TAM)
        return false;

    for (int i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha + i][coluna] != 0)
            return false; // Sobreposição
    }

    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha + i][coluna] = 3;
    }

    return true;
}

void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    cout << "Tabuleiro Batalha Naval (0 = Água, 3 = Navio):\n";
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << tabuleiro[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int tabuleiro[TAM][TAM];
    inicializarTabuleiro(tabuleiro);

    // Coordenadas definidas diretamente
    int linhaNavioH = 2, colunaNavioH = 4;
    int linhaNavioV = 5, colunaNavioV = 7;

    if (!posicionarNavioHorizontal(tabuleiro, linhaNavioH, colunaNavioH)) {
        cout << "Erro ao posicionar navio horizontal.\n";
        return 1;
    }

    if (!posicionarNavioVertical(tabuleiro, linhaNavioV, colunaNavioV)) {
        cout << "Erro ao posicionar navio vertical.\n";
        return 1;
    }

    exibirTabuleiro(tabuleiro);

    return 0;
}