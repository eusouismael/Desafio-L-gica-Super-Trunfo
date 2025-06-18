#include <stdio.h>

// Super Trunfo: Nível Mestre

int main(){

// Declaração de variáveis: carta 1
    char estado1;
    char codigo1[4];
    char nome_pais1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_demografica1;
    float pib_per_capita1;

// Declaração de variáveis: carta 2
    char estado2;
    char codigo2[4];
    char nome_pais2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_demografica2;
    float pib_per_capita2;

// Leitura de dados: carta 1
    printf("Estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Código da carta 1: ");
    scanf("%s", codigo1);

    printf("Nome do País da carta 1: ");
    scanf(" %[^\n]", nome_pais1);

    printf("População da carta 1: ");
    scanf("%d", &populacao1);

    printf("Área(em km²) da carta 1: ");
    scanf("%f", &area1);

    printf("PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);

// Leitura de dados: carta 2
    printf("\nEstado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Código da carta 2: ");
    scanf("%s", codigo2);

    printf("Nome do País da carta 2: ");
    scanf(" %[^\n]", nome_pais2);

    printf("População da carta 2: ");
    scanf("%d", &populacao2);

    printf("Área(em km²) da carta 2: ");
    scanf("%f", &area2);

    printf("PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

// Cálculos: carta 1
    densidade_demografica1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;

// Cálculos: carta 2
    densidade_demografica2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;

// Exibição de dados: carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome do País: %s\n", nome_pais1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade_demografica1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

// Exibição de dados: carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome do País: %s\n", nome_pais2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade_demografica2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

// Escolha do primeiro atributo
    int opcao1;
    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    scanf("%d", &opcao1);
    if (opcao1 < 1 || opcao1 > 5) {
        printf("Opção inválida\n");
        return 1;
    }

// Escolha do segundo atributo
    int opcao2;
    printf("\nEscolha o segundo atributo:\n");
    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Área\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turísticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demográfica\n");
    scanf("%d", &opcao2);
    if (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1) {
        printf("Opção inválida\n");
        return 1;
    }

// Comparação dos atributos
    double valor1_attr1, valor2_attr1, valor1_attr2, valor2_attr2, soma1 = 0, soma2 = 0;
    char atributo1[20], atributo2[20];
    switch (opcao1) {
        case 1: strcpy(atributo1, "População"); valor1_attr1 = populacao1; valor2_attr1 = populacao2; soma1 += populacao1; soma2 += populacao2; break;
        case 2: strcpy(atributo1, "Área"); valor1_attr1 = area1; valor2_attr1 = area2; soma1 += area1; soma2 += area2; break;
        case 3: strcpy(atributo1, "PIB"); valor1_attr1 = pib1; valor2_attr1 = pib2; soma1 += pib1; soma2 += pib2; break;
        case 4: strcpy(atributo1, "Pontos Turísticos"); valor1_attr1 = pontos_turisticos1; valor2_attr1 = pontos_turisticos2; soma1 += pontos_turisticos1; soma2 += pontos_turisticos2; break;
        case 5: strcpy(atributo1, "Densidade Demográfica"); valor1_attr1 = densidade_demografica1; valor2_attr1 = densidade_demografica2; soma1 += densidade_demografica1; soma2 += densidade_demografica2; break;
    }
    switch (opcao2) {
        case 1: strcpy(atributo2, "População"); valor1_attr2 = populacao1; valor2_attr2 = populacao2; soma1 += populacao1; soma2 += populacao2; break;
        case 2: strcpy(atributo2, "Área"); valor1_attr2 = area1; valor2_attr2 = area2; soma1 += area1; soma2 += area2; break;
        case 3: strcpy(atributo2, "PIB"); valor1_attr2 = pib1; valor2_attr2 = pib2; soma1 += pib1; soma2 += pib2; break;
        case 4: strcpy(atributo2, "Pontos Turísticos"); valor1_attr2 = pontos_turisticos1; valor2_attr2 = pontos_turisticos2; soma1 += pontos_turisticos1; soma2 += pontos_turisticos2; break;
        case 5: strcpy(atributo2, "Densidade Demográfica"); valor1_attr2 = densidade_demografica1; valor2_attr2 = densidade_demografica2; soma1 += densidade_demografica1; soma2 += densidade_demografica2; break;
    }

// Exibição da comparação
    printf("\nComparação de cartas\n");
    printf("%s: %s (%.2f) vs %s (%.2f) - %s\n", atributo1, nome_pais1, valor1_attr1, nome_pais2, valor2_attr1, 
           opcao1 == 5 ? (valor1_attr1 < valor2_attr1 ? "Carta 1 venceu" : (valor1_attr1 > valor2_attr1 ? "Carta 2 venceu" : "Empate")) :
           (valor1_attr1 > valor2_attr1 ? "Carta 1 venceu" : (valor1_attr1 < valor2_attr1 ? "Carta 2 venceu" : "Empate")));
    printf("%s: %s (%.2f) vs %s (%.2f) - %s\n", atributo2, nome_pais1, valor1_attr2, nome_pais2, valor2_attr2, 
           opcao2 == 5 ? (valor1_attr2 < valor2_attr2 ? "Carta 1 venceu" : (valor1_attr2 > valor2_attr2 ? "Carta 2 venceu" : "Empate")) :
           (valor1_attr2 > valor2_attr2 ? "Carta 1 venceu" : (valor1_attr2 < valor2_attr2 ? "Carta 2 venceu" : "Empate")));
    printf("Soma: %s (%.2f) vs %s (%.2f) - %s\n", nome_pais1, soma1, nome_pais2, soma2, 
           soma1 > soma2 ? "Carta 1 venceu" : (soma1 < soma2 ? "Carta 2 venceu" : "Empate"));

    return 0;
}