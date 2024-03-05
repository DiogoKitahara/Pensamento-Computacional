#include <stdio.h>
#define TFL 3
#define TFC 3

main() {
    // Declarar variaveis
    int l, c, matriz[TFL][TFC], maior_elemento = 0;
    // Loop para linha
    for(l = 0; l < TFL; l++) {
        // Loop para coluna
        for(c = 0; c < TFC; c++) {
            // Armazenar elemento
            printf("Elemento da matriz na posicao [%d][%d]: ", l, c);
            scanf("%d", &matriz[l][c]);
            // Realizar a comparacao
            if (matriz[l][c] > maior_elemento) {
                // Armazenar o maior elemento
                maior_elemento = matriz[l][c];
            }
        }
    }
    printf("Maior elemento da matriz: %d\n", maior_elemento);

    // Loop para linha
    for (l = 0; l < TFL; l++) {
        // Loop para coluna
        for (c = 0; c < TFC; c++) {
            // Pegar a posicao do maior elemento
            if (maior_elemento == matriz[l][c]) {
                printf("Posicao: [%d][%d]\n", l, c);
            }
        }
    }
}