#include <stdio.h>

int main() {
    // Declarar variaveis
    int megacena []= {23,12,6,5,19,36}, aposta[6], i, j, contador = 0;
    // Pegar os numeros da aposta
    for(i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &aposta[i]);
    }
    // Comparar o numero da megacena com a aposta
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (aposta[i] == megacena[j]) {
                // Contar os acertos
                contador++;
            }
        }
    }
    // Imprimir mensagem de acordo com a quantidade de acertos
    switch(contador) {
        case 4:
            printf("A quadra\n");
            break;
        case 5:
            printf("A quina\n");
            break;
        case 6:
            printf("A sena");
            break;
        default:
            printf("Tente novamente\n");
    }
}