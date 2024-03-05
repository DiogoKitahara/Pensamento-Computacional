#include <stdio.h>

main() {
    // Declarar variaveis
    int num1, num2, C;
    printf("num1 = ");
    scanf("%i", &num1);
    printf("num2 = ");
    scanf("%i", &num2);
    // Se n1 = n2, c = n1 + n2
    if (num1 == num2) {
        C = num1 + num2;
    }
    // Senão, C = n1 * n2
    else {
        C = num1 * num2;
    }
    // Printar o valor de c
    printf("C = %i\n", C);
}