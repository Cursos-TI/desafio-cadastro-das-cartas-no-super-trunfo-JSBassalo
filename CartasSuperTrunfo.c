#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Variaveis
    char estado1[1], estado2[1];
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_da_cidade1[100], nome_da_cidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_pontos_turisticos1, numero_pontos_turisticos2;

    // Cadastro das Cartas:

    // Primeira Carta
    printf("Escreva os dados da primeira carta:\n");
    
    printf("Estado (Uma letra de 'A' a 'H'): ");
    scanf("%s", estado1);

    printf("Codigo da Carta (ex: A01, B03): ");
    scanf("%s", codigo_da_carta1);

    printf("Nome da Cidade: ");
    scanf("%s", nome_da_cidade1),

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &numero_pontos_turisticos1);

    // Segunda Carta
    printf("Escreva os dados da segunda carta:\n");
    
    printf("Estado (Uma letra de 'A' a 'H'): ");
    scanf("%s", estado2);

    printf("Codigo da Carta (ex: A01, B03): ");
    scanf("%s", codigo_da_carta2);

    printf("Nome da Cidade: ");
    scanf("%s", nome_da_cidade2),

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &numero_pontos_turisticos2);
    
    // Exibição das Cartas
    
    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos1);

    //Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos2);
    
    
    return 0;
}
