#include <stdio.h>

main(void) {
    // Pegar o valor da lado de um quadrado
    float lado;
    printf("Lado = ");
    scanf("%f", &lado);
    // Calcular area
    float area = lado * lado;
    // Calcular perímetro
    float perimetro = lado * 4;
    // Printar o valor da área e perímetro
    printf("Area = %.2f\nPerimetro = %.2f\n",area, perimetro);
}
