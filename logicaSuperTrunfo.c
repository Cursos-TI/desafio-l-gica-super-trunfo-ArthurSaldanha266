#include <stdio.h>

int main() {

    // Carta 1
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

    // Coleta de dados para a primeira carta
    printf("Vamos criar a primeira carta!\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado); 

    printf("Digite o código da carta (ex: A01, G04...): ");
    scanf("%99s", codigo_da_carta); 

    printf("Digite o nome da sua cidade: ");
    scanf("%89s", cidade); 

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao); 

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area); 

    printf("Digite o PIB da cidade (em R$): ");
    scanf("%f", &pib); 

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico); 

    // Calculando a densidade populacional e PIB per capita
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    // Calculando o super poder
    super_poder = (float)populacao + area + pib + turistico + pib_per_capita + (1 / densidade_populacional);

    // Exibindo os dados da primeira carta
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos turísticos: %d\n", turistico);

    printf("\nAgora, vamos dar uma olhada nos números interessantes sobre %s:\n", cidade);
    printf("A densidade populacional de %s é de %.2f habitantes por km².\n", cidade, densidade_populacional);
    printf("Ou seja, em média, há %.2f pessoas em cada quilômetro quadrado de %s.\n", densidade_populacional, cidade);
    printf("O PIB per capita de %s é de R$ %.2f por pessoa.\n", cidade, pib_per_capita);
    printf("Isso significa que, em média, cada morador de %s teria aproximadamente esse valor de riqueza gerada em sua cidade.\n", cidade);

    printf("O Super Poder de %s é: %.2f\n", cidade, super_poder);

    // Carta 2
    printf("\n--- Coleta de Dados para a Segunda Carta ---\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado);

    printf("Digite o código da carta (ex: A01, G04...): ");
    scanf("%99s", codigo_da_carta);

    printf("Digite o nome da sua cidade: ");
    scanf("%89s", cidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em R$): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico);

    // Calculando a densidade populacional e PIB per capita
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    // Calculando o super poder
    super_poder = (float)populacao + area + pib + turistico + pib_per_capita + (1 / densidade_populacional);

    // Exibindo os dados da segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos turísticos: %d\n", turistico);

    printf("\nAgora, vamos dar uma olhada nos números interessantes sobre %s:\n", cidade);
    printf("A densidade populacional de %s é de %.2f habitantes por km².\n", cidade, densidade_populacional);
    printf("Ou seja, em média, há %.2f pessoas em cada quilômetro quadrado de %s.\n", densidade_populacional, cidade);
    printf("O PIB per capita de %s é de R$ %.2f por pessoa.\n", cidade, pib_per_capita);
    printf("Isso significa que, em média, cada morador de %s teria aproximadamente esse valor de riqueza gerada em sua cidade.\n", cidade);

    printf("O Super Poder de %s é: %.2f\n", cidade, super_poder);

    // Comparações das cartas
    printf("\n--- Comparações das Cartas ---\n");

    // Comparando população
    if (populacao > 0) {
        printf("Comparação de População: Carta 1 (%d) vs Carta 2 (%d)\n", populacao, populacao);
        printf("Resultado: Carta 1 venceu, com %d habitantes!\n", populacao);
    }

    // Comparando área
    if (area > 0) {
        printf("Comparação de Área: Carta 1 (%.2f km²) vs Carta 2 (%.2f km²)\n", area, area);
        printf("Resultado: Carta 1 venceu, com %.2f km²!\n", area);
    }

    // Comparando PIB
    if (pib > 0) {
        printf("Comparação de PIB: Carta 1 (R$ %.2f) vs Carta 2 (R$ %.2f)\n", pib, pib);
        printf("Resultado: Carta 1 venceu, com R$ %.2f de PIB!\n", pib);
    }

    // Comparando pontos turísticos
    if (turistico > 0) {
        printf("Comparação de Pontos Turísticos: Carta 1 (%d) vs Carta 2 (%d)\n", turistico, turistico);
        printf("Resultado: Carta 1 venceu, com %d pontos turísticos!\n", turistico);
    }

    // Comparando densidade populacional (menor é melhor)
    if (densidade_populacional < densidade_populacional) {
        printf("Comparação de Densidade Populacional: Carta 1 (%.2f) vs Carta 2 (%.2f)\n", densidade_populacional, densidade_populacional);
        printf("Resultado: Carta 2 venceu, com menor densidade de %.2f habitantes por km²!\n", densidade_populacional);
    }

    // Comparando PIB per capita
    if (pib_per_capita > 0) {
        printf("Comparação de PIB per Capita: Carta 1 (R$ %.2f) vs Carta 2 (R$ %.2f)\n", pib_per_capita, pib_per_capita);
        printf("Resultado: Carta 1 venceu, com R$ %.2f de PIB per capita!\n", pib_per_capita);
    }

    // Comparando Super Poder
    if (super_poder > 0) {
        printf("Comparação de Super Poder: Carta 1 (%.2f) vs Carta 2 (%.2f)\n", super_poder, super_poder);
        printf("Resultado: Carta 1 venceu, com Super Poder de %.2f!\n", super_poder);
    }
    
    return 0;
}