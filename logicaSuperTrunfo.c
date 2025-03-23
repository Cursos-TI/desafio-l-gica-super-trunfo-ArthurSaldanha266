#include <stdio.h>

int main() {

    // Definir estruturas para armazenar os dados das cartas
    struct Carta {
        char estado;
        char codigo_da_carta[100];
        char cidade[90];
        int populacao;
        float area;
        float pib;
        int turistico;
        float densidade_populacional;
        float pib_per_capita;
        float super_poder;
    };

    
    struct Carta carta1, carta2;

    //Carta 1
    printf("Digite os dados da primeira carta:\n");

    printf("Digite seu estado de A até H: ");
    scanf(" %c", &carta1.estado);

    printf("Digite o codigo da carta (ex: A01, G04...): ");
    scanf("%99s", carta1.codigo_da_carta);

    printf("Digite o nome da sua cidade: ");
    scanf("%89s", carta1.cidade);

    printf("Digite a quantidade da população: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &carta1.turistico);

    // Cálculos da Carta 1
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;

    // Calcular Super Poder da Carta 1
    carta1.super_poder = (float)carta1.populacao + carta1.area + carta1.pib + carta1.turistico + carta1.pib_per_capita + (1 / carta1.densidade_populacional);

    // Exibir os dados da Carta 1
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código da carta: %s\n", carta1.codigo_da_carta);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.turistico);

    printf("\nAgora, vamos dar uma olhada nos números interessantes sobre %s:\n", carta1.cidade);
    printf("A densidade populacional de %s é de %.2f habitantes por km².\n", carta1.cidade, carta1.densidade_populacional);
    printf("Ou seja, em média, há %.2f pessoas em cada quilômetro quadrado de %s.\n", carta1.densidade_populacional, carta1.cidade);
    printf("O PIB per capita de %s é de R$ %.2f por pessoa.\n", carta1.cidade, carta1.pib_per_capita);
    printf("Isso significa que, em média, cada morador de %s teria aproximadamente esse valor de riqueza gerada em sua cidade.\n", carta1.cidade);
    printf("O Super Poder de %s é: %.2f\n", carta1.cidade, carta1.super_poder);

    //Carta 2
    printf("\n--- Dados da Segunda Carta ---\n");

    printf("Digite seu estado de A até H: ");
    scanf(" %c", &carta2.estado);

    printf("Digite o codigo da carta (ex: A01, G04...): ");
    scanf("%99s", carta2.codigo_da_carta);

    printf("Digite o nome da sua cidade: ");
    scanf("%89s", carta2.cidade);

    printf("Digite a quantidade da população: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &carta2.turistico);

    // Cálculos da Carta 2
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    // Calcular Super Poder da Carta 2
    carta2.super_poder = (float)carta2.populacao + carta2.area + carta2.pib + carta2.turistico + carta2.pib_per_capita + (1 / carta2.densidade_populacional);

    // Exibir os dados da Carta 2
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código da carta: %s\n", carta2.codigo_da_carta);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.turistico);

    printf("\nAgora, vamos dar uma olhada nos números interessantes sobre %s:\n", carta2.cidade);
    printf("A densidade populacional de %s é de %.2f habitantes por km².\n", carta2.cidade, carta2.densidade_populacional);
    printf("Ou seja, em média, há %.2f pessoas em cada quilômetro quadrado de %s.\n", carta2.densidade_populacional, carta2.cidade);
    printf("O PIB per capita de %s é de R$ %.2f por pessoa.\n", carta2.cidade, carta2.pib_per_capita);
    printf("Isso significa que, em média, cada morador de %s teria aproximadamente esse valor de riqueza gerada em sua cidade.\n", carta2.cidade);
    printf("O Super Poder de %s é: %.2f\n", carta2.cidade, carta2.super_poder);

    // Comparação entre as cartas (escolhendo o atributo PIB para comparação)
    printf("\n--- Comparação entre as Cartas ---\n");
    printf("Comparação de Cartas (Atributo: População):\n");
    printf("Carta 1 - %s (População: %d)\n", carta1.cidade, carta1.populacao);
    printf("Carta 2 - %s (População: %d)\n", carta2.cidade, carta2.populacao);
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    }

    // Comparando Densidade Populacional (menor vence)
    printf("\nComparação de Cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (Densidade Populacional: %.2f)\n", carta1.cidade, carta1.densidade_populacional);
    printf("Carta 2 - %s (Densidade Populacional: %.2f)\n", carta2.cidade, carta2.densidade_populacional);
    if (carta1.densidade_populacional < carta2.densidade_populacional) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    }

    return 0;
}
