#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Gedson

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int pontoTuristico1, pontoTuristico2;
    unsigned long int populacao1, populacao2; // Correção: Voltando para unsigned long int
    float  area1, area2, densidade1, densidade2, superPoder1, superPoder2;
    double  pib1, pib2, perCapita1, perCapita2;
    char estado1[50], estado2[50], codigo1[50], codigo2[50], cidade1[50], cidade2[50];
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //Cadastro da carta 1.

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado: ");
    scanf("%49s", estado1);

    printf("Digite o código: ");
    scanf("%49s", codigo1);

    printf("Digite a cidade: ");
    scanf("%49s", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área em km quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%lf", &pib1);

    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontoTuristico1);

    //Cadastro da carta 2.

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado: ");
    scanf("%49s", estado2);

    printf("Digite o código: ");
    scanf("%49s", codigo2);

    printf("Digite a cidade: ");
    scanf("%49s", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área em km quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%lf", &pib2);

    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontoTuristico2);

    //Cálculo da densidade das cidades

    densidade1 = (float) populacao1 / area1; // Cast para float para garantir divisão de ponto flutuante
    densidade2 = (float) populacao2 / area2; // Cast para float para garantir divisão de ponto flutuante

    // Cálculo do PIB per capta
    // Garantir que a população não seja zero para evitar divisão por zero
    perCapita1 = (populacao1 != 0) ? pib1 / (double)populacao1 : 0.0;
    perCapita2 = (populacao2 != 0) ? pib2 / (double)populacao2 : 0.0;


    // Cálculo do Super Poder
    superPoder1 = area1 + pib1 + densidade1 + perCapita1 + pontoTuristico1;
    superPoder2 = area2 + pib2 + densidade2 + perCapita2 + pontoTuristico2;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Exibição da carta 1.

    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área em km quadrados: %.2f\n", area1);
    printf("PIB: %.2lf\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", pontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", perCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição da carta 2.

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área em km quadrados: %.2f\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", perCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações das cartas
    printf("\n--- Comparações (1 se verdadeiro, 0 se falso) ---\n");
    printf("População (Carta 1 > Carta 2): %d\n", populacao1 > populacao2);
    printf("Área (Carta 1 > Carta 2): %d\n", area1 > area2);
    printf("PIB (Carta 1 > Carta 2): %d\n", pib1 > pib2);
    printf("Pontos Turísticos (Carta 1 > Carta 2): %d\n", pontoTuristico1 > pontoTuristico2);
    printf("Densidade Populacional (Carta 1 < Carta 2): %d\n", densidade1 < densidade2);
    printf("PIB per Capita (Carta 1 > Carta 2): %d\n", perCapita1 > perCapita2);
    printf("Super Poder (Carta 1 > Carta 2): %d\n", superPoder1 > superPoder2);

    return 0;
}