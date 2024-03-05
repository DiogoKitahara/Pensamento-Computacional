#include <stdio.h>

main() {
	// Declarar variaveis
	int i, numero, codigo, kwh, contador_media = 0;
	float consumo_total = 0, custo_residencial, custo_comercial, custo_industrial, soma = 0, media;
	// Loop 100 vezes
	for (i = 0; i < 100; i++){
		// Armazenar numero do consumidor, kwh, codigo do tipo de consumidor
		printf("Numero do consumidor: ");
		scanf("%d", &numero);
		printf("kWh: ");
		scanf("%d", &kwh);
		// Calcular custo_residencial
		custo_residencial = kwh * 0.3;
		// Calcular custo_comercial 
		custo_comercial = kwh * 0.5;
		// Calcular custo_industrial
		custo_industrial = kwh * 0.7;
		// Calcular consumo total dos tres
		consumo_total = custo_residencial + custo_comercial + custo_industrial;
			// Soma do custo residencial
			soma += custo_residencial;
			// Incrementar contador media
			contador_media++;
			// Soma do custo comercial
			soma += custo_comercial;
			// Incrementar contador media
			contador_media++;
		// Imprimir custo total e total consumo para os tres tipos de consumidores
		printf("Custo total para consumidor residencial: %.2f\n", custo_residencial);
		printf("Custo total para consumidor comercial: %.2f\n", custo_comercial);
		printf("Custo total para consumidor industrial: %.2f\n", custo_industrial);
		printf("Total de consumo para os tres tipos de consumidor: %.2f\n", consumo_total);
	}
	// Calcular media de consumo dos tipos 1 e 2
	media = (float) soma / contador_media;
	// Imprimir resultados
	printf("Media de consumo dos tipos 1 e 2: %.2f\n", media);
}
