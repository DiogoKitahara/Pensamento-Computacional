#include <stdio.h>

main () {
	int i, divisor = 1;
	float h = 0;
	for(i = 1; i <= 4; i++){
		divisor = i * i;
		if (i % 2 == 0)
			h -= (float) i / divisor;
		else 
			h += (float) i / divisor;
	}
	printf("%.2f", h);
}

