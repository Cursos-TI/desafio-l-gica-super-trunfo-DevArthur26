#include <stdio.h>

int main() {
    //Carta 1
    char estado1[20];
    char codigo1[30];
    char nome1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;

    //Carta 2
    char estado2[20];
    char codigo2[30];
    char nome2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;



    // Início do programa
    printf("Digite os Dados da Carta 1\n");
    
    // Entrada dos dados da Carta 1
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nome1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Números de Pontos Turísticos: ");
    scanf("%d", &pontos1);


    // Início do programa
    printf("Digite os Dados da Carta 2\n");
    
    // Entrada dos dados da Carta 2
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nome2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);


    //Cálculo da Densidade Populacional e PIB per Capita
    float densidade1, percapita1, densidade2, percapita2;
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    percapita1 = pib1 * 1000000000 / populacao1;
    percapita2 = pib2 * 1000000000 / populacao2;


    //Cálculo do Super Poder
    float inverso_densidade1 = 1.0 / densidade1;
    float super_poder1 = (float)populacao1 + area1 + pib1 + pontos1 + percapita1 + inverso_densidade1;

    float inverso_densidade2 = 1.0 / densidade2;
    float super_poder2 = (float)populacao2 + area2 + pib2 + pontos2 + percapita2 + inverso_densidade2;





    //Exibição das Cartas
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2fbilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", percapita1);
    printf("Super poder: %.2f\n", super_poder1);

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", percapita2);    
    printf("Super poder: %.2f\n", super_poder2);



    //Exibir comparação das Cartas
    printf("***Comparação das Cartas***\n");
    if (populacao1 > populacao2) {
    printf("População: Carta 1 vence!\n");
    } else {
    printf("População: Carta 2 vence!\n");
    }
    if (area1 > area2) {
    printf("Área: Carta 1 vence!\n");
    } else {
    printf("Área: Carta 2 vence!\n");            
    }
    if (pib1 > pib2) {
    printf("PIB: Carta 1 vence!\n");
    } else {
    printf("PIB: Carta 2 vence!\n");
    }
    if (pontos1 > pontos2) {
    printf("Pontos Turísticos: Carta 1 vence!\n");
    } else {
    printf("Pontos Turísticos: Carta 2 vence!\n");
    }
    if (densidade1 < densidade2) {
    printf("Densidade Populacional: Carta 1 vence!\n");
    } else {
    printf("Densidade Populacional: Carta 2 vence!\n");
    }
    if (percapita1 > percapita2) {
    printf("PIB percapita: Carta 1 vence!\n");
    } else {
    printf("PIB percapita: Carta 2 vence!\n");
    }
    if (super_poder1 > super_poder2) {
    printf("Super Poder: Carta 1 vence!\n");
    } else {
    printf("Super Poder: Carta 2 vence!\n");
    }


}