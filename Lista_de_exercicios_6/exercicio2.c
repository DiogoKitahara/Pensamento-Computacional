#include <stdio.h>
#include <ctype.h>

main() {
	// Declarar variaveis
	int refeicoes, cont_total = 0, cont_menos_10 = 0, cont_entre_10_20 = 0, cont_mais_20 = 0;
	char pessoas;
	// Armazenar a resposta
	printf("Realizar pesquisa [S = sim / N = nao]: ");
	scanf("%c", &pessoas);
	pessoas = toupper(pessoas);
	// Loop at� char != 'S'
	while (pessoas == 'S'){
		// Perguntar refeicao
		printf("Refeicoes no mes: ");
		scanf("%d", &refeicoes);
		// contar o n�mero de todos os alunos entrevistados
		cont_total++;
		// contar alunos menos de 10 refei��es
		if (refeicoes < 10){
			cont_menos_10++;
		}
		// contar alunos entre 10 e 20 refei��es
		if (refeicoes >= 10 && refeicoes <=20){
			cont_entre_10_20++;
		}
		// contar alunos com mais de 20 refei��es
		if (refeicoes > 20){
			cont_mais_20++;
		}
		// Perguntar de novo
		fflush(stdin);
		printf("Possui mais alunos(S / N) ");
		scanf("%c", &pessoas);
	}
	// Imprimir a quantidade de alunos
	printf("Total de alunos entrevistados: %d\n", cont_total);
	printf("Alunos com menos de 10 refeicoes: %d\n", cont_menos_10);
	printf("Alunos entre 10 e 20 refeicoes: %d\n", cont_entre_10_20);
	printf("Alunos com mais de 20 refeicoes: %d\n", cont_mais_20);
}
