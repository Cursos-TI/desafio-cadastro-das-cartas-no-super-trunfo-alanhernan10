#include <stdio.h>
#include <string.h>

int main() {
    // --- Variáveis para a Carta 1 ---
    char estado1;
    int codigoCidade1;
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // --- Variáveis para a Carta 2 ---
    char estado2;
    int codigoCidade2;
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // --- Entrada de Dados para a Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da cidade (01-04): ");
    scanf("%d", &codigoCidade1);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em reais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Entrada de Dados para a Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da cidade (01-04): ");
    scanf("%d", &codigoCidade2);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Calculos para a Carta 1 ---
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    // --- Calculos para a Carta 2 ---
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    // --- Exibicao dos Resultados da Batalha ---
    printf("\n--- Batalha de Cartas ---\n");
    printf("===================================\n");
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, populacao1 > populacao2);
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, pib1 > pib2);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2, densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, superPoder1 > superPoder2);

    return 0;
}
