#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int populacao1, populacao2, pontoTuristico1, pontoTuristico2;
    float  area1, area2, pib1, pib2;
    char estado1[50], estado2[50], codigo1[50], codigo2[50], cidade1[50], cidade2[50];
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //Cadastro da carta 1.

    printf("Digite o estado:\n");
    scanf("%49s", estado1);
    
    printf("Digite o código:\n");
    scanf("%49s", codigo1);

    printf("Digite a cidade:\n");
    scanf("%49s", cidade1);

    printf("Digite a população:\n");
    scanf("%49d", &populacao1);

    printf("Digite a área em km quadrados:\n");
    scanf("%49f", &area1);

    printf("Digite o PIB:\n");
    scanf("%49f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%49d", &pontoTuristico1);

    //Cadastro da carta 2.

    printf("Digite o estado:\n");
    scanf("%49s", estado2);

    printf("Digite o código:\n");
    scanf("%49s", codigo2);

    printf("Digite a cidade:\n");
    scanf("%49s", cidade2);

    printf("Digite a população:\n");
    scanf("%49d", &populacao2);

    printf("Digite a área em km quadrados:\n");
    scanf("%49f", &area2);

    printf("Digite o PIB:\n");
    scanf("%49f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%49d", &pontoTuristico2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Exibição da carta 1.

    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km quadrados: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", pontoTuristico1);

    // Exibição da carta 2.

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km quadrados: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", pontoTuristico2);

    return 0;
}
