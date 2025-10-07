#include <stdio.h>

int main() {
    // ====== Declaração das variáveis ======
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // ====== Entrada de dados ======
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // ====== Cálculos ======
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ====== Escolha do atributo (fixo no código) ======
    // Altere aqui o atributo desejado para comparar:
    // Opções: 1 = População, 2 = Área, 3 = PIB, 4 = Densidade Populacional, 5 = PIB per Capita
    int atributoEscolhido = 1; 

    printf("\n=== Comparação de Cartas (Atributo ");
    if (atributoEscolhido == 1)
        printf("População");
    else if (atributoEscolhido == 2)
        printf("Área");
    else if (atributoEscolhido == 3)
        printf("PIB");
    else if (atributoEscolhido == 4)
        printf("Densidade Populacional");
    else if (atributoEscolhido == 5)
        printf("PIB per Capita");
    printf(") ===\n");

    // ====== Comparação com IF / ELSE ======
    if (atributoEscolhido == 1) {
        printf("Carta 1 - %s: %d\n", cidade1, populacao1);
        printf("Carta 2 - %s: %d\n", cidade2, populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else if (atributoEscolhido == 2) {
        printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
        printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else if (atributoEscolhido == 3) {
        printf("Carta 1 - %s: %.2f bilhões\n", cidade1, pib1);
        printf("Carta 2 - %s: %.2f bilhões\n", cidade2, pib2);
        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else if (atributoEscolhido == 4) {
        printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
        printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);
        if (densidade1 < densidade2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else if (atributoEscolhido == 5) {
        printf("Carta 1 - %s: %.2f reais\n", cidade1, pibPerCapita1);
        printf("Carta 2 - %s: %.2f reais\n", cidade2, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}
