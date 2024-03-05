#include <stdio.h>
#include <math.h>

main () {
	int i = 0;
	float numero, h, numero_quadrado;
	printf("Numero: ");
	scanf("%f", &numero);
	for (i = 1; i <= 3; i++) {
		numero_quadrado = pow (numero, i);
		h += numero_quadrado / (51 - i);
	}
	printf("%.2f", h);
}

