#include <stdio.h>

main() {
    // Declarar variaveis
    float A, B, C;
    // Armazenar valores em A, B e c
    printf("A = ");
    scanf("%f", &A);
    printf("B = ");
    scanf("%f", &B);
    printf("C = ");
    scanf("%f", &C);
    // Se A + B < C, printar menor
    if (A + B < C) {
        printf("MENOR\n");
    }
}