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
    char estadoA, estadoB;
    char codigoDaCartaA[4], codigoDaCartaB[4];

    char nomeDaCidadeA[50],nomeDaCidadeB[50];

    int populacaoA, populacaoB;

    float areaA, areaB;

    float pibA, pibB;

    int numeroDePontosTuristicosA, numeroDePontosTuristicosB;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\n----- Jogo Super Trunfo - Tema 1 -----\n\n");

    printf("Escolha uma letra entre A e H para o nome do estado: \n");
    scanf("%c", &estadoA);

    printf("Cadastro da carta do estado: '%c'\n", estadoA);
    printf("Digite código da primeira carta.\nVocê escolheu o estado '%c', então digite o codigo %c01.\n", estadoA, estadoA);
    scanf("%s", codigoDaCartaA);
    getchar();

    printf("Digite o nome da cidade:\n");
    fgets(nomeDaCidadeA, 50, stdin);
    nomeDaCidadeA[strcspn(nomeDaCidadeA, "\n")] = 0;

    //scanf(" %[^\n]s", nomeDaCidadeA);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacaoA);

    printf("Digite a area da cidade: \n");
    scanf("%f", &areaA);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibA);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numeroDePontosTuristicosA);

    printf("\nEscolha uma letra entre A e H para o nome do novo estado, que seja diferente do anterior. \n");
    scanf(" %c", &estadoB);
    getchar();

    printf("Cadastro da carta do estado: '%c'\n", estadoB);
    printf("Digite código da primeira carta.\nVocê escolheu o estado '%c', então digite o codigo %c01.\n", estadoB, estadoB);
    scanf("%s", codigoDaCartaB);
    getchar();

    printf("Digite o nome da cidade:\n");
    fgets(nomeDaCidadeB, 50, stdin);
    nomeDaCidadeB[strcspn(nomeDaCidadeB, "\n")] = 0;
    //scanf(" %[^\n]s", nomeDaCidadeB);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacaoB);

    printf("Digite a area da cidade: \n");
    scanf("%f", &areaB);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibB);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numeroDePontosTuristicosB);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   printf("\nExibindo cartas cadastradas\n");
   printf("\nCarta 1:");
   printf("\nEstado: %c\n", estadoA);
   printf("Código da Carta: %s\n", codigoDaCartaA);
   printf("Nome da Cidade: %s\n", nomeDaCidadeA);
   printf("Populacao: %d\n", populacaoA);
   printf("Area %.2f em km2\n", areaA);
   printf("PIB %.2f bilhoes de reais\n", pibA);
   printf("Número de pontos turisticos: %d\n", numeroDePontosTuristicosA);

   printf("\nCarta 2:");
   printf("\nEstado: %c\n", estadoB);
   printf("Código da Carta: %s\n", codigoDaCartaB);
   printf("Nome da Cidade: %s\n", nomeDaCidadeB);
   printf("Populacao: %d\n", populacaoB);
   printf("Area %.2f em km2\n", areaB);
   printf("PIB %.2f bilhoes de reais\n", pibB);
   printf("Número de pontos turisticos: %d\n", numeroDePontosTuristicosB);
   
   return 0;
}
