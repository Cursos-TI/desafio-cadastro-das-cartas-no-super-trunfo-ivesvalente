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

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade_populacional1 > densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIB_per_capita1 > PIB_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}