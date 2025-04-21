#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    printf ("Desafio: Cartas Super Trunfo!\n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Começo do código
        //Declaração das variáveis (identificação de ambas as cartas)
    int populacao1, pontosturisticos1;
    float pib1, area1;
    char codigo1[4], cidade1[50], estado1;
    //Diferenciação entre ambas as cartas adicionando uma identificação ao final das variáveis
    int populacao2, pontosturisticos2;
    float pib2, area2;
    char codigo2[4], cidade2[50], estado2;

         //Coleta dos dados da primeira carta a partir dos inputs do usuário
    printf("Vamos começar com o registro da primeira carta!\n");
    printf("Insira o estado (A-H) da primeira carta: ");
    scanf(" %c", &estado1);

    printf("Ótimo! Insira agora o código de identificação dessa carta: ");
    scanf(" %s", codigo1);

    printf("De qual cidade estamos falando?: ");
    scanf(" %[^\n]", cidade1); //Feito dessa forma para permitir espaços, ^ indica "exceto", dessa forma são lidos todos os caracteres exceto \n

    printf("A população de %s é de: ", cidade1);
    scanf(" %d", &populacao1);

    printf("Qual a área em km²?: ");
    scanf(" %f", &area1);

    printf("O PIB dessa cidade (em bilhões) é de: ");
    scanf(" %f", &pib1);

    printf(" Quantos pontos turísticos temos em %s?: ", cidade1);
    scanf(" %d", &pontosturisticos1);

        //Coleta dos dados da segunda carta
    printf("Certo! Vamos registrar os dados da segunda carta agora.\n");
    printf("Insira o estado (A-H) da segunda carta: ");
    scanf(" %c", &estado2);
     
    printf("Ótimo! Insira agora o código de identificação dessa carta: ");
    scanf(" %s", codigo2);
    
    printf("De qual cidade estamos falando?: ");
    scanf(" %[^\n]", cidade2);
    
    printf("A população de %s é de: ", cidade2);
    scanf(" %d", populacao2);
    
    printf("Qual a área em km²?: ");
    scanf(" %f", &area2);
    
    printf("O PIB dessa cidade (em bilhões)e de: ");
    scanf(" %f", &pib2);
    
    printf(" Quantos pontos turísticos temos em %s?: ", cidade2);
    scanf(" %d", &pontosturisticos2);

// Apresentando os dados das cartas ao usuário:

    printf("\nVamos observar os dados que coletamos agora!\n");

    printf("\n--- PRIMEIRA CARTA ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\n--- SEGUNDA CARTA ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);


    return 0;
}
