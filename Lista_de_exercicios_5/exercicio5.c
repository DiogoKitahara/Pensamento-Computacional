#include <stdio.h>

main()
{
    // Declarar variaveis
    int codigo;
    float salario;
    // Armazenar o codigo
    printf("Codigo [0 - Finalizar programa]: ");
    scanf("%d", &codigo);
    // While codigo != 0
    while (codigo != 0)
    {
        // Armazena salario
        printf("Salario: ");
        scanf("%f", &salario);
        // switch case
        switch (codigo)
        {
        // case 1, cargo escriturario, 50%
        case 1:
            printf("Cargo: Escriturario\nPercentual de aumento: 50%%\nSalario reajustado: %.2f\n", salario * 1.5);
            break;
        // case 2, cargo secretario, 35%
        case 2:
            printf("Cargo: Secretario\nPercentual de aumento: 35%%\nSalario reajustado: %.2f\n", salario * 1.35);
            break;
        // case 3, cargo caixa, 20%
        case 3:
            printf("Cargo: Caixa\nPercentual de aumento: 20%%\nSalario reajustado: %.2f\n", salario * 1.2);
            break;
        // case 4, cargo gerente, 10%
        case 4:
            printf("Cargo: Gerente\nPercentual de aumento: 10%%\nSalario reajustado: %.2f\n", salario * 1.1);
            break;
        // case 5, cargo diretor, 0%
        case 5:
            printf("Cargo: Diretor\nPercentual de aumento: 0%%\nSalario reajustado: %.2f\n", salario);
            break;
        // default, opção invalida
        default:
            printf("Opcao invalida\n");
        }
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        // Armazenar codigo
        printf("Codigo[0 - Finalizar programa]: ");
        scanf("%d", &codigo);
    }
}