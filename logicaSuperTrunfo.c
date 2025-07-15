#include <stdio.h>

int main() {

    // Carta 1
    char Estado, Código[4], Cidade[15];
    unsigned long int População;
    float Área, PIB, Densidade, PIBPC, SuperPoder;
    int Pontos;

    // Carta 2
    char Estado2, Código2[4], Cidade2[15];
    unsigned long int População2;
    float Área2, PIB2, Densidade2, PIBPC2, SuperPoder2;
    int Pontos2;

    // Entrada de dados da Carta 1
    printf("Inserir dados para a Carta 1 \n");
    printf("Escolha uma letra de 'A' a 'H' para representar o seu estado: \n"); // Pergunta para o usuário
    scanf(" %c", &Estado); // Armazena a resposta do usuário
    printf("A letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", Código);
    printf("Nome da cidade: \n");
    scanf("%s", Cidade);
    printf("O número de habitantes da cidade: \n");
    scanf("%lu", &População);
    printf("A área da cidade em km²: \n");
    scanf("%f", &Área);
    printf("O PIB da cidade (em bilhões de R$): \n");
    scanf("%f", &PIB);
    printf("A quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &Pontos);

    // Entrada de dados da Carta 2
    printf("Inserir dados para a Carta 2 \n");
    printf("Escolha uma letra de 'A' a 'H' para representar o seu estado: \n");
    scanf(" %c", &Estado2);
    printf("A letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", Código2);
    printf("Nome da cidade: \n");
    scanf("%s", Cidade2);
    printf("O número de habitantes da cidade: \n");
    scanf("%lu", &População2);
    printf("A área da cidade em km²: \n");
    scanf("%f", &Área2);
    printf("O PIB da cidade (em bilhões de R$): \n");
    scanf("%f", &PIB2);
    printf("A quantidade de pontos turísticos na cidade: \n\n");
    scanf("%d", &Pontos2);

    // Cálculos de atributos da Carta 1
    Densidade = População / Área; // Formula para a densidade populacional
    PIBPC = (PIB * 1000000000) / População; // Formula para o PIB per capita
    SuperPoder = População + Área + PIB + PIBPC + (1.0 / Densidade) + Pontos;

    // Cálculos de atributos da Carta 2
    Densidade2 = População2 / Área2; 
    PIBPC2 = (PIB2 * 1000000000) / População2; 
    SuperPoder2 = População2 + Área2 + PIB2 + PIBPC2 + (1.0 / Densidade2) + Pontos2;

    // Comparação das cartas e declaração do vencedor
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %lu\n", Cidade, População);
    printf("Carta 2 - %s: %lu\n", Cidade2, População2);

    if (População > População2) {
        printf("Carta 1 venceu!\n\n");
    } else if (População2 > População) {
        printf("Carta 2 venceu!\n\n");
    } else {
        printf("Empate!\n\n");
    }

    printf("Comparação de cartas (Atributo: Área):\n");
    printf("Carta 1 - %s: %.2f km²\n", Cidade, Área);
    printf("Carta 2 - %s: %.2f km²\n", Cidade2, Área2);

    if (Área > Área2) {
        printf("Carta 1 venceu!\n\n");
    } else if (Área2 > Área) {
        printf("Carta 2 venceu!\n\n");
    } else {
        printf("Empate!\n\n");
    }

    printf("Comparação de cartas (Atributo: PIB:\n");
    printf("Carta 1 - %s: %.2f bilhões de reais\n", Cidade, PIB);
    printf("Carta 2 - %s: %.2f bilhões de reais\n", Cidade2, PIB2);

    if (PIB > PIB2) {
        printf("Carta 1 venceu!\n\n");
    } else if (PIB2 > PIB) {
        printf("Carta 2 venceu!\n\n");
    } else {
        printf("Empate!\n\n");
    }

    printf("Comparação de cartas (Atributo: Número de pontos turísticos:\n");
    printf("Carta 1 - %s: %d\n", Cidade, Pontos);
    printf("Carta 2 - %s: %d\n", Cidade2, Pontos2);

    if (Pontos > Pontos2) {
        printf("Carta 1 venceu!\n\n");
    } else if (Pontos2 > Pontos) {
        printf("Carta 2 venceu!\n\n");
    } else {
        printf("Empate!\n\n");
    }
    
    printf("Comparação de cartas (Atributo: Densidade populacional:\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", Cidade, Densidade);
    printf("Carta 2 - %s: %.2f hab/km²\n", Cidade2, Densidade2);

    if (Densidade > Densidade2) {
        printf("Carta 1 venceu!\n\n");
    } else if (Densidade2 > Densidade) {
        printf("Carta 2 venceu!\n\n");
    } else {
        printf("Empate!\n\n");
    }

    printf("Comparação de cartas (Atributo: PIB per Capita:\n");
    printf("Carta 1 - %s: %.2f reais\n", Cidade, PIBPC);
    printf("Carta 2 - %s: %.2f reais\n", Cidade2, PIBPC2);

    if (PIBPC > PIBPC2) {
        printf("Carta 1 venceu!\n\n");
    } else if (PIBPC2 > PIBPC) {
        printf("Carta 2 venceu!\n\n");
    } else {
        printf("Empate!\n\n");
    }

    printf("Comparação de cartas (Atributo: Super Poder:\n");
    printf("Carta 1 - %s: %.2f\n", Cidade, SuperPoder);
    printf("Carta 2 - %s: %.2f\n", Cidade2, SuperPoder2);

    if (SuperPoder > SuperPoder2) {
        printf("Carta 1 venceu!\n\n");
    } else if (SuperPoder2 > SuperPoder) {
        printf("Carta 2 venceu!\n\n");
    } else {
        printf("Empate!\n\n");
    }

    return 0;

}