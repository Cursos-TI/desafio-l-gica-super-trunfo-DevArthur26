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
    float densidade1;

    //Carta 2
    char estado2[20];
    char codigo2[30];
    char nome2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;

    int escolha1, escolha2;

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
    printf("\nDigite os Dados da Carta 2\n");

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


    // Cálculo da Densidade Populacional
    densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;

    // Menu para Escolher o Primeiro Atributo
    printf("\n*** Super Trunfo - Escolha o Primeiro Atributo ***\n");
    printf("Escolha o número do primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    // Menu para Escolher o Segundo Atributo (garantindo que seja diferente do primeiro)
    printf("\n*** Super Trunfo - Escolha o Segundo Atributo ***\n");
    printf("Escolha o número do segundo atributo para comparar:\n");
    if (escolha1 != 1) printf("1 - População\n");
    if (escolha1 != 2) printf("2 - Área\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Número de Pontos Turísticos\n");
    if (escolha1 != 5) printf("5 - Densidade Populacional\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    printf("\n*** Comparando %s vs %s ***\n", nome1, nome2);

    float valor1_atributo1 = 0, valor2_atributo1 = 0;
    float valor1_atributo2 = 0, valor2_atributo2 = 0;

    // Comparação do Primeiro Atributo
    printf("\n--- Comparação do Primeiro Atributo ---\n");
    switch (escolha1) {
        case 1:
            printf("Atributo: População\n");
            valor1_atributo1 = (float)populacao1;
            valor2_atributo1 = (float)populacao2;
            printf("%s: %lu\n", nome1, populacao1);
            printf("%s: %lu\n", nome2, populacao2);
            printf("Vencedor: %s (População)\n", (populacao1 > populacao2) ? nome1 : (populacao2 > populacao1) ? nome2 : "Empate");
            break;
        case 2:
            printf("Atributo: Área\n");
            valor1_atributo1 = area1;
            valor2_atributo1 = area2;
            printf("%s: %.2f\n", nome1, area1);
            printf("%s: %.2f\n", nome2, area2);
            printf("Vencedor: %s (Área)\n", (area1 > area2) ? nome1 : (area2 > area1) ? nome2 : "Empate");
            break;
        case 3:
            printf("Atributo: PIB\n");
            valor1_atributo1 = pib1;
            valor2_atributo1 = pib2;
            printf("%s: %.2f\n", nome1, pib1);
            printf("%s: %.2f\n", nome2, pib2);
            printf("Vencedor: %s (PIB)\n", (pib1 > pib2) ? nome1 : (pib2 > pib1) ? nome2 : "Empate");
            break;
        case 4:
            printf("Atributo: Número de Pontos Turísticos\n");
            valor1_atributo1 = (float)pontos1;
            valor2_atributo1 = (float)pontos2;
            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);
            printf("Vencedor: %s (Número de Pontos Turísticos)\n", (pontos1 > pontos2) ? nome1 : (pontos2 > pontos1) ? nome2 : "Empate");
            break;
        case 5:
            printf("Atributo: Densidade Populacional\n");
            valor1_atributo1 = densidade1;
            valor2_atributo1 = densidade2;
            printf("%s: %.2f\n", nome1, densidade1);
            printf("%s: %.2f\n", nome2, densidade2);
            printf("Vencedor: %s (Densidade Populacional)\n", (densidade1 < densidade2) ? nome1 : (densidade2 < densidade1) ? nome2 : "Empate");
            break;
        default:
            printf("Opção inválida para o primeiro atributo.\n");
            return 1;
    }

    // Comparação do Segundo Atributo
    printf("\n--- Comparação do Segundo Atributo ---\n");
    switch (escolha2) {
        case 1:
            printf("Atributo: População\n");
            valor1_atributo2 = (float)populacao1;
            valor2_atributo2 = (float)populacao2;
            printf("%s: %lu\n", nome1, populacao1);
            printf("%s: %lu\n", nome2, populacao2);
            printf("Vencedor: %s (População)\n", (populacao1 > populacao2) ? nome1 : (populacao2 > populacao1) ? nome2 : "Empate");
            break;
        case 2:
            printf("Atributo: Área\n");
            valor1_atributo2 = area1;
            valor2_atributo2 = area2;
            printf("%s: %.2f\n", nome1, area1);
            printf("%s: %.2f\n", nome2, area2);
            printf("Vencedor: %s (Área)\n", (area1 > area2) ? nome1 : (area2 > area1) ? nome2 : "Empate");
            break;
        case 3:
            printf("Atributo: PIB\n");
            valor1_atributo2 = pib1;
            valor2_atributo2 = pib2;
            printf("%s: %.2f\n", nome1, pib1);
            printf("%s: %.2f\n", nome2, pib2);
            printf("Vencedor: %s (PIB)\n", (pib1 > pib2) ? nome1 : (pib2 > pib1) ? nome2 : "Empate");
            break;
        case 4:
            printf("Atributo: Número de Pontos Turísticos\n");
            valor1_atributo2 = (float)pontos1;
            valor2_atributo2 = (float)pontos2;
            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);
            printf("Vencedor: %s (Número de Pontos Turísticos)\n", (pontos1 > pontos2) ? nome1 : (pontos2 > pontos1) ? nome2 : "Empate");
            break;
        case 5:
            printf("Atributo: Densidade Populacional\n");
            valor1_atributo2 = densidade1;
            valor2_atributo2 = densidade2;
            printf("%s: %.2f\n", nome1, densidade1);
            printf("%s: %.2f\n", nome2, densidade2);
            printf("Vencedor: %s (Densidade Populacional)\n", (densidade1 < densidade2) ? nome1 : (densidade2 < densidade1) ? nome2 : "Empate");
            break;
        default:
            printf("Opção inválida para o segundo atributo.\n");
            return 1;
    }

    // Soma dos Atributos
    float soma1 = valor1_atributo1 + valor1_atributo2;
    float soma2 = valor2_atributo1 + valor2_atributo2;

    printf("\n--- Resultado da Soma dos Atributos ---\n");
    printf("Soma dos atributos para %s: %.2f\n", nome1, soma1);
    printf("Soma dos atributos para %s: %.2f\n", nome2, soma2);

    // Determinação do Vencedor pela Soma
    printf("Vencedor Geral: %s\n", (soma1 > soma2) ? nome1 : (soma2 > soma1) ? nome2 : "Empate!");

    return 0;
}