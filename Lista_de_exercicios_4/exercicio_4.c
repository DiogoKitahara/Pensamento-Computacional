#include <stdio.h>

main() {
    // Declarar variaveis
    float salario_base, salario_final, idade_adicionado, dependente_adicionado, ano_contratacao_adicionado;
    int idade, ano_contratacao, dependente, ano, multiplicador, ano_de_casa;
    // Armazenar salario, idade, ano de contratação, dependentes e o ano atual
    printf("Salario base: ");
    scanf("%f", &salario_base);
    printf("Ano de contratacao: ");
    scanf("%d", &ano_contratacao);
    printf("idade: ");
    scanf("%d", &idade);
    printf("Dependentes: ");
    scanf("%d", &dependente);
    printf("Ano atual: ");
    scanf("%d", &ano);
    // if idade > 25, 1%  cada ano
    if (idade > 25) {
        multiplicador = idade - 25;
        idade_adicionado = multiplicador * 0.01 * salario_base;
    }
    // Calcular 3% por cada ano de casa
    ano_de_casa = ano - ano_contratacao;
    ano_contratacao_adicionado = 0.03 * ano_de_casa * salario_base;
    // Calcular 5% por dependente
    dependente_adicionado = 0.05 * dependente * salario_base;
    salario_final = salario_base + idade_adicionado + ano_contratacao_adicionado + dependente_adicionado;
    printf("Salario final: %.2f\n", salario_final);
}