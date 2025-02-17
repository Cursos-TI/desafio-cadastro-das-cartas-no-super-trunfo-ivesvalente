#include <stdio.h>
#include <string.h>

int main() {
    printf("Desafio Super Trunfo\n");

    int população;
    float área;
    float PIB;
    int pontos_turísticos;
    char nome[50];
    char codigo[40];

    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome);

    printf("Digite a população: ");
    scanf("%d", &população);

    printf("Digite a área (em km²): ");
    scanf("%f", &área);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turísticos);

    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", população);
    printf("Área: %.2f km²\n", área);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos_turísticos);

    return 0;
}