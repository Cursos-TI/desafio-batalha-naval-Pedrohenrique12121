#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

#define TAM_TABULEIRO 10 // Tamanho do tabuleiro (10x10)
#define TAM_NAVIO 3      // Tamanho fixo dos navios
 
int main() {
    // Declaração do tabuleiro (matriz 10x10) e inicialização com água (valor 0)
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};

    // Coordenadas iniciais dos navios definidos diretamente no código
    int linhaNavioVertical = 2, colunaNavioVertical = 5; // Posição inicial do navio vertical
    int linhaNavioHorizontal = 6, colunaNavioHorizontal = 3; // Posição inicial do navio horizontal
   

    // Validação de limites para navio vertical
    if (linhaNavioVertical + TAM_NAVIO > TAM_TABULEIRO || colunaNavioVertical >= TAM_TABULEIRO) {
        printf("Erro: Coordenadas do navio vertical estão fora dos limites do tabuleiro.\n");
        return 1; // Encerrar programa com erro
    }

    // Posicionamento do navio vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = 3; // Marcando posições no tabuleiro
    }

    // Validação de limites para navio horizontal
    if (linhaNavioHorizontal >= TAM_TABULEIRO || colunaNavioHorizontal + TAM_NAVIO > TAM_TABULEIRO) {
        printf("Erro: Coordenadas do navio horizontal estão fora dos limites do tabuleiro.\n");
        return 1; // Encerrar programa com erro
    }

    // Posicionamento do navio horizontal
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = 3; // Marcando posições no tabuleiro
    }

    

    // Exibição do tabuleiro completo
    printf("Tabuleiro:\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]); // Exibindo cada posição do tabuleiro
        }
        printf("\n"); // Quebra de linha para formar a visualização do tabuleiro
    }

    return 0;
}
