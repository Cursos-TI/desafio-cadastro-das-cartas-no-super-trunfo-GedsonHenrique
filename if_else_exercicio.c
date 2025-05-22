#include <stdio.h> 

int main() {
    // Declaração das variáveis para cada carta
    int pontoTuristico1, pontoTuristico2;
    // unsigned long int para população (números grandes e não negativos)
    unsigned long int populacao1, populacao2;
    float area1, area2; 
    // double para PIB e PIB per Capita para maior precisão com números grandes
    double pib1, pib2, perCapita1, perCapita2;
    float densidade1, densidade2, superPoder1, superPoder2; 

    // Variáveis para strings (nomes, códigos, estados)
    
    char estado1[50] = "PE";
    char codigo1[50] = "REC01";
    char cidade1[50] = "Recife";

    char estado2[50] = "PB";
    char codigo2[50] = "BAY01";
    char cidade2[50] = "Bayeux";

    // Cadastro das Cartas
    // Valores para a Carta 1 (Recife)
    populacao1 = 1587707;
    area1 = 219.0f; 
    pib1 = 54970305430.0; 
    pontoTuristico1 = 78;

    // Valores para a Carta 2 (Bayeux)
    populacao2 = 82742;
    area2 = 28.0f; 
    pib2 = 1370000000.0; 
    pontoTuristico2 = 15;


    // Cálculos 

    // Cálculo da densidade das cidades
    // Adicionar verificação para evitar divisão por zero na área
    if (area1 > 0) {
        densidade1 = (float)populacao1 / area1;
    } else {
        densidade1 = 0.0f; 
    }

    if (area2 > 0) {
        densidade2 = (float)populacao2 / area2;
    } else {
        densidade2 = 0.0f; 
    }

    // Cálculo do PIB per capita
   
    if (populacao1 != 0) {
        perCapita1 = pib1 / (double)populacao1;
    } else {
        perCapita1 = 0.0;
    }

    if (populacao2 != 0) {
        perCapita2 = pib2 / (double)populacao2;
    } else {
        perCapita2 = 0.0;
    }

    // Cálculo do Super Poder

    superPoder1 = area1 + pib1 + densidade1 + perCapita1 + pontoTuristico1;
    superPoder2 = area2 + pib2 + densidade2 + perCapita2 + pontoTuristico2;


    // Exibição dos Dados das Cartas 
    printf("\n Dados da Carta 1 (%s) \n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area em km quadrados: %.2f\n", area1);
    printf("PIB: %.2lf\n", pib1); 
    printf("Quantidade de pontos turisticos: %d\n", pontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", perCapita1); 
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n Dados da Carta 2 (%s) \n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area em km quadrados: %.2f\n", area2);
    printf("PIB: %.2lf\n", pib2); 
    printf("Quantidade de pontos turisticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", perCapita2); 
    printf("Super Poder: %.2f\n", superPoder2);


    // Comparação de Cartas
    printf("\n Comparações \n");

    // População
    if (populacao1 > populacao2) {
        printf("População: %s tem MAIOR população que %s.\n", cidade1, cidade2);
    } else if (populacao2 > populacao1) {
        printf("População: %s tem MAIOR população que %s.\n", cidade2, cidade1);
    } else {
        printf("População: %s e %s têm a MESMA população (EMPATE).\n", cidade1, cidade2);
    }

    // Área
    if (area1 > area2) {
        printf("Área: %s tem MAIOR área que %s.\n", cidade1, cidade2);
    } else if (area2 > area1) {
        printf("Área: %s tem MAIOR área que %s.\n", cidade2, cidade1);
    } else {
        printf("Área: %s e %s têm a MESMA área (EMPATE).\n", cidade1, cidade2);
    }

    // PIB
    if (pib1 > pib2) {
        printf("PIB: %s tem MAIOR PIB que %s.\n", cidade1, cidade2);
    } else if (pib2 > pib1) {
        printf("PIB: %s tem MAIOR PIB que %s.\n", cidade2, cidade1);
    } else {
        printf("PIB: %s e %s têm o MESMO PIB (EMPATE).\n", cidade1, cidade2);
    }

    // Pontos Turísticos
    if (pontoTuristico1 > pontoTuristico2) {
        printf("Pontos Turísticos: %s tem MAIOR quantidade de pontos turísticos que %s.\n", cidade1, cidade2);
    } else if (pontoTuristico2 > pontoTuristico1) {
        printf("Pontos Turísticos: %s tem MAIOR quantidade de pontos turísticos que %s.\n", cidade2, cidade1);
    } else {
        printf("Pontos Turísticos: %s e %s têm a MESMA quantidade de pontos turísticos (EMPATE).\n", cidade1, cidade2);
    }

    // Densidade Populacional: VENCE AQUELE QUE TEM O VALOR MENOR.
    if (densidade1 < densidade2) { 
        printf("Densidade Populacional: %s tem MENOR densidade que %s.\n", cidade1, cidade2);
    } else if (densidade2 < densidade1) { 
        printf("Densidade Populacional: %s tem MENOR densidade que %s.\n", cidade2, cidade1);
    } else {
        printf("Densidade Populacional: %s e %s têm a MESMA densidade (EMPATE).\n", cidade1, cidade2);
    }

    // PIB per Capita
    if (perCapita1 > perCapita2) {
        printf("PIB per Capita: %s tem MAIOR PIB per capita que %s.\n", cidade1, cidade2);
    } else if (perCapita2 > perCapita1) {
        printf("PIB per Capita: %s tem MAIOR PIB per capita que %s.\n", cidade2, cidade1);
    } else {
        printf("PIB per Capita: %s e %s têm o MESMO PIB per capita (EMPATE).\n", cidade1, cidade2);
    }

    // Super Poder
    if (superPoder1 > superPoder2) {
        printf("Super Poder: %s tem MAIOR Super Poder que %s.\n", cidade1, cidade2);
    } else if (superPoder2 > superPoder1) {
        printf("Super Poder: %s tem MAIOR Super Poder que %s.\n", cidade2, cidade1);
    } else {
        printf("Super Poder: %s e %s têm o MESMO Super Poder (EMPATE).\n", cidade1, cidade2);
    }

    //Determinação da Carta Vencedora Geral 
    printf("\n Resultado Final \n");
    if (superPoder1 > superPoder2) {
        printf("A CARTA VENCEDORA GERAL é: %s!\n", cidade1);
    } else if (superPoder2 > superPoder1) {
        printf("A CARTA VENCEDORA GERAL é: %s!\n", cidade2);
    } else {
        printf("Houve um EMPATE GERAL entre %s e %s!\n", cidade1, cidade2);
    }

    return 0; 
}
