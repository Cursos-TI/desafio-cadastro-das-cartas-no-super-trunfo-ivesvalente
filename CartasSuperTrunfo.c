#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo\n");

    // Dados da Carta 1
    unsigned long int populacao1;
    float area1, PIB1, densidade_populacional1, PIB_per_capita1, super_poder1;
    int pontos_turisticos1;
    char nome1[50], codigo1[40];

    // Dados da Carta 2
    unsigned long int populacao2;
    float area2, PIB2, densidade_populacional2, PIB_per_capita2, super_poder2;
    int pontos_turisticos2;
    char nome2[50], codigo2[40];

    // Entrada de dados para a Carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados para a Carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita para a Carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    PIB_per_capita1 = (PIB1 * 1000000000) / populacao1;

    // Cálculo da densidade populacional e PIB per capita para a Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    PIB_per_capita2 = (PIB2 * 1000000000) / populacao2;

    // Cálculo do Super Poder para a Carta 1
    super_poder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_per_capita1 + (1 / densidade_populacional1);

    // Cálculo do Super Poder para a Carta 2
    super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_per_capita2 + (1 / densidade_populacional2);

    // Escolha do atributo para comparação
    int escolha;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha);

    // Comparação das cartas com base no atributo escolhido
    printf("\nResultado da Comparação:\n");
    switch (escolha) {
        case 1: // População
            if (populacao1 > populacao2) {
                printf("Carta 1 venceu (População).\n");
            } else {
                printf("Carta 2 venceu (População).\n");
            }
            break;
        case 2: // Área
            if (area1 > area2) {
                printf("Carta 1 venceu (Área).\n");
            } else {
                printf("Carta 2 venceu (Área).\n");
            }
            break;
        case 3: // PIB
            if (PIB1 > PIB2) {
                printf("Carta 1 venceu (PIB).\n");
            } else {
                printf("Carta 2 venceu (PIB).\n");
            }
            break;
        case 4: // Pontos Turísticos
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Carta 1 venceu (Pontos Turísticos).\n");
            } else {
                printf("Carta 2 venceu (Pontos Turísticos).\n");
            }
            break;
        case 5: // Densidade Populacional
            if (densidade_populacional1 < densidade_populacional2) { // Menor densidade vence
                printf("Carta 1 venceu (Densidade Populacional).\n");
            } else {
                printf("Carta 2 venceu (Densidade Populacional).\n");
            }
            break;
        case 6: // PIB per Capita
            if (PIB_per_capita1 > PIB_per_capita2) {
                printf("Carta 1 venceu (PIB per Capita).\n");
            } else {
                printf("Carta 2 venceu (PIB per Capita).\n");
            }
            break;
        case 7: // Super Poder
            if (super_poder1 > super_poder2) {
                printf("Carta 1 venceu (Super Poder).\n");
            } else {
                printf("Carta 2 venceu (Super Poder).\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}