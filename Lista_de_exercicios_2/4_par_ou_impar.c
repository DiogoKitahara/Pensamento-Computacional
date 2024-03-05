#include <stdio.h>

main() {
    // Declarar variaveis e armazenar o numero inteiro
    int numero, resto;
    printf("Numero = ");
    scanf("%i", &numero);
    // Se numero % 2 == 0, par e resto da divisão = 0
    if (numero % 2 == 0) {
        printf("Resto = 0\nPAR\n");
    }
    // Senão impar e resto da divisão = 1
    else {
        printf("Resto = 1\nIMPAR\n");
    }
}