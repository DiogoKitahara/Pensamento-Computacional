#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

main() {
    // Declarar variaveis
    int numero, maior_numero = 0, menor_numero = 0;
    bool inicio_leitura = true;
    // Armazenar o numero
    printf("Numero: ");
    scanf("%d", &numero);
    // Loop até digitar o valor 0
    while(numero != 0) {
        // Se o valor for negativo desconsiderar e escrever uma mensagem
        if (numero < 0) {
            printf("Numeros negativos serao desconsiderados\n");
        }
        // Senão
        else {
            if (inicio_leitura == true) {
                maior_numero = numero;
                menor_numero = numero;
                inicio_leitura = false;
            }
            // Se numero > maior numero
            if (numero > maior_numero){
                // maior numero = numero
                maior_numero = numero;
            }
            // Se numero < menor numero
            if (numero < menor_numero){
                // menor numero = numero
                menor_numero = numero;
            }
        }
        // Armazenar o numero
        printf("Numero: ");
        scanf("%d", &numero);
    }
    // Imprimir o maior e o menor numero
    printf("Maior numero: %d\nMenor numero: %d\n", maior_numero, menor_numero);
}