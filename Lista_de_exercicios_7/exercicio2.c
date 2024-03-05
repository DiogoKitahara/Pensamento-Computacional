#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

main () {
    // Declarar variáveis
    int cidade_codigo, veiculos, acidentes, menor_acidente, maior_acidente, menor_cidade, maior_cidade, soma_veiculo = 0, soma_acidente = 0, contador_veiculos = 0, contador_acidentes = 0;
    char continuar;
    float media_veiculo, media_acidente;
    bool iniciar = true;
    // Loop até usuário dizer 'N'
    do {
        // Armazenar codigo, veiculos, acidentes
        printf("Código da cidade: ");
        scanf("%d", &cidade_codigo);
        printf("Numero de veiculos de passeio: ");
        scanf("%d", &veiculos);
        printf("Numero de acidentes de transito: ");
        scanf("%d", &acidentes);
        // Iniciar valores das variaveis de comparacao
        if (iniciar == true) {
            menor_acidente = acidentes;
            maior_acidente = acidentes;
            maior_cidade = cidade_codigo;
            menor_cidade = cidade_codigo;
            iniciar = false;
        }
        // Se acidentes < menor_acidentes
        if (acidentes < menor_acidente) {
            // menor_acidentes = acidentes
            menor_acidente = acidentes;
            // menor_cidade = cidade
            menor_cidade = cidade_codigo;
        }
        // Se acidentes > maior_acidentes
        if (acidentes > maior_acidente) {
            // maior_acidentes = acidentes
            maior_acidente = acidentes;
            // maior_cidade = cidade
            maior_cidade = cidade_codigo;
        }
        // Somar a quantidade total de veículos para calcular a média depois de terminar o loop
        soma_veiculo += veiculos;
        contador_veiculos++;
        // Se veiculos < 2000
        if (veiculos < 2000) {
            // Somar a quantidade total de acidentes para calcular a media depois de terminar o loop
            soma_acidente += acidentes;
            contador_acidentes++;
        }
        // Perguntar se deseja continuar
        printf("Deseja continuar [S / N]: ");
        fflush(stdin);
        scanf(" %c", &continuar);
        continuar = toupper(continuar);
        printf("---------------------------------\n");
    } while (continuar == 'S');
    // Calcular media de veiculos
    media_veiculo = soma_veiculo / contador_veiculos;
    // Calcular media de acidentes
    media_acidente = soma_acidente / contador_acidentes;
    // Imprimir Resultados
    printf("A cidade %d é a que possui o maior numero de acidentes: %d\n", maior_cidade, maior_acidente);
    printf("A cidade %d é a que possui o menor numero de acidentes: %d\n", menor_cidade, menor_acidente);
    printf("Media de veiculos em todas as cidades: %.2f\n", media_veiculo);
    printf("Media de acidentes nas cidaddes com menos de 2000 veiculos: %.2f\n", media_acidente);
}