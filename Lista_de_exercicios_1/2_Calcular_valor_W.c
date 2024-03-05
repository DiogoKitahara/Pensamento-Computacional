#include <stdio.h>

main(void) {
    // Pegar o valor de T
    float t, x, y, w;
    printf("T = ");
    scanf("%f", &t);
    // Calcular o valor de X, Y e W, nesta respectiva ordem
    x = 2 * t - 4;
    y = t / 2 + 4;
    w = 2 * t + 4 * y - 3 * x;
    // Printar o valor de W
    printf("W = %.2f\n", w);
}
