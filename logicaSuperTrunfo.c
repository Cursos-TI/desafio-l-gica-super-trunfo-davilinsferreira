#include <stdio.h>
#include <stdlib.h>

int main() {

    // Carta 1
    char País[15];
    unsigned long int População;
    float Área, PIB, Densidade, PIBPC, SuperPoder;
    int Pontos;
    int resultado1, resultado2;
    int atributo1, atributo2;

    // Carta 2
    char País2[15];
    unsigned long int População2;
    float Área2, PIB2, Densidade2, PIBPC2, SuperPoder2;
    int Pontos2;

    // Entrada de dados da Carta 1
    printf("Bem-vindo ao jogo!\n");
    printf("Inserir dados para a Carta 1 \n");
    printf("Nome do país: \n");
    scanf("%14s", País);
    printf("O número de habitantes do país: \n");
    scanf("%lu", &População);
    printf("A área do país em km²: \n");
    scanf("%f", &Área);
    printf("O PIB do país (em bilhões de R$): \n");
    scanf("%f", &PIB);
    printf("A quantidade de pontos turísticos no país: \n");
    scanf("%d", &Pontos);

    // Entrada de dados da Carta 2
    printf("Inserir dados para a Carta 2 \n");
    printf("Nome da país: \n");
    scanf(" %14s", País2);
    printf("O número de habitantes do país: \n");
    scanf("%lu", &População2);
    printf("A área do país em km²: \n");
    scanf("%f", &Área2);
    printf("O PIB do país (em bilhões de R$): \n");
    scanf("%f", &PIB2);
    printf("A quantidade de pontos turísticos no país: \n");
    scanf("%d", &Pontos2);

    // Cálculos de atributos da Carta 1
    Densidade = População / Área; // Formula para a densidade populacional
    PIBPC = (PIB * 1000000000) / População; // Formula para o PIB per capita
    SuperPoder = População + Área + PIB + PIBPC + (1.0 / Densidade) + Pontos;

    // Cálculos de atributos da Carta 2
    Densidade2 = População2 / Área2; 
    PIBPC2 = (PIB2 * 1000000000) / População2; 
    SuperPoder2 = População2 + Área2 + PIB2 + PIBPC2 + (1.0 / Densidade2) + Pontos2;

    printf("*** Comparação de atributos ***\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demogŕafica (Menor vence)\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf(" %d", &atributo1);

    switch (atributo1)
    {

    case 1:
        printf("Atributo: População\n");
        printf("Carta 1 - %s: %lu -- ", País, População);
        printf("Carta 2 - %s: %lu\n", País2, População2);
        resultado1 = População > População2 ? 1 : 0;
        break;
    case 2:
        printf("Atributo: Área\n");
        printf("Carta 1 - %s: %.2f km² -- ", País, Área);
        printf("Carta 2 - %s: %.2f km²\n", País2, Área2);
        resultado1 = Área > Área2 ? 1 : 0;
        break;
    case 3:
        printf("Atributo: PIB\n");
        printf("Carta 1 - %s: %.2f bilhões de reais -- ", País, PIB);
        printf("Carta 2 - %s: %.2f bilhões de reais\n", País2, PIB2);
        resultado1 = PIB > PIB2 ? 1 : 0;
        break;
    case 4: 
        printf("Atributo: Número de pontos turísticos\n");
        printf("Carta 1 - %s: %d -- ", País, Pontos);
        printf("Carta 2 - %s: %d\n", País2, Pontos2);
        resultado1 = Pontos > Pontos2 ? 1 : 0;
        break;
    case 5:
        printf("Atributo: Densidade demográfica\n");
        printf("Carta 1 - %s: %.2f hab/km² -- ", País, Densidade);
        printf("Carta 2 - %s: %.2f hab/km²\n", País2, Densidade2);
        resultado1 = Densidade < Densidade2 ? 1 : 0;
        break;
    case 6:
        printf("Atributo: PIB per Capita\n");
        printf("Carta 1 - %s: %.2f reais -- ", País, PIBPC);
        printf("Carta 2 - %s: %.2f reais\n", País2, PIBPC2);
        resultado1 = PIBPC > PIBPC2 ? 1 : 0;
        break;
    case 7:
        printf("Atributo: Super Poder\n");
        printf("Carta 1 - %s: %.2f -- ", País, SuperPoder);
        printf("Carta 2 - %s: %.2f\n", País2, SuperPoder2);
        resultado1 = SuperPoder > SuperPoder2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    printf("*** Comparação de atributos ***\n");
    printf("Escolha o segundo atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demogŕafica (Menor vence)\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf(" %d", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("Você escolheu o mesmo atributo!");
    } else
    {
        switch (atributo2)
    {

    case 1:
        printf("Atributo: População\n");
        printf("Carta 1 - %s: %lu -- ", País, População);
        printf("Carta 2 - %s: %lu\n", País2, População2);
        resultado2 = População > População2 ? 1 : 0;
        break;
    case 2:
        printf("Atributo: Área\n");
        printf("Carta 1 - %s: %.2f km² -- ", País, Área);
        printf("Carta 2 - %s: %.2f km²\n", País2, Área2);
        resultado2 = Área > Área2 ? 1 : 0;
        break;
    case 3:
        printf("Atributo: PIB\n");
        printf("Carta 1 - %s: %.2f bilhões de reais -- ", País, PIB);
        printf("Carta 2 - %s: %.2f bilhões de reais\n", País2, PIB2);
        resultado2 = PIB > PIB2 ? 1 : 0;
        break;
    case 4: 
        printf("Atributo: Número de pontos turísticos\n");
        printf("Carta 1 - %s: %d -- ", País, Pontos);
        printf("Carta 2 - %s: %d\n", País2, Pontos2);
        resultado2 = Pontos > Pontos2 ? 1 : 0;
        break;
    case 5:
        printf("Atributo: Densidade demográfica\n");
        printf("Carta 1 - %s: %.2f hab/km² -- ", País, Densidade);
        printf("Carta 2 - %s: %.2f hab/km²\n", País2, Densidade2);
        resultado2 = Densidade < Densidade2 ? 1 : 0;
        break;
    case 6:
        printf("Atributo: PIB per Capita\n");
        printf("Carta 1 - %s: %.2f reais -- ", País, PIBPC);
        printf("Carta 2 - %s: %.2f reais\n", País2, PIBPC2);
        resultado2 = PIBPC > PIBPC2 ? 1 : 0;
        break;
    case 7:
        printf("Atributo: Super Poder\n");
        printf("Carta 1 - %s: %.2f -- ", País, SuperPoder);
        printf("Carta 2 - %s: %.2f\n", País2, SuperPoder2);
        resultado2 = SuperPoder > SuperPoder2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
}

    if (resultado1 && resultado2)
    {
        printf("A carta 1 - %s venceu!\n", País);
    }
    else if (resultado1 != resultado2)
    {
        printf("Empate!\n");
    }
    else
    {
        printf("A carta 2 - %s venceu!\n", País2);
    }
    
    return 0;
    
}