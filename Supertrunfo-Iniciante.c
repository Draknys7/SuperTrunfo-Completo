#include <stdio.h>

int main() {
    /* --- Carta 1 --- */
    char estado1;           
    char codigo1[4];        
    char cidade1[60];      
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;       // NOVA VARIÁVEL
    float pib_per_capita1;  // NOVA VARIÁVEL

    /* --- Carta 2 --- */
    char estado2;
    char codigo2[4];
    char cidade2[60];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;       // NOVA VARIÁVEL
    float pib_per_capita2;  // NOVA VARIÁVEL

    /* --- Entrada: Carta 1 --- */
    printf("=== Cadastro - Carta 1 ===\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado1);                
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

    /* --- Calcula densidade e PIB per capita --- */
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;

    /* --- Entrada: Carta 2 --- */
    printf("\n=== Cadastro - Carta 2 ===\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado2);
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

    /* --- Calcula densidade e PIB per capita --- */
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

    /* --- Saída: exibir os dados cadastrados + cálculos --- */
    printf("\n\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);

    return 0;
}
