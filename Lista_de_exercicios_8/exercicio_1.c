#include <stdio.h>
#include <ctype.h>

main() {
	// Declarar variaveis
	int i, contador_mulher = 0, contador_populacao = 0, contador_homem = 0, contador_homem_alto = 0;
	float altura, soma_altura_mulher = 0, altura_populacao = 0, media_altura_mulher, media_altura_populacao;
	char sexo;
	// Loop 20 vezes
	for(i = 0; i < 20; i++) {
		// Ler altura e sexo
		printf("Altura: ");
		scanf("%f", &altura);
		printf("Sexo[F - Feminino / M - Masculino]: ");
		scanf(" %c", &sexo);
		sexo = toupper(sexo);
		// Se mulher
		if (sexo == 'F') {
			// Soma da altura das mulheres
			soma_altura_mulher += altura;
			// mulher++
			contador_mulher++;
		}	
		// Soma da altura da populaçao
		altura_populacao += altura;
		// populacao++
		contador_populacao++;
		// Se homem
		if (sexo == 'M') {
			// Quantidade de homens
			contador_homem++;
			// Se mais de 1.80 de altura
			if (altura > 1.8) {
				// homem_alto++
				contador_homem_alto++;
			}
		}
	}
	// realizar media altura mulher
	media_altura_mulher = (float)soma_altura_mulher / contador_mulher;
	// realizar media altura populacao
	media_altura_populacao = (float) altura_populacao / contador_populacao;
	printf("Media de altura das mulheres: %.2f\n", media_altura_mulher);
	printf("Media de altura da populacao: %.2f\n", media_altura_populacao);
	printf("Quantidade de homens: %d \n", contador_homem);
	printf("Quantidade de homens com mais de 1.80 de altura: %d \n", contador_homem_alto);
}
