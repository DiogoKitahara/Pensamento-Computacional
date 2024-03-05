#include <stdio.h>

main() {
    // Declarar as variaveis e armazenar o salario
    float salario, reajuste, novo_salario;
    printf("Salario = ");
    scanf("%f", &salario);
    // Se o salario <= 800, reajuste de 50%
    if (salario <= 800) {
        // Calcular e exibir a porcentagem de reajuste
        reajuste = salario * 0.5;
        printf("Reajuste = 50%%\n");
    }
    // Senão reajuste de 30%
    else {
        // Calcular e exibir a porcentagem de reajuste
        reajuste = salario * 0.3;
        printf("Reajuste = 30%%\n");
    }
    // Calculara e printar o novo salário
    novo_salario = salario + reajuste;
    printf("Novo salario = %.2f\n", novo_salario);
}