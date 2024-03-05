#include <stdio.h>

main() {
    // Declarar variaveis
    float altura, peso;
    int sexo;
    // Armazenar a altura e sexo (0 para mulher e 1 para homem)
    printf("Altura = ");
    scanf("%f", &altura);
    printf("Sexo (0 = mulher / 1 = homem) = ");
    scanf("%i", &sexo);
    // Se sexo == 0
    if (sexo == 0) {
        // Calcular peso ideal feminino
        peso =  62.1 * altura - 44.7;
    }
    // Senão
    else {
        // Calcular peso ideal masculino
        peso = 72.7 * altura - 58;
    }
    // Printar peso ideal
    printf("Peso ideal = %.1f\n", peso);
}
