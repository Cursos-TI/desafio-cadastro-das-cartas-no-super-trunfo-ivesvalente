#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo\n");

    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    char nome[50];
    char codigo[40];

    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    float densidade_populacional = populacao / area;
    float PIB_per_capita = PIB / populacao;

    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f R$\n", PIB_per_capita);

    return 0;
}