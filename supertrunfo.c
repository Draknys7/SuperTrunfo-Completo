#include <stdio.h>

int main() {
    /* --- Carta 1 --- */
    char estado1[50];       // nome completo do estado
    char codigo1[4];        // ex: "A01" (3 chars + '\0')
    char cidade1[60];       // nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    /* --- Carta 2 --- */
    char estado2[50];
    char codigo2[4];
    char cidade2[60];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    /* --- Entrada: Carta 1 --- */
    printf("=== Cadastro - Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %49[^\n]", estado1);           
    printf("Codigo da carta (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %59[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    /* --- Entrada: Carta 2 --- */
    printf("=== Cadastro - Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %49[^\n]", estado2);
    printf("Codigo da carta (ex: B02): ");
    scanf(" %3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %59[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    /* --- Saída: exibir os dados cadastrados --- */
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
