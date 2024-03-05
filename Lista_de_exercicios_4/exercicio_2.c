#include <stdio.h>

main()
{
    // Declarar variáveis
    int numero1, numero2, resto1, resto2;
    float operacao;
    // Armazenar o valor de dois números
    printf("Numero 1 = ");
    scanf("%i", &numero1);
    printf("Numero 2 = ");
    scanf("%i", &numero2);
    // Verificar e exibir se são pares ou ímpares 
    resto1 = numero1 % 2;
    resto2 = numero2 % 2;
    // Se 2 pares, adição
    if (resto1 == 0 && resto2 == 0) {
        operacao = numero1 + numero2;
        printf("Primeiro numero = PAR\n");
        printf("Segundo numero = PAR\n");
        printf("%i + %i = %.2f\n", numero1, numero2, operacao);
    }
    // Se 2 ímpares, subtração
    if (resto1 == 1 && resto2 == 1) {
        operacao = numero1 - numero2;
        printf("Primeiro numero = IMPAR\n");
        printf("Segundo numero = IMPAR\n");
        printf("%i - %i = %.2f\n", numero1, numero2, operacao);
    }
    // Se primeiro par e segundo ímpar, multiplicação
    if (resto1 == 0 && resto2 == 1) {
        operacao = numero1 * numero2;
        printf("Primeiro numero = PAR\n");
        printf("Segundo numero = IMPAR\n");
        printf("%i * %i = %.2f\n", numero1, numero2, operacao);
    }
    // Se primeiro ímpar e segundo par, divisão
    if (resto1 == 1 && resto2 == 0) {
        operacao = (float) numero1 / numero2;
        printf("Primeiro numero = IMPAR\n");
        printf("Segundo numero = PAR\n");
        printf("%i / %i = %.2f\n", numero1, numero2, operacao);
    }
}