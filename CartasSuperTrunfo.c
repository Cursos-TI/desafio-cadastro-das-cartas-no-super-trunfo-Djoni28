#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //  Área para definição das variáveis para armazenar as propriedades das cidades
  int pontosturisticos1;
  long unsigned int populacao1;
  float pib1, area1;
  char codigo1[4], cidade1[50], estado1;
//  Diferenciação entre ambas as cartas adicionando uma identificação ao final das variáveis
  int pontosturisticos2; 
  long unsigned int populacao2;
  float pib2, area2;
  char codigo2[4], cidade2[50], estado2;

// Área para entrada de dados
  printf("Vamos começar com o registro da primeira carta!\n");
    printf("Insira o estado (A-H) da primeira carta: ");
    scanf(" %c", &estado1);
    getchar();

    printf("Ótimo! Insira agora o código de identificação dessa carta: ");
    scanf(" %s", codigo1);
    getchar();

    printf("De qual cidade estamos falando?: ");
    scanf(" %[^\n]", cidade1); //Feito dessa forma para permitir espaços, ^ indica "exceto", dessa forma são lidos todos os caracteres exceto \n
    getchar();

    printf("A população de %s é de: ", cidade1);
    scanf(" %lu", &populacao1);

    printf("Qual a área em km²?: ");
    scanf(" %f", &area1);

    printf("O PIB dessa cidade (em bilhões) é de: ");
    scanf(" %f", &pib1);

    printf(" Quantos pontos turísticos temos em %s?: ", cidade1);
    scanf(" %d", &pontosturisticos1);
    printf("\n");

//Coleta dos dados da segunda carta
  printf("Certo! Vamos registrar os dados da segunda carta agora.\n");
    printf("Insira o estado (A-H) da segunda carta: ");
    scanf(" %c", &estado2);
    getchar();


    printf("Ótimo! Insira agora o código de identificação dessa carta: ");
    scanf(" %s", codigo2);
    getchar();

    printf("De qual cidade estamos falando?: ");
    scanf(" %[^\n]", cidade2);
    getchar();

    printf("A população de %s é de: ", cidade2);
    scanf(" %lu", &populacao2);

    printf("Qual a área em km²?: ");
    scanf(" %f", &area2);

    printf("O PIB dessa cidade (em bilhões) é de: ");
    scanf(" %f", &pib2);

    printf(" Quantos pontos turísticos temos em %s?: ", cidade2);
    scanf(" %d", &pontosturisticos2);

// Declaração das variáveis de densidade populacional, PIB per capita e super poder

    float densidade1 = populacao1 / area1, densidade2 = populacao2 / area2;
    float pibcapita1 = (pib1*1000000000) / populacao1, pibcapita2 = (pib2 * 1000000000) / populacao2;

    float superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontosturisticos1 + pibcapita1 + (area1 / (float) populacao1);
    float superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontosturisticos2 + pibcapita2 + (area2 / (float) populacao2);

// Área para exibição dos dados da cidade
  printf("\nVamos observar os dados que coletamos agora!\n");

    printf("\n--- PRIMEIRA CARTA ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$%.2f\n", pibcapita1);
    printf("\n");

    printf("\n--- SEGUNDA CARTA ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$%.2f\n", pibcapita2);

// Comparação das cartas
  printf("\n---COMPARANDO AS CARTAS---\n");
  printf("\nPopulação: Carta 1 venceu (%d)", populacao1 > populacao2);
  printf("\nÁrea: Carta 1 venceu (%d)", area1 > area2);
  printf("\nPIB: Carta 1 venceu (%d)", pib1 > pib2);
  printf("\nPontos Turísticos: Carta 1 venceu (%d)", pontosturisticos1 > pontosturisticos2);
  printf("\nDensidade Populacional: Carta 2 venceu (%d)", densidade1 < densidade2);
  printf("\nPIB per Capita: Carta 1 venceu (%d)", pibcapita1 > pibcapita2);
  printf("\nSuper Poder: Carta 1 venceu (%d)", superpoder1 > superpoder2);
  
return 0;
}