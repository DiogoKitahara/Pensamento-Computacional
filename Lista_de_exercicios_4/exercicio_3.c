#include <stdio.h>

main() {
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
    // Se condicao = 1, desconto de 10%
    if (codigo == 1) {
        printf("Valor do desconto = 10%%\n");
        preco_final = preco_normal * 0.9; 
    }
    // Se condicao = 2, desconto de 5%
    else if (codigo == 2) {
        printf("Valor do desconto = 5%%\n");
        preco_final = preco_normal * 0.95;
    }
    // Se condicao = 3, preço normal
    else if (codigo == 3) {
        preco_final = preco_normal;
    }
    // Se condicao = 4, juros de 10%
    else if (codigo == 4) {
        printf("Valor do juros = 10%%\n");
        preco_final = preco_normal * 1.1;
    }
    // Senão, esta condição não existe
    else {
        printf("Esse codigo nao existe, por favor tente novamente\n");
    }
    // Imprimir o valor total a ser pago
    printf("Valor total = %.2f\n", preco_final);
}