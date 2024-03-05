#include <stdio.h>

main() {
    // Declarar variaveis
    int idade, contador;
    float altura, media, soma_altura;
    // Armazenar idade
    printf("Idade: ");
    scanf("%d", &idade);
    // While idade > 0
    while (idade > 0) {
        // Armazenar altura
        printf("Altura: ");
        scanf("%f", &altura);
        // Se idade > 50
        if (idade > 50) {
            // somar todas as alturas
            soma_altura += altura;
            contador++;
        }
        // Armazenar idade
        printf("Idade: ");
        scanf("%d", &idade);
    }
    // Calcular a media da altura das pessoas com mais de 50 anos
    media = (float) soma_altura / contador;
    // Imprimir a media 
    printf("Media da altura das pessoas com mais de 50 anos: %.2f\n", media);
}