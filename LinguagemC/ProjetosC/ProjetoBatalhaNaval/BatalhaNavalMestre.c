#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

// Funções para manipulação do tabuleiro
void mostrar_tabuleiro(char tabuleiro[N][N]) {
    printf("   ");
    for (int j = 0; j < N; j++) printf("%d ", j); // cabeçalho das colunas
    printf("\n");
    for (int i = 0; i < N; i++) { // cabeçalho das linhas
        printf("%d: ", i);
        for (int j = 0; j < N; j++) { // conteúdo do tabuleiro
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void inicializar_tabuleiro(char tabuleiro[N][N]) { // inicializa o tabuleiro com água
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            tabuleiro[i][j] = '~'; // água
}

void posicionar_navios(char tabuleiro[N][N], int quantidade) { // posiciona navios aleatoriamente no tabuleiro
    srand(time(NULL));
    for (int k = 0; k < quantidade; k++) { // posiciona navios aleatoriamente
        int x = rand() % N;
        int y = rand() % N;
        tabuleiro[x][y] = 'N'; // navio
    }
}

void aplicar_cone(char tabuleiro[N][N], int x, int y, int tamanho) { // aplica a habilidade "CONE" no tabuleiro
    for (int i = 0; i < tamanho; i++) {
        for (int j = -i; j <= i; j++) {
            if (x+i >= 0 && x+i < N && y+j >= 0 && y+j < N) {
                if (tabuleiro[x+i][y+j] == 'N') tabuleiro[x+i][y+j] = 'X'; // navio atingido
                else tabuleiro[x+i][y+j] = '*'; // água
            }
        }
    }
}

void aplicar_cruz(char tabuleiro[N][N], int x, int y, int tamanho) { // aplica a habilidade "CRUZ" no tabuleiro
    for (int i = -tamanho; i <= tamanho; i++) {
        if (x+i >= 0 && x+i < N) {
            if (tabuleiro[x+i][y] == 'N') tabuleiro[x+i][y] = 'X'; // navio atingido
            else tabuleiro[x+i][y] = '*'; // água
        }
        if (y+i >= 0 && y+i < N) {
            if (tabuleiro[x][y+i] == 'N') tabuleiro[x][y+i] = 'X'; // navio atingido
            else tabuleiro[x][y+i] = '*';
        }
    }
}

void aplicar_octaedro(char tabuleiro[N][N], int x, int y, int tamanho) { // aplica a habilidade "OCTAEDRO" no tabuleiro
    for (int i = -tamanho; i <= tamanho; i++) { // percorre as linhas do octaedro
        for (int j = -tamanho; j <= tamanho; j++) { // percorre as colunas do octaedro
            if (abs(i) + abs(j) <= tamanho) { // verifica se a posição está dentro do octaedro
                if (x+i >= 0 && x+i < N && y+j >= 0 && y+j < N) {
                    if (tabuleiro[x+i][y+j] == 'N') tabuleiro[x+i][y+j] = 'X'; // navio atingido
                    else tabuleiro[x+i][y+j] = '*'; // água
                }
            }
        }
    }
}

int main() {

    char tabuleiro[N][N]; // declara o tabuleiro do jogo

    // Inicializa o tabuleiro e posiciona os navios
    inicializar_tabuleiro(tabuleiro);
    posicionar_navios(tabuleiro, 10);

    // Mostra o tabuleiro inicial
    mostrar_tabuleiro(tabuleiro);

    // Aplica as habilidades e mostra o tabuleiro após cada jogada
    printf("Jogada com habilidade CONE:\n");
    aplicar_cone(tabuleiro, 2, 4, 3);
    mostrar_tabuleiro(tabuleiro);

    // Aplica a habilidade CRUZ e mostra o tabuleiro
    printf("Jogada com habilidade CRUZ:\n");
    aplicar_cruz(tabuleiro, 5, 5, 3);
    mostrar_tabuleiro(tabuleiro);

    // Aplica a habilidade OCTAEDRO e mostra o tabuleiro
    printf("Jogada com habilidade OCTAEDRO:\n");
    aplicar_octaedro(tabuleiro, 7, 7, 2);
    mostrar_tabuleiro(tabuleiro);

    return 0;
}
