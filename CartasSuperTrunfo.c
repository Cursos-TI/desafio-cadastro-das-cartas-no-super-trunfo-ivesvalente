#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super Trunfo");

    char[50] nome;
    int população;
    float área;
    float PIB;
    int pontos_turísticos;
    char[40] código;

    printf("Digite o código da cidade(ex:A01)");
    scanf("%f", &código);

    printf("Digite o nome da cidade");
    scanf("%s", &nome);

    printf("Digite a população");
    scanf("%d", &população);

    printf("Digite a área(em km²)");
    scanf("%f",&área);

    printf("Digite o PIB(em bilhões)");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos");
    scanf("%d", &pontos_turísticos);
    
    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %s\n", código);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", população);
    printf("Área: %.2f km²\n", área);
    printf("PIB: %2f bilhões\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos_turísticos);






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
