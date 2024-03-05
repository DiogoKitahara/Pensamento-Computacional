#include <stdio.h>
#include <stdbool.h>

main() {
	// Declarar variaveis
	int i, par, maior_par, maior_dia;
	bool inicio = true;
	// Loop 30 vezes
	for (i = 1; i <= 30; i++) {
		// Ler quantidade de pares vendidos
		printf("Dia %d\n", i);
		printf("Quantidade de pares vendidos: ");
		scanf("%d", &par);
		// Atribuir valores para os maiores
		if (inicio == true) {
			maior_par = par;
			maior_dia = i;
			inicio = false;
		}
		// Se par vendido maior maior par		
		if (par > maior_par) {
			// Armazenar dia no maior dia
			maior_dia = i;
			// Armazenar par no maior par
			maior_par = par;
		}
	}
	// Imprimir resultado	
	printf("Dia em que ocorreu a maior venda: %d\n", maior_dia);
	printf("Maior quantidade de venda em um dia: %d\n", maior_par);
}
