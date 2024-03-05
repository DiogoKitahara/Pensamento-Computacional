#include <stdio.h>
#include <ctype.h>

main() {
    // Pegar o ano de nascimento da pessoa e o ano atual
    int ano_nascimento, ano_atual;
    printf("Ano de nascimento = ");
    scanf("%d", &ano_nascimento);
    printf("Ano atual = ");
    scanf("%d", &ano_atual);
    // Calcular sua idade
    int idade = ano_atual - ano_nascimento;
    // Printar sua idade
    printf("Idade = %i\n", idade);
}