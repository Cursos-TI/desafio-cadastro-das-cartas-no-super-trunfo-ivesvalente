#include <stdio.h>

//Etrutura para representar uma cidade
int main() {
    printf("Desafio Super Trunfo\n");

    int populaçao;
    float area;
    float PIB;
    int pontos_turisticos;
    char nome[50];
    char codigo[40];

    //Função para cadastrar uma carta
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome);

    printf("Digite a população: ");
    scanf("%d", &populaçao);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    //Função para exibir os dados de uma carta
    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populaçao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}