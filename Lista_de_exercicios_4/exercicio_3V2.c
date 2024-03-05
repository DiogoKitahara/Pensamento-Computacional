#include <stdio.h>

main()
{
    // Declarar variaveis
    int codigo;
    float preco_normal, preco_final;
    // Armazenar o codigo e o preço de venda normal
    printf("Preco normal = ");
    scanf("%f", &preco_normal);
    printf("Codigo = ");
    scanf("%i", &codigo);
    // Imprimir o valor de venda
    printf("Valor de venda = %.2f\n", preco_normal);
    // Switch case variavel codigo
    switch (codigo)
    {
        // codigo 1, desconto 10%
    case 1:
        printf("Valor do desconto = 10%%\n");
        preco_final = preco_normal * 0.9;
        break;
        // codigo 2, desconto 5%
    case 2:
        printf("Valor do desconto = 5%%\n");
        preco_final = preco_normal * 0.95;
        break;
        // codigo 3, preco normal
    case 3:
        preco_final = preco_normal;
        break;
        // codigo 4, juros de 10%
    case 4:
        printf("Valor do juros = 10%%\n");
        preco_final = preco_normal * 1.1;
        break;
        // Default esta condicao nao existe
    default:
        printf("Esse codigo nao existe, por favor tente novamente\n");
    }
    // Imprimir o valor total a ser pago
    printf("Valor total = %.2f\n", preco_final);
}