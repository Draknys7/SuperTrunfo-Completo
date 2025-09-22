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
    float densidade1;
    float pib_per_capita1;

    /* --- Carta 2 --- */
    char estado2;
    char codigo2[4];
    char cidade2[60];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;

    /* --- Entrada: Carta 1 --- */
    printf("=== Cadastro - Carta 1 ===\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado1);                
    printf("Codigo da carta (ex: A01): ");
    scanf(" %3s", codigo1);                
    getchar(); // limpar buffer
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

    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;

    /* --- Entrada: Carta 2 --- */
    printf("\n=== Cadastro - Carta 2 ===\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (ex: B02): ");
    scanf(" %3s", codigo2);
    getchar();
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

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

    /* --- Exibir Cartas --- */
    printf("\n=== Carta 1 ===\n");
    printf("Cidade: %s | Estado: %c\n", cidade1, estado1);
    printf("Populacao: %d | Area: %.2f km² | PIB: %.2f Bi\n", populacao1, area1, pib1);
    printf("Densidade: %.2f | PIB per Capita: %.2f\n", densidade1, pib_per_capita1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n=== Carta 2 ===\n");
    printf("Cidade: %s | Estado: %c\n", cidade2, estado2);
    printf("Populacao: %d | Area: %.2f km² | PIB: %.2f Bi\n", populacao2, area2, pib2);
    printf("Densidade: %.2f | PIB per Capita: %.2f\n", densidade2, pib_per_capita2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    /* --- Comparação --- */
    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;
    float soma_c1, soma_c2;

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    /* Atribui valores do atributo 1 */
    switch (atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontos_turisticos1; valor1_c2 = pontos_turisticos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        case 6: valor1_c1 = pib_per_capita1; valor1_c2 = pib_per_capita2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    /* Menu dinâmico: remove opção já escolhida */
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i != atributo1) { 
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Populacional\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1) {
        printf("Você não pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    /* Atribui valores do atributo 2 */
    switch (atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontos_turisticos1; valor2_c2 = pontos_turisticos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        case 6: valor2_c1 = pib_per_capita1; valor2_c2 = pib_per_capita2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    /* Comparação (com operador ternário para Densidade ser o inverso) */
    float resultado1 = (atributo1 == 5) ? (valor1_c1 < valor1_c2 ? 1 : 0) : (valor1_c1 > valor1_c2 ? 1 : 0);
    float resultado2 = (atributo2 == 5) ? (valor2_c1 < valor2_c2 ? 1 : 0) : (valor2_c1 > valor2_c2 ? 1 : 0);

    soma_c1 = valor1_c1 + valor2_c1;
    soma_c2 = valor1_c2 + valor2_c2;

    printf("\n=== Resultado da Rodada ===\n");
    printf("%s: %.2f + %.2f = %.2f\n", cidade1, valor1_c1, valor2_c1, soma_c1);
    printf("%s: %.2f + %.2f = %.2f\n", cidade2, valor1_c2, valor2_c2, soma_c2);

    if (soma_c1 > soma_c2)
        printf("\n🏆 %s venceu!\n", cidade1);
    else if (soma_c2 > soma_c1)
        printf("\n🏆 %s venceu!\n", cidade2);
    else
        printf("\n⚖️ Empate!\n");

    return 0;
}
