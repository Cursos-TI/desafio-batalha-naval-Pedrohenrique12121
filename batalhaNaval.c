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
     int linhaNavioDiagonal1 = 0, colunaNavioDiagonal1 = 0; // Posição inicial do navio diagonal crescente
     int linhaNavioDiagonal2 = 8, colunaNavioDiagonal2 = 9; // Posição inicial do navio diagonal decrescente
 
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
 
     // Validação de limites para navio diagonal crescente
     if (linhaNavioDiagonal1 + TAM_NAVIO > TAM_TABULEIRO || colunaNavioDiagonal1 + TAM_NAVIO > TAM_TABULEIRO) {
         printf("Erro: Coordenadas do navio diagonal crescente estão fora dos limites do tabuleiro.\n");
         return 1; // Encerrar programa com erro
     }
 
     // Posicionamento do navio diagonal crescente
     for (int i = 0; i < TAM_NAVIO; i++) {
         tabuleiro[linhaNavioDiagonal1 + i][colunaNavioDiagonal1 + i] = 3; // Marcando posições no tabuleiro
     }
 
     // Validação de limites para navio diagonal decrescente
     if (linhaNavioDiagonal2 - TAM_NAVIO < -1 || colunaNavioDiagonal2 - TAM_NAVIO < -1) {
         printf("Erro: Coordenadas do navio diagonal decrescente estão fora dos limites do tabuleiro.\n");
         return 1; // Encerrar programa com erro
     }
 
     // Posicionamento do navio diagonal decrescente
     for (int i = 0; i < TAM_NAVIO; i++) {
         tabuleiro[linhaNavioDiagonal2 - i][colunaNavioDiagonal2 - i] = 3; // Marcando posições no tabuleiro
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
