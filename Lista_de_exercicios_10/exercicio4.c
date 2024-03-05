#include <stdio.h>
#define TF 10

main() {
	// Declarar variaveis
	int i, vetor_quantidade[TF], quantidade_total = 0;
	float vetor_preco[TF], valor_total;
	// Loop repete 10 vezes
	for(i = 0; i < TF; i++){
		printf("Vendedor %d\n", i + 1);
		// Armazenar quantidade de pecas em um vetor
		printf("Quantidades de pecas: ");
		scanf("%d", &vetor_quantidade[i]);
		// Armazenar preco em um vetor
		printf("Preco da peca: ");
		scanf("%f", &vetor_preco[i]);
		// Calcular o valot total de venda de cada vendedor
		valor_total = (float) vetor_quantidade[i] * vetor_preco[i];
		// Imprimir valor total
		printf("Vendedor %d obteve um valor total de venda de: %.2f\n", i+1, valor_total);
		printf("--------------------------------------\n");
		// Calcular quantidade total de pecas vendidas por todos os vendedores
		quantidade_total += vetor_quantidade[i];
	}
	// Imprimir quantidade total
	printf("Quantidade total de pecas vendidas por todos os vendedores: %d\n", quantidade_total);
}
