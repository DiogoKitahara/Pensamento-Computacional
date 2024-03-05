#include <stdio.h>

main() {
    // Declarar variaveis
    int idade;
    // Armazenar a idade
    printf("Idade = ");
    scanf("%i", &idade);
    // Se idade >= 18, pode votar
    if (idade >= 18) {
        printf("Pode votar\n");
    }
}