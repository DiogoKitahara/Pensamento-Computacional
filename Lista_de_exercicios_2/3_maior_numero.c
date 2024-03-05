#include <stdio.h>

main() {
    // Declarar variaveis e armazenar dois números distintos
    int numero1, numero2;
    printf("Numero 1 = ");
    scanf("%i", &numero1);
    printf("Numero 2 = ");
    scanf("%i", &numero2);
    // Se numero1 > numero2, numero1 é o maior
    if (numero1 > numero2) {
        printf("Maior numero = %i\n", numero1);
    }
    // Senão numero2 é o maior
    else {
        printf("Maior numero = %i\n", numero2);
    }
}