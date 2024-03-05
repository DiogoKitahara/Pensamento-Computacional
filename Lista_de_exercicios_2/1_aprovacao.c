#include <stdio.h>

main() {
    // Declarar as variaveis e armazenar as duas notas do aluno
    float nota1, nota2, media;
    printf("Nota 1 = ");
    scanf("%f", &nota1);
    printf("Nota 2 = ");
    scanf("%f", &nota2);
    // Calcular e mostra a média
    media = (nota1 + nota2) / 2;
    printf("Media = %.2f\n", media);
    // Se >= 6 Aprovado
    if (media >= 6) {
        printf("APROVADO\n");
    }
    // Senão Reprovado
    else {
        printf("REPROVADO\n");
    }
}