#include <stdio.h>
#include <string.h>

int main() {

    // ==============================
    // NÍVEL NOVATO
    // Cadastro das cartas
    // ==============================

    // CARTA 1
    char estado1[3];
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // CARTA 2
    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // -------- Leitura Carta 1 --------
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (ex: PE): ");
    scanf("%s", estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // -------- Leitura Carta 2 --------
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (ex: BA): ");
    scanf("%s", estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // ==============================
    // NÍVEL AVENTUREIRO
    // APENAS CÁLCULOS (SEM IF / ELSE)
    // ==============================

    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;

    float pibPerCapita1 = pib1 / (float) populacao1;
    float pibPerCapita2 = pib2 / (float) populacao2;

    // -------- Exibição --------
    printf("\n=== Dados Calculados ===\n");

    printf("\nCarta 1 - %s\n", cidade1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2 - %s\n", cidade2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
        // ==============================
    // NÍVEL MESTRE
    // Comparação de cartas
    // ==============================

    int opcao;
    int vencedor; // 1 = Carta 1 | 2 = Carta 2 | 0 = Empate

    printf("\n=== NIVEL MESTRE ===\n");
    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao (maior vence)\n");
    printf("2 - Area (maior vence)\n");
    printf("3 - PIB (maior vence)\n");
    printf("4 - Densidade Populacional (menor vence)\n");
    printf("5 - PIB per Capita (maior vence)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1: // População
            if (populacao1 > populacao2)
                vencedor = 1;
            else if (populacao2 > populacao1)
                vencedor = 2;
            else
                vencedor = 0;
            break;

        case 2: // Área
            if (area1 > area2)
                vencedor = 1;
            else if (area2 > area1)
                vencedor = 2;
            else
                vencedor = 0;
            break;

        case 3: // PIB
            if (pib1 > pib2)
                vencedor = 1;
            else if (pib2 > pib1)
                vencedor = 2;
            else
                vencedor = 0;
            break;

        case 4: // Densidade (MENOR vence)
            vencedor = (densidade1 < densidade2) ? 1 :
                       (densidade2 < densidade1) ? 2 : 0;
            break;

        case 5: // PIB per capita
            vencedor = (pibPerCapita1 > pibPerCapita2) ? 1 :
                       (pibPerCapita2 > pibPerCapita1) ? 2 : 0;
            break;

        default:
            printf("Opcao invalida.\n");
            return 0;
    }

    // ==============================
    // RESULTADO FINAL
    // ==============================

    printf("\n=== RESULTADO ===\n");

    if (vencedor == 1) {
        printf("Carta vencedora: %s (%s)\n", cidade1, estado1);
    }
    else if (vencedor == 2) {
        printf("Carta vencedora: %s (%s)\n", cidade2, estado2);
    }
    else {
        printf("Resultado: Empate!\n");
    }


    return 0; 
    
}
