#include <stdio.h>
#include <ctype.h>

main() {
	// Declarar variaveis
	int idade, contador_feminino = 0, contador_feminino_idade = 0, contador_masculino_sim = 0, contador_feminino_sim = 0, contador_nao = 0, contador_sim = 0, contador_total = 0;
	char sexo, resposta, continuar;
	float porcentagem_masculino, porcentagem_feminino;
	// Loop usando do while
	do {
		// Armazenar sexo, idade e resposta
		printf("Sexo[M - masculino / F - feminino]: ");
		fflush(stdin);
		scanf("%c", &sexo);
		sexo = toupper(sexo);
		printf("Idade: ");
		scanf("%d", &idade);
		printf("Resposta [S / N]: ");
		fflush(stdin);
		scanf("%c", &resposta);
		resposta = toupper(resposta);
		contador_total++;
		switch (sexo) {
			// Sexo feminino
			case 'F':
				// Incrementar 1
				contador_feminino++;
				//Idade entre 20 e 30
				if (idade >= 20 && idade <= 30){
					//  Resposta 'N'
					if (resposta == 'N'){
						contador_feminino_idade++;
					}
				}
				// Feminino disse sim
				if (resposta == 'S') {
					contador_feminino_sim++;
					contador_sim++;
				}
				// Total disse nao
				else {
					contador_nao++;
				}
				break;
			// Se sexo = 'M'
			case 'M':
				// Resposta = 'S'
				if (resposta == 'S') {
					contador_masculino_sim++;
					contador_sim++;
				}
				// Total disse nao
				else {
					contador_nao++;
				}
				break;
		}	
		printf("----------------------------------------\n");
		// Continuar ou nao
		printf("Deseja continuar[S / N]? ");
		fflush(stdin);
		scanf("%c", &continuar);
		continuar = toupper(continuar);
		printf("----------------------------------------\n");
	} while (continuar == 'S');
	// 'F' que responderam
	printf("Mulheres que responderam: %d\n", contador_feminino);
	// 'M' que disse 'S'
	printf("Homens que disseram sim: %d\n", contador_masculino_sim);
	// 'F' entre 20 e 30 e respondeu 'N'
	printf("Mulheres que tem entre 20 e 30 anos e responderam nao: %d\n", contador_feminino_idade);
	// Porcentagem de homens e mulheres responderam sim
	porcentagem_masculino = (float)contador_masculino_sim / contador_total * 100.0;
	porcentagem_feminino = (float)contador_feminino_sim / contador_total * 100.0;
	printf("Porcentagem de homens que responderam sim: %.2f%%\n", porcentagem_masculino);
	printf("Porcentagem de mulheres que responderam sim: %.2f%%\n", porcentagem_feminino);
	// Qual a maior porcentagem 'S' ou 'N'
	if (contador_sim > contador_nao){
		printf("Sim possui maior porcentagem\n");
	}
	else if (contador_sim < contador_nao) {
		printf("Nao possui maior porcentagem\n");
	}
	else {
		printf("Mesma quantidade de Sim e Nao\n");
	}
}