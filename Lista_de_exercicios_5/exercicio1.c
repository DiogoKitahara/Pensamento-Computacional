#include <stdio.h>

main() {
    // Declarar variaveis
    int i = 0, idade, contador_maioridade = 0;
    // Loop que repete 10 vezes
    while (i < 10) {
        // Armazena a idade
        printf("Idade: ");
        scanf("%d", &idade);
        // Condição de maioridade, contador +1
        if(idade >= 18) {
            contador_maioridade++;
        }
        i++;
    }
    // Imprimir quantas pessoas são maiores de idade
    printf("Quantidade de pessoas maiores de idade: %d\n", contador_maioridade);
}