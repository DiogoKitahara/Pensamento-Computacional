#include <stdio.h>

main(void) {
    // Armazenar o valor de deposito e taxa de juros
    float deposito, taxa_de_juros;
    printf("Valor deposito = ");
    scanf("%f", &deposito);
    printf("Taxa de Juros = ");
    scanf("%f", &taxa_de_juros);
    // Calcular o valor do rendimento e o valor total
    float rendimento = deposito * (taxa_de_juros / 100);
    float valor_total = rendimento + deposito;
    // Exibir estes dados
    printf("Valor do rendimento = %.2f\nValor total do rendimento = %.2f\n", rendimento, valor_total);
}
