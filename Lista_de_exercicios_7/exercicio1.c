#include <stdio.h>
#include <ctype.h>

main() {
// Declarar variáveis
char situacao, continuar;
float preco, valor_do_aumento, imposto, novo_preco;
int categoria;
// Loop
do {
    // Armazenar preco
    printf("Preco: ");
    scanf("%f", &preco);
    printf("-------------------------------\n");
    // Armazenar categoria
    printf("1 - Limpeza\n");
    printf("2 - Alimentacao\n");
    printf("3 - Vestuario\n");
    printf("Categoria: ");
    scanf("%d", &categoria);
    printf("-------------------------------\n");
    // Armazenar situacao e deixar maiusculo
    printf("R - Produto necessita de refrigeracao\n");
    printf("N - Produto nao necessita de refrigeracao\n");
    printf("Situacao: ");
    fflush(stdin);
    scanf(" %c", &situacao);
    situacao = toupper(situacao);
    printf("-------------------------------\n");
    // Calcular o valor do aumento usando switch
    switch (categoria) {
        case 1:
            if (preco <= 25) {
                valor_do_aumento = preco * 0.05;
            }
            else {
                valor_do_aumento = preco * 0.12;
            }
            break;
        case 2:
            if (preco <= 25) {
                valor_do_aumento = preco * 0.08;
            }
            else {
                valor_do_aumento = preco * 0.15;
            }
            break;
        case 3:
            if (preco <= 25) {
                valor_do_aumento = preco * 0.1;
            }
            else {
                valor_do_aumento = preco * 0.18;
            }
            break;
    }
    // Calcular imposto
    if (categoria == 2 || situacao == 'R') {
        imposto = preco * 0.05;
    }
    else {
        imposto = preco * 0.08;
    }
    // Calcular novo preco
    novo_preco = preco + valor_do_aumento - imposto;
    printf("Valor do aumento: %.2f\n", valor_do_aumento);
    printf("Valor do imposto: %.2f\n", imposto);
    printf("Novo preco: %.2f\n", novo_preco);
    // Classificar de acordo com o novo preco
    if (novo_preco <= 50) {
        printf("Classficacao: promocao\n");
    }
    else if (novo_preco >= 120) {
        printf("Classificacao: extra\n");
    }
    else {
        printf("Classificacao: normal\n");
    }
    printf("-------------------------------\n");
    // Armazenar resposta e deixar maiusculo
    printf("Deseja continuar [S para sim / N para nao]? ");
    fflush(stdin);
    scanf(" %c", &continuar);
    continuar = toupper(continuar);
    } while (continuar == 'S');
}
