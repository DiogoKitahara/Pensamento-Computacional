#include <stdio.h>

main() {
    // Declarar variaveis
    int i = 0, chapa_votada, chapa1 = 0, chapa2 = 0, chapa3 = 0, voto_branco = 0, voto_nulo = 0;
    // Loop 200 vezes
    while(i < 200)
    {
        // Armazenar a chapa votada
        printf("1 - Chapa 1\n");
        printf("2 - Chapa 2\n");
        printf("3 - Chapa 3\n");
        printf("4 - Voto em Branco\n");
        printf("5 - Voto Nulo\n");
        printf("Voto do eleitor: ");
        scanf("%d", &chapa_votada);
        // Switch case
        switch (chapa_votada) {
            // Se 1, chapa1++
            case 1: 
                chapa1++;
                break;
            // Se 2, chapa2++
            case 2: 
                chapa2++;
                break;
            // Se 3, chapa3++
            case 3: 
                chapa3++;
                break;
            // Se 4, voto_branco++
            case 4:
                voto_branco++;
                break;
            case 5: 
                voto_nulo++;
            // Senão, opcao invalida
            default: printf("Opcao invalida\n");
        }
        printf("---------------------------------\n");
        // incrementar +1 no i 
        i++;
    }
    // Imprimir o resultado final
    printf("Resultado\n");
    printf("Chapa 1: %d votos\n", chapa1);
    printf("Chapa 2: %d votos\n", chapa2);
    printf("Chapa 3: %d votos\n", chapa3);
    printf("Votos em branco: %d votos\n", voto_branco);
    printf("Votos nulo: %d votos\n", voto_nulo);
    // Se mais de 50% dos votos imprimir chapa vencedora
    if (chapa1 > 100) {
        printf("Chapa 1 vence com mais de 50%% dos votos\n");
    }
    else if (chapa2 > 100) {
        printf("Chapa 2 vence com mais de 50%% dos votos\n");
    }
    else if (chapa3 > 100) {
        printf("Chapa 3 vence com mais de 50%% dos votos\n");
    }
    // Senão realizar um segundo turno
    else {
        printf("Devera ser realizado um segundo turno\n");
    }
}