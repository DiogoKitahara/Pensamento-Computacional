#include <stdio.h>

main() {
    // Declarar as variaveis
    float trabalho, avaliacao, exame, media, peso_trabalho, peso_avaliacao, peso_exame;
    // Armazenar as notas e seus pesos
    printf("Nota do trabalho = ");
    scanf("%f", &trabalho);
    peso_trabalho = 2;
    printf("Nota do avaliacao = ");
    scanf("%f", &avaliacao);
    peso_avaliacao = 3;
    printf("Nota do exame = ");
    scanf("%f", &exame);
    peso_exame = 5;
    // Calcular e imprimir a media
    media = ((trabalho * peso_trabalho) + (avaliacao * peso_avaliacao) + (exame * peso_exame)) / (peso_trabalho + peso_avaliacao + peso_exame);
    printf("Media = %.2f\n", media);
    // Se media >= 8 && <= 10
    if (media >= 8 && media <= 10) {
   	 printf("Conceito = A\n");
    }
    // Se media >= 7 && < 8
    else if (media >= 7 && media < 8) {
   	 printf("Conceito = B\n");
    }
    // Se media >= 6 && < 7
    else if (media >= 6 && media < 7) {
   	 printf("Conceito = C\n");
    }
    // Se media >= 5 && < 6
    else if (media >= 5 && media < 6) {
   	 printf("Conceito = D\n");
    }
    // Senão
    else if (media >= 0 && media < 5) {
   	 printf("Conceito = E\n");
    }
    else if (media < 0) {
        printf("Media menor do que 0, por favor tente novamente\n");
    }
    else {
        printf("Media maior do que 10, por favor tente novamente\n");
    }
}
