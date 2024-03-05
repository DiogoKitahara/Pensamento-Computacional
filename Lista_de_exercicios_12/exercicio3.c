#include <stdio.h>
#define TFL 3
#define TFC 3

main() {
    // Declarar variaveis
    int l, c;
    float matriz[TFL][TFC], soma = 0;
    // Loop para linha
    for (l = 0; l < TFL; l++) {
       // Loop para coluna
       for (c = 0; c < TFC; c++) {
            // Armazenar elemento
            printf("Elemento da matriz na posicao [%d][%d]: ", l, c);
            scanf("%f", &matriz[l][c]);
            // Realizar a soma da diagonal principal
            if (c == l) {
                soma += matriz[l][c];
            }
       }
    }
    // Imprimir resultado
    printf("Soma da diagonal principal: %.2f\n", soma);
}