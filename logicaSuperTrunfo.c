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

    int escolha;

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


    //Cálculo da Densidade Populacional
    densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;

    // Menu de Interação
    printf("\n*** Super Trunfo - Escolha o Atributo ***\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número do atributo para comparar: ");
    scanf("%d", &escolha);

    printf("\n*** Comparando %s vs %s ***\n", nome1, nome2);

    switch (escolha) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %lu\n", nome1, populacao1);
            printf("%s: %lu\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f\n", nome1, area1);
            printf("%s: %.2f\n", nome2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nome1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", nome1, pib1);
            printf("%s: %.2f\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4: // Número de Pontos Turísticos
            printf("Atributo: Número de Pontos Turísticos\n");
            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);
            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5: // Densidade Demográfica
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f\n", nome1, densidade1);
            printf("%s: %.2f\n", nome2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}