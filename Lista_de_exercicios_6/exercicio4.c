#include <stdio.h>
#include <ctype.h>

main() {
    // Declarar variaveis
    int idade, cont_total_sim = 0, cont_total_nao = 0, cont_total_indiferente = 0, cont_total = 0, cont_feminino_sim = 0, cont_masculino_nao = 0, cont_masculino_ate_20_sim = 0, cont_feminino_ate_20_nao = 0;
    float percentual_nao = 0;
    char sexo, resposta, pesquisa;
    // Ver se deseja realizar a pesquisa
    printf("Deseja realizar a pesquisa ['S' = sim / 'N' = nao]: ");
    scanf(" %c", &pesquisa);
    fflush(stdin);
    pesquisa = toupper(pesquisa);
    // While pesquisa = 'S'
    while (pesquisa == 'S') {
        // Armazenar sexo, idade e resposta
        printf("Sexo [F = feminino / M = masculino]: ");
        scanf(" %c", &sexo);
        printf("Idade: ");
        scanf("%d", &idade);
        fflush(stdin);
        printf("Resposta [S = sim / N = nao / I = indiferente]: ");
        scanf(" %c", &resposta);
        fflush(stdin);
        // Deixar as respostas em letra maiúscula
        sexo = toupper(sexo);
        resposta = toupper(resposta);
        // contador total++
        cont_total++;
        // Se resposta 'S'
        if (resposta == 'S'){
            // resposta total sim++
            cont_total_sim++;
            // Se sexo = 'F'
            if (sexo == 'F') {
                // resposta feminino sim++
                cont_feminino_sim++;
            }
            // Se sexo = 'M' && idade <= 20
            if (sexo == 'M' && idade <= 20) {
                // masculino ate 20++
                cont_masculino_ate_20_sim++;
            }
        }
        // Se resposta 'N'
        if (resposta == 'N') {
            // resposta total não++
            cont_total_nao++;
            // Se sexo = 'M'
            if (sexo == 'M') {
                // resposta masculino nao++
                cont_masculino_nao++;
            }
            // Se sexo = 'F' && idade <= 20
            if (sexo == 'F' && idade <= 20) {
                // feminino ate 20++
                cont_feminino_ate_20_nao++;
            }
        }
        // Se resposta 'I'
        if (resposta == 'I') {
            // resposta total indiferente++
            cont_total_indiferente++;
        }
        // Perguntar se deseja continuar a entrevista
        printf("Deseja continuar [S = sim / N = nao]: ");
        scanf(" %c", &pesquisa);
        pesquisa = toupper(pesquisa);
        printf("========================\n");
    }
    // percentual nao = resposta total nao / contador total
    percentual_nao = (float) cont_total_nao / cont_total * 100;
    // Imprimir resultados
    printf("Pessoas entrevistadas: %d\n", cont_total);
    printf("Pessoas disseram sim: %d\n", cont_total_sim);
    printf("Pessoas disseram nao: %d\n",cont_total_nao);
    printf("Pessoas disseram indiferente: %d\n", cont_total_indiferente);
    printf("Percentual de pessoas que disseram nao: %.2f%%\n", percentual_nao);
    printf("Mulheres disseram sim: %d\n", cont_feminino_sim);
    printf("Homens disseram nao: %d\n", cont_masculino_nao);
    printf("Homens ate 20 anos que disseram sim: %d\n", cont_masculino_ate_20_sim);
    printf("Mulheres ate 20 anos que disseram nao: %d\n", cont_feminino_ate_20_nao);
}