#include <stdio.h>

main(void) {
    // Fornecer o valor em Fahrenheit
    float fahrenheit;
    printf("F = ");
    scanf("%f", &fahrenheit);
    // Calcular e printar o valor em Celsius
    float celsius = ((fahrenheit - 32) * 5) / 9;
    printf("C = %.2f\n", celsius);
}
