#include <stdio.h>
#include <ctype.h>

main() {
    // Declarar variaveis
    int idade, ano_contratacao, ano_atual, ano_empresa, desconto_acrescimo;
    float salario_base, salario_final, reajuste;
    char sexo;
    // Armazenar idade, sexo, salario base, ano contratação e matricula
    printf("Sexo: ");
    scanf("%c", &sexo);
    printf("Idade: ");
    scanf("%i", &idade);
    printf("Ano atual: ");
    scanf("%i", &ano_atual);
    printf("Ano contratacao: ");
    scanf("%i", &ano_contratacao);
    printf("Salario: ");
    scanf("%f", &salario_base);
    // Deixar o sexo sempre maiúsculo
    sexo = toupper(sexo);
    // Calcular quantos anos de empresa
    ano_empresa = ano_atual - ano_contratacao;
    // Se idade >= 18 && <= 39
    if (idade >= 18 && idade <= 39) {
        // Se M, 10% de reajuste
        if (sexo == 'M'){
            reajuste = 0.1;
            if (ano_empresa > 10) {
                desconto_acrescimo = 17;
            }
            else {
                desconto_acrescimo = -10;
            }
        }
        // Se F, 8% de reajuste
        if (sexo == 'F') {
            reajuste = 0.08;
            if (ano_empresa > 10) {
                desconto_acrescimo = 16;
            }
            else {
                desconto_acrescimo = -11;
            }
        }
    }
    // Senão se idade >= 40
        if (idade >= 40) {
        // Se M, 8% de reajuste
        if (sexo == 'M'){
            reajuste = 0.08;
            if (ano_empresa > 10) {
                desconto_acrescimo = 15;
            }
            else {
                desconto_acrescimo = -5;
            }
        }
        // Se F, 10% de reajuste
        if (sexo == 'F') {
            reajuste = 0.1;
            if (ano_empresa > 10) {
                desconto_acrescimo = 14;
            }
            else {
                desconto_acrescimo = -7;
            }
        }
    }
    // Senão se idade >= 70
            if (idade >= 70) {
        // Se M, 15% de reajuste
        if (sexo == 'M'){
            reajuste = 0.15;
            if (ano_empresa > 10) {
                desconto_acrescimo = 13;
            }
            else {
                desconto_acrescimo = -15;
            }
        }
        // Se F, 17% de reajuste
        if (sexo == 'F') {
            reajuste = 0.17;
            if (ano_empresa > 10) {
                desconto_acrescimo = 12;
            }
            else {
                desconto_acrescimo = -17;
            }
        }
    }
    // Calcular salario final
    salario_final = salario_base + (salario_base * reajuste) + desconto_acrescimo;
    // Imprimir salario final
    printf("Salario final: %.2f\n", salario_final);
}