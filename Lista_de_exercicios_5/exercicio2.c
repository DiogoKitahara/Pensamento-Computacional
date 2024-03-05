#include <stdio.h>

main() {
    // Declarar variaveis
    int i = 0, contador_par, contador_impar, numero;
    // Loop que repete 132 vezes
    while (i < 132) {
        // Pedir e armazenar numero
        printf("Numero: ");
        scanf("%d", &numero);
        // Se par, contador par + 1
        if (numero % 2 == 0){
            contador_par++;
        }
        // Senão contador impar + 1
        else{
            contador_impar++;
        }
        i++;
    }
    // Imprimir quantidade de números de pares e impares
    printf("Numeros pares: %d\nNumeros impares: %d\n", contador_par, contador_impar);
}