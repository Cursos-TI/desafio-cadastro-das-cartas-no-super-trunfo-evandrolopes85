#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Declarando variaveis para 2 estados cada um com 1 carta
    char estado1, estado2; 
    char codigoDaCarta1[4], codigoDaCarta2[4];
    char nomeDaCidade1[50],nomeDaCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\n----- Jogo Super Trunfo - Tema 1 -----\n\n"); // Titulo do jogo

    // entrada de dados para o primeiro estado 
    printf("Escolha uma letra entre A e H para o nome do estado: \n");
    scanf("%c", &estado1);

    printf("Cadastro da carta do estado: '%c'\n", estado1);
    printf("Digite código da primeira carta.\nVocê escolheu o estado '%c', então digite o codigo %c01.\n", estado1, estado1);
    scanf("%s", codigoDaCarta1);
    getchar();

    printf("Digite o nome da cidade:\n");
    fgets(nomeDaCidade1, 50, stdin); // lendo string com espaco em branco
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = 0; //remvendo o \n do nome da cidade

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numeroDePontosTuristicos1);

    // entrada de dados para o segundo estado 
    printf("\nEscolha uma letra entre A e H para o nome do novo estado, que seja diferente do anterior. \n");
    scanf(" %c", &estado2);
    getchar();

    printf("Cadastro da carta do estado: '%c'\n", estado2);
    printf("Digite código da primeira carta.\nVocê escolheu o estado '%c', então digite o codigo %c01.\n", estado2, estado2);
    scanf("%s", codigoDaCarta2);
    getchar();

    printf("Digite o nome da cidade:\n");
    fgets(nomeDaCidade2, 50, stdin); // lendo string com espaco em branco
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = 0; //remvendo o \n do nome da cidade

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numeroDePontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   // exibindo valores comentados das cartas
   printf("\nExibindo cartas cadastradas\n");
   printf("\nCarta 1:");
   printf("\nEstado: %c\n", estado1);
   printf("Código da Carta: %s\n", codigoDaCarta1);
   printf("Nome da Cidade: %s\n", nomeDaCidade1);
   printf("Populacao: %d\n", populacao1);
   printf("Area %.2f em km2\n", area1);
   printf("PIB %.2f bilhoes de reais\n", pib1);
   printf("Número de pontos turisticos: %d\n", numeroDePontosTuristicos1);

   printf("\nCarta 2:");
   printf("\nEstado: %c\n", estado2);
   printf("Código da Carta: %s\n", codigoDaCarta2);
   printf("Nome da Cidade: %s\n", nomeDaCidade2);
   printf("Populacao: %d\n", populacao2);
   printf("Area %.2f em km2\n", area2);
   printf("PIB %.2f bilhoes de reais\n", pib2);
   printf("Número de pontos turisticos: %d\n", numeroDePontosTuristicos2);
   
   return 0;
}
