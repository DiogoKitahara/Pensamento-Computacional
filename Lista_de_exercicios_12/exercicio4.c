#include <stdio.h>
#define PRODUTO 5
#define LOJA 3

main() {
    // Declarar variaveis
    float junho[PRODUTO][LOJA], julho[PRODUTO][LOJA], agosto[PRODUTO][LOJA], total_produto, total_venda = 0, total_produto_loja;
    int l, c;
    // Armazenar valores para junho
    printf("--------------------Junho--------------------\n");
    for (c = 0; c < LOJA; c++){
        for (l = 0; l < PRODUTO; l++){
            // Armazenar valores
            printf("Valor de vendo do produto %d da loja %d: ", l + 1, c + 1);
            scanf("%f", &junho[l][c]);
        }
      printf("\n");
    }
    printf("--------------------Julho--------------------\n");
    // Armazenar valores para julho
    for (c = 0; c < LOJA; c++){
        for (l = 0; l < PRODUTO; l++){
        // Armazenar valores
            printf("Valor de vendo do produto %d da loja %d: ", l + 1, c + 1);
            scanf("%f", &julho[l][c]);
        }
      printf("\n");
    }
    printf("--------------------Agosto--------------------\n");
    // Armazenar valores para agosto
    for (c = 0; c < LOJA; c++){
        for (l = 0; l < PRODUTO; l++){
        // Armazenar valores
            printf("Valor de vendo do produto %d da loja %d: ", l + 1, c + 1);
            scanf("%f", &agosto[l][c]);
        }
      printf("\n");
    }
    // Realizar as operacoes
    for (c = 0; c < LOJA; c++) {
        for(l = 0; l < PRODUTO; l++) {
            // Imprimir o total vendido de cada produto em cada loja no trimestre
            total_produto = junho[l][c] + julho[l][c] + agosto[l][c];
            total_venda += total_produto;
            printf("Total vendido no trimestre do produto %d da loja %d: %.2f\n", l + 1, c + 1, total_produto);
        }
        printf("----------------------------------------------\n");
        // Imprimir o total vendido em cada loja no trimestre
        printf("Total de venda da loja %d: %.2f\n", c + 1, total_venda);
        total_venda = 0;
    }
    for(l = 0; l < PRODUTO; l++) {
        for (c = 0; c < LOJA; c++ ) {
        total_produto_loja = junho[l][c] + julho[l][c] + agosto[l][c];
        }
        printf("Total vendido do produto %d em todas as lojas: %.2f", l + 1, total_produto_loja);
    }
    // Multiplicar por 15% os resultados anteriores
}