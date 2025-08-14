#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

 // Declaração de variáveis para a Carta 1
    char estado1;
    int cidade1;
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração de variáveis para a Carta 2
    char estado2;
    int cidade2;
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o numero da cidade (1-4): ");
    scanf("%d", &cidade1);
    printf("Digite a populacao (int): ");
    scanf("%d", &populacao1);
    printf("Digite a area (float): ");
    scanf("%f", &area1);
    printf("Digite o PIB (float): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos (int): ");
    scanf("%d", &pontosTuristicos1);

    // --- Cadastro da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o numero da cidade (1-4): ");
    scanf("%d", &cidade2);
    printf("Digite a populacao (int): ");
    scanf("%d", &populacao2);
    printf("Digite a area (float): ");
    scanf("%f", &area2);
    printf("Digite o PIB (float): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos (int): ");
    scanf("%d", &pontosTuristicos2);

    // --- Exibição das Cartas Cadastradas ---
    printf("\n===================================\n");
    printf("--- Cartas Cadastradas ---\n");
    printf("===================================\n");

    // Exibição da Carta 1
    printf("\n--- Carta %c%02d ---\n", estado1, cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\n--- Carta %c%02d ---\n", estado2, cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
