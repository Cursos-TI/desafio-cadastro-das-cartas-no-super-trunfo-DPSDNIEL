#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Super Trunfo Paises \n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codcidade;
    char nome [20];
    float populacao, area, pib;
    int turistico;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Qual o nome do Pais? \n");
    scanf("%s", nome);

    printf("Qual o codigo da cidade? \n");
    scanf("%d", &codcidade);

    printf("Qual a população total do pais? \n");
    scanf("%f", &populacao);

    printf("Qual a area total do pais? \n");
    scanf("%f", &area);

    printf("Qual o pib? \n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos? \n");
    scanf("%d", &turistico);~

    // Exibição dos Dados das Cartas:

    printf("\n--- Dados Cadastrados ---\n");
    printf("País: %s - Código da Cidade: %d\n", nome, codcidade);
    printf("População: %.2f - Área: %.2f\n", populacao, area);
    printf("Pontos Turísticos: %d - PIB: %.2f\n", turistico, pib);
    
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
