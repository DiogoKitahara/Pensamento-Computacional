#include <stdio.h>

main() {
	// Declarar variaveis
	int par, maior_par = 0, dia = 1, maior_dia = 0;
	// Loop que repete 31 vezes (quantidade de dias de Março)
	while (dia <= 31) {
		// Armazenar par
		printf("Dia %d\n", dia);
		printf("Par: ");
		scanf("%d", &par);
		// Se par > maior par, armazenar dia e quantidade
		if (par > maior_par) {
			maior_par = par;
			maior_dia = dia;
		}	
		dia++;
	}
	// Imprimir dia e quantidade 
	printf("No dia %d de Março teve a maior venda de %d pares\n", maior_dia, maior_par);
}
