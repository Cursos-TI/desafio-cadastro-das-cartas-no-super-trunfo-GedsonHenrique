#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declaração das variáveis para cada carta
    int pontoTuristico1, pontoTuristico2;
    // unsigned long int para população (números grandes e não negativos)
    unsigned long int populacao1, populacao2;
    float area1, area2; 
    // double para PIB e PIB per Capita para maior precisão com números grandes
    double pib1, pib2, perCapita1, perCapita2;
    float densidade1, densidade2, superPoder1, superPoder2; 

    // Variáveis para strings (estados, códigos, cidades)
    
    char estado1[50] = "PE";
    char codigo1[50] = "REC01";
    char cidade1[50] = "Recife";

    char estado2[50] = "PB";
    char codigo2[50] = "BAY01";
    char cidade2[50] = "Bayeux";

    // Resultado dos atributos
    int resultadoAtributo1 = 0;
    int resultadoAtributo2 = 0;

    // Soma dos atributos
    int somaAtributos;

    // Pontuação
    int pontos1, pontos2;

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

    // srand para gerar um número aleatório
    srand(time(0));

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

    // Escolhendo primeiro atributo
    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Quantidade de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &resultadoAtributo1);

    // Escolhendo primeiro atributo
    switch (resultadoAtributo1)
    {
    case 1:
        printf("1. População\n");
        resultadoAtributo1 = populacao1 > populacao2 ? 1 : 0;
    

        // Resultado final
        printf("Estados: %s e %s\n", estado1, estado2);
        printf("Compararando as populações\n");

        //População da primeira carta
        printf("População de %s: %ld\n", estado1, populacao1);
        printf("População de %s: %ld\n", estado2, populacao2);

        //Soma dos atributos
        somaAtributos = populacao1 + populacao2;
        printf("Soma da população de %s e %s:\n", estado1, estado2);
        printf("A soma da população é %d.\n", somaAtributos);

        // Estrutura if else para carta vencedora
        if (resultadoAtributo1 == 1){
            printf("A carta vencedora é %s!\n", estado1);
            pontos1 = 1;
        } else{
            printf("A carta vencedora é %s!\n", estado2);
            pontos2 = 1;
        }
        break;
    case 2:
        printf("2. Área\n");
        resultadoAtributo1 = area1 > area2 ? 1 : 0;
         // Resultado final
        printf("Estados: %s e %s\n", estado1, estado2);
        printf("Compararando as áreas\n");

        //População da primeira carta
        printf("Área de %s: %.2f\n", estado1, area1);
        printf("Área de %s: %.2f\n", estado2, area2);

        //Soma dos atributos
        somaAtributos = area1 + area2;
        printf("Soma da área de %s e %s:\n", estado1, estado2);
        printf("A soma da área é %d.\n", somaAtributos);

        // Estrutura if else para carta vencedora
        if (resultadoAtributo1 == 1){
            printf("A carta vencedora é %s!\n", estado1);
            pontos1 = 1;
        } else{
            printf("A carta vencedora é %s!\n", estado2);
            pontos2 = 1;
        }
        break;
    case 3:
        printf("3. PIB\n");
        resultadoAtributo1 = pib1 > pib2 ? 1 : 0;
         // Resultado final
        printf("Estados: %s e %s\n", estado1, estado2);
        printf("Compararando o PIB\n");

        //População da primeira carta
        printf("PIB de %s: %.2f\n", estado1, pib1);
        printf("PIB de %s: %.2f\n", estado2, pib2);

        //Soma dos atributos
        somaAtributos = pib1 + pib2;
        printf("Soma do PIB de %s e %s:\n", estado1, estado2);
        printf("A soma da PIB é %d.\n", somaAtributos);

        // Estrutura if else para carta vencedora
        if (resultadoAtributo1 == 1){
            printf("A carta vencedora é %s!\n", estado1);
            pontos1 = 1;
        } else{
            printf("A carta vencedora é %s!\n", estado2);
            pontos2 = 1;
        }
        break;
    case 4:
        printf("4. Pontos Turísticos\n");
        resultadoAtributo1 = pontoTuristico1 > pontoTuristico2 ? 1 : 0;
         // Resultado final
        printf("Estados: %s e %s\n", estado1, estado2);
        printf("Compararando Pontos Turísticos\n");

        //População da primeira carta
        printf("Pontos Turísticos de %s: %d\n", estado1, pontoTuristico1);
        printf("Pontos Turísticos de %s: %d\n", estado2, pontoTuristico2);

        //Soma dos atributos
        somaAtributos = pontoTuristico1 + pontoTuristico2;
        printf("Soma dos Pontos Turísticos de %s e %s:\n", estado1, estado2);
        printf("A soma dos Pontos Turísticos é %d.\n", somaAtributos);

        // Estrutura if else para carta vencedora
        if (resultadoAtributo1 == 1){
            printf("A carta vencedora é %s!\n", estado1);
            pontos1 = 1;
        } else{
            printf("A carta vencedora é %s!\n", estado2);
            pontos2 = 1;
        }
        break;
    case 5:
        printf("5. Densidade Populacional\n");
        resultadoAtributo1 = densidade1 < densidade2 ? 1 : 0;
         // Resultado final
        printf("Estados: %s e %s\n", estado1, estado2);
        printf("Compararando a Densidade Populacional\n");

        //População da primeira carta
        printf("Densidade Populacional de %s: %.2f\n", estado1, densidade1);
        printf("Densidade Populacional de %s: %.2f\n", estado2, densidade2);

        //Soma dos atributos
        somaAtributos = densidade1 + densidade2;
        printf("Soma da Densidade Populacional de %s e %s:\n", estado1, estado2);
        printf("A soma da Densidade Populacional é %d.\n", somaAtributos);

        // Estrutura if else para carta vencedora
        if (resultadoAtributo1 == 1){
            printf("A carta vencedora é %s!\n", estado1);
            pontos1 = 1;
        } else{
            printf("A carta vencedora é %s!\n", estado2);
            pontos2 = 1;
        }
        break;
    case 6:
        printf("6. PIB per Capita\n");
        resultadoAtributo1 = perCapita1 > perCapita2 ? 1 : 0;
        // Resultado final
        printf("Estados: %s e %s\n", estado1, estado2);
        printf("Compararando o PIB per Capita\n");

        //População da primeira carta
        printf("PIB per Capita de %s: %.2f\n", estado1, perCapita1);
        printf("PIB per Capita de %s: %.2f\n", estado2, perCapita2);

        //Soma dos atributos
        somaAtributos = perCapita1 + perCapita2;
        printf("Soma do PIB per Capita de %s e %s:\n", estado1, estado2);
        printf("A soma do PIB per Capita é %d.\n", somaAtributos);

        // Estrutura if else para carta vencedora
        if (resultadoAtributo1 == 1){
            printf("A carta vencedora é %s!\n", estado1);
            pontos1 = 1;
        } else{
            printf("A carta vencedora é %s!\n", estado2);
            pontos2 = 1;
        }
        break;
    case 7:
        printf("7. Super Poder\n");
        resultadoAtributo1 = superPoder1 > superPoder2 ? 1 : 0;
        // Resultado final
        printf("Estados: %s e %s\n", estado1, estado2);
        printf("Compararando o Super Poder\n");

        //População da primeira carta
        printf("Super Poder de %s: %.2f\n", estado1, superPoder1);
        printf("Super Poder de %s: %.2f\n", estado2, superPoder2);

        //Soma dos atributos
        somaAtributos = superPoder1 + superPoder2;
        printf("Soma dos Super Poderes de %s e %s:\n", estado1, estado2);
        printf("A soma dos Super Poderes é %d.\n", somaAtributos);

        // Estrutura if else para carta vencedora
        if (resultadoAtributo1 == 1){
            printf("A carta vencedora é %s!\n", estado1);
            pontos1 = 1;
        } else{
            printf("A carta vencedora é %s!\n", estado2);
            pontos2 = 1;
        }
        break;
    
    default:
        printf("Escolha uma opção válida!\n");
        break;
    }

    // Escolhendo segundo atributo
    printf("Escolha o segundo atributo: ");
    scanf("%d", &resultadoAtributo2);

    switch (resultadoAtributo2)
    {
    case 1:
        printf("1. População\n");
        resultadoAtributo2 = populacao1 > populacao2 ? 1 : 0;

        // Resultado final
        printf("Estados: %s e %s\n", estado1, estado2);
        printf("Compararando as populações\n");

        //População da primeira carta
        printf("População de %s: %ld\n", estado1, populacao1);
        printf("População de %s: %ld\n", estado2, populacao2);

        //Soma dos atributos
        somaAtributos = populacao1 + populacao2;
        printf("Soma da população de %s e %s:\n", estado1, estado2);
        printf("A soma da população é %d.\n", somaAtributos);

        // Estrutura if else para carta vencedora
        if (resultadoAtributo2 == 1){
            printf("A carta vencedora é %s!\n", estado1);
            pontos1 = 1;
        } else{
            printf("A carta vencedora é %s!\n", estado2);
            pontos2 = 1;
        }
        break;
    case 2:
        printf("2. Área\n");
        resultadoAtributo2 = area1 > area2 ? 1 : 0;
         // Resultado final
        printf("Estados: %s e %s\n", estado1, estado2);
        printf("Compararando as áreas\n");

        //População da primeira carta
        printf("Área de %s: %.2f\n", estado1, area1);
        printf("Área de %s: %.2f\n", estado2, area2);

        //Soma dos atributos
        somaAtributos = area1 + area2;
        printf("Soma da área de %s e %s:\n", estado1, estado2);
        printf("A soma da área é %d.\n", somaAtributos);

        // Estrutura if else para carta vencedora
        if (resultadoAtributo2 == 1){
            printf("A carta vencedora é %s!\n", estado1);
            pontos1 = 1;
        } else{
            printf("A carta vencedora é %s!\n", estado2);
            pontos2 = 1;
        }
        break;
    case 3:
        printf("3. PIB\n");
        resultadoAtributo2 = pib1 > pib2 ? 1 : 0;
         // Resultado final
        printf("Estados: %s e %s\n", estado1, estado2);
        printf("Compararando o PIB\n");

        //População da primeira carta
        printf("PIB de %s: %.2f\n", estado1, pib1);
        printf("PIB de %s: %.2f\n", estado2, pib2);

        //Soma dos atributos
        somaAtributos = pib1 + pib2;
        printf("Soma do PIB de %s e %s:\n", estado1, estado2);
        printf("A soma da PIB é %d.\n", somaAtributos);

        // Estrutura if else para carta vencedora
        if (resultadoAtributo2 == 1){
            printf("A carta vencedora é %s!\n", estado1);
            pontos1 = 1;
        } else{
            printf("A carta vencedora é %s!\n", estado2);
            pontos2 = 1;
        }
        break;
    case 4:
        printf("4. Pontos Turísticos\n");
        resultadoAtributo2 = pontoTuristico1 > pontoTuristico2 ? 1 : 0;
         // Resultado final
        printf("Estados: %s e %s\n", estado1, estado2);
        printf("Compararando Pontos Turísticos\n");

        //População da primeira carta
        printf("Pontos Turísticos de %s: %d\n", estado1, pontoTuristico1);
        printf("Pontos Turísticos de %s: %d\n", estado2, pontoTuristico2);

        //Soma dos atributos
        somaAtributos = pontoTuristico1 + pontoTuristico2;
        printf("Soma dos Pontos Turísticos de %s e %s:\n", estado1, estado2);
        printf("A soma dos Pontos Turísticos é %d.\n", somaAtributos);

        // Estrutura if else para carta vencedora
        if (resultadoAtributo2 == 1){
            printf("A carta vencedora é %s!\n", estado1);
            pontos1 = 1;
        } else{
            printf("A carta vencedora é %s!\n", estado2);
            pontos2 = 1;
        }
        break;
    case 5:
        printf("5. Densidade Populacional\n");
        resultadoAtributo2 = densidade1 < densidade2 ? 1 : 0;
        // Resultado final
        printf("Estados: %s e %s\n", estado1, estado2);
        printf("Compararando a Densidade Populacional\n");

        //População da primeira carta
        printf("Densidade Populacional de %s: %.2f\n", estado1, densidade1);
        printf("Densidade Populacional de %s: %.2f\n", estado2, densidade2);

        //Soma dos atributos
        somaAtributos = densidade1 + densidade2;
        printf("Soma da Densidade Populacional de %s e %s:\n", estado1, estado2);
        printf("A soma da Densidade Populacional é %d.\n", somaAtributos);

        // Estrutura if else para carta vencedora
        if (resultadoAtributo2 == 1){
            printf("A carta vencedora é %s!\n", estado1);
            pontos1 = 1;
        } else{
            printf("A carta vencedora é %s!\n", estado2);
            pontos2 = 1;
        }
        break;
    case 6:
        printf("6. PIB per Capita\n");
        resultadoAtributo2 = pib1 > pib2 ? 1 : 0;
        // Resultado final
        printf("Estados: %s e %s\n", estado1, estado2);
        printf("Compararando o PIB per Capita\n");

        //População da primeira carta
        printf("PIB per Capita de %s: %.2f\n", estado1, perCapita1);
        printf("PIB per Capita de %s: %.2f\n", estado2, perCapita2);

        //Soma dos atributos
        somaAtributos = perCapita1 + perCapita2;
        printf("Soma do PIB per Capita de %s e %s:\n", estado1, estado2);
        printf("A soma do PIB per Capita é %d.\n", somaAtributos);

        // Estrutura if else para carta vencedora
        if (resultadoAtributo2 == 1){
            printf("A carta vencedora é %s!\n", estado1);
            pontos1 = 1;
        } else{
            printf("A carta vencedora é %s!\n", estado2);
            pontos2 = 1;
        }
        break;
    case 7:
        printf("7. Super Poder\n");
        resultadoAtributo2 = superPoder1 > superPoder2 ? 1 : 0;
         // Resultado final
        printf("Estados: %s e %s\n", estado1, estado2);
        printf("Compararando o Super Poder\n");

        //População da primeira carta
        printf("Super Poder de %s: %.2f\n", estado1, superPoder1);
        printf("Super Poder de %s: %.2f\n", estado2, superPoder2);

        //Soma dos atributos
        somaAtributos = superPoder1 + superPoder2;
        printf("Soma dos Super Poderes de %s e %s:\n", estado1, estado2);
        printf("A soma dos Super Poderes é %d.\n", somaAtributos);

        // Estrutura if else para carta vencedora
        if (resultadoAtributo2 == 1){
            printf("A carta vencedora é %s!\n", estado1);
            pontos1 = 1;
        } else{
            printf("A carta vencedora é %s!\n", estado2);
            pontos2 = 1;
        }
        break;
    
    default:
        printf("Escolha uma opção válida!\n");
        break;
    }

    // Imprimindo carta vencedora
    if(pontos1 > pontos2){
        printf("Estado %s venceu!", estado1);
    } else if (pontos1 < pontos2){
        printf("Estado %s venceu!", estado2);
    } else {
        printf("Houve um EMPATE!");
    }
    return 0; 
}