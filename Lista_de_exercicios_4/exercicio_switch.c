#include <stdio.h>
#include <math.h>
#include <ctype.h>

main()
{
    // Declarar variaveis
    char opcao;
    int num1, num2;
    // Armazenar a opcao desejada
    printf("Opcao: ");
    scanf("%c", &opcao);
    int upper = toupper(opcao);
    // switch case com a variavel opcao
    switch (toupper(opcao))
    {
    // S - soma
    case 'S':
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
        float soma = num1 + num2;
        printf("%d + %d = %.2f\n", num1, num2, soma);
      break;
    // M - media
    case 'M':
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);             
        float media = (float)(num1 + num2) / 2;
        printf("Media = %.2f\n", media);
      break;
    // R - raiz quadrada
    case 'R':
        printf("Digite um número: ");
        scanf("%d", &num1);
        float raiz = sqrt(num1);
        printf("Raiz quadrada = %.2f\n", raiz);
      break;
    // P - potencia
    case 'P':
        printf("Digite um número: ");
        scanf("%d", &num1);
        float potencia = num1 * num1;
        printf("Potencia = %.2f\n", potencia);
      break;
    // F - finalizar
    case 'F':
        printf("=-=-=-=-=-= Programa finalizado =-=-=-=-=-=\n");
      break;
    }
}
