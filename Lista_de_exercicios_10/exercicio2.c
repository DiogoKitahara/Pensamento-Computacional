#include <stdio.h>
#define TF 6

main() {
    // Declarar variaveis
    int i, vetor[TF], contador_impar = 0, contador_par = 0;
    // Loop se repete 6 vezes
    for(i = 0; i < TF; i++){
        // Armazenar numeros no vetor
        printf("Numero: ");
        scanf("%d", &vetor[i]);
        // Verificar se impar e incrementar contador
        if (vetor[i] % 2 != 0) {
            contador_impar++;
        }
        // Verificar se par e incrementar contador
        else {
            contador_par++;
        }
    }
    // Imprimir resultados
    printf("Quantidade de numeros pares: %d\n", contador_par);
    printf("Quantidade de numeros impares: %d\n", contador_impar);
}
