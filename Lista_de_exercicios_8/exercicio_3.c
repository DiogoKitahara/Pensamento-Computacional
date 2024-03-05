#include <stdio.h>
#include <ctype.h>

main() {
	// Declarar variaveis
	int i, termo, idade, primeiro_termo = 0, contador_mulher = 0, soma_idades = 0;
	char sexo;
	float media_idade_feminino;
	// Loop 300 vezes
	for (i = 0; i < 300; i++){
		// Armazenar termo, idade, sexo
		printf("Sexo [M - Masculino / F - Feminino]: ");
		fflush(stdin);
		scanf("%c", &sexo);
		sexo = toupper(sexo);
		printf("Idade: ");
		scanf("%d", &idade);
		printf("Termo: ");
		scanf("%d", &termo);
		// Se termo == 1, incrementar contador
		if (termo == 1) {
			primeiro_termo++;	
		}
		// Se sexo == 'F'
		if (sexo == 'F') {
			// Somar idades, e incrementar contador mulher
			soma_idades += idade;
			contador_mulher++;
		}
	}
	// Realizar a media de idade feminino
	media_idade_feminino = (float) soma_idades / contador_mulher;
	// Printar resultados
	printf("Alunos inscritos no primeiro termo: %d\n", primeiro_termo);
	printf("Media de idade dos inscritos do sexo feminino: %f\n", media_idade_feminino);
}
