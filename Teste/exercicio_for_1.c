#include <stdio.h>

main () {
	int i, divisor = 1;
	float h = 0;
	for(i = 1; i <= 10; i++){
		divisor = i * i;
		h = (float) h + i / divisor;
	}
	printf("%.2f", h);
}

