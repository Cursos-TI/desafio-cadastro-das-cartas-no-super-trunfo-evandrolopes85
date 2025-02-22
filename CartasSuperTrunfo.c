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
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\n----- Jogo Super Trunfo - Tema 1 -----\n\n"); // Titulo do jogo

    // entrada de dados para o primeiro estado 
    printf("Escolha uma letra entre A e H para o nome do estado: \n");
    scanf("%c", &estado1);

    printf("Cadastro da carta do estado: '%c'\n", estado1);
    printf("Digite código da primeira carta.\nVocê escolheu o estado '%c', então digite o codigo entre %c01 e %c04.\n", estado1, estado1, estado1);
    scanf("%s", codigoDaCarta1);
    getchar();

    printf("Digite o nome da cidade:\n");
    fgets(nomeDaCidade1, 50, stdin); // lendo string com espaco em branco
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = 0; //remvendo o \n do nome da cidade

    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade em bilhões: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numeroDePontosTuristicos1);

    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 / (float)populacao1) * 1000000000; // convertendo valor para bilhão
    // calculo do super poder
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)numeroDePontosTuristicos1 + pibPerCapita1 + (float)(1/densidadePopulacional1); // 1 / densidadePopulacional1 calcula o inverso da densidade populacionasl

    // entrada de dados para o segundo estado 
    printf("\nEscolha uma letra entre A e H para o nome do novo estado, que seja diferente do anterior. \n");
    scanf(" %c", &estado2);
    getchar();

    printf("Cadastro da carta do estado: '%c'\n", estado2);
    printf("Digite código da primeira carta.\nVocê escolheu o estado '%c', então digite o codigo entre %c01 e %c04.\n", estado2, estado2, estado2);
    scanf("%s", codigoDaCarta2);
    getchar();

    printf("Digite o nome da cidade:\n");
    fgets(nomeDaCidade2, 50, stdin); // lendo string com espaco em branco
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = 0; //remvendo o \n do nome da cidade

    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em bilhões: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numeroDePontosTuristicos2);

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 / (float)populacao2) * 1000000000;
    // calculo do super poder
    superPoder1 = (float)populacao2 + area2 + pib2 + (float)numeroDePontosTuristicos2 + pibPerCapita2 + (float)(1 / densidadePopulacional2);  // 1 / densidadePopulacional2 calcula o inverso da densidade populacionasl

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   // exibindo valores comentados das cartas
   printf("\nExibindo cartas cadastradas\n");
   printf("\nCarta 1:");
   printf("\nEstado: %c\n", estado1);
   printf("Código da Carta: %s\n", codigoDaCarta1);
   printf("Nome da Cidade: %s\n", nomeDaCidade1);
   printf("Populacao: %lu\n", populacao1);
   printf("Area %.2f em km2\n", area1);
   printf("PIB %.2f bilhoes de reais\n", pib1);
   printf("Número de pontos turisticos: %d\n", numeroDePontosTuristicos1);
   printf("Densidade populacional: %.2f hab/km2\n", densidadePopulacional1);
   printf("PIB per Capita: %.2f reais \n", pibPerCapita1);

   printf("\nCarta 2:");
   printf("\nEstado: %c\n", estado2);
   printf("Código da Carta: %s\n", codigoDaCarta2);
   printf("Nome da Cidade: %s\n", nomeDaCidade2);
   printf("Populacao: %lu\n", populacao2);
   printf("Area %.2f em km2\n", area2);
   printf("PIB %.2f bilhoes de reais\n", pib2);
   printf("Número de pontos turisticos: %d\n", numeroDePontosTuristicos2);
   printf("Densidade populacional: %.2f hab/km2\n", densidadePopulacional2);
   printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

   // Exibindo resultados das comparações
   // verifico qual carta ganhou utilizando o operador relacional  >(maior que), com cada atributo
   // se o atributo for maior retorna 1 se não 0 
   printf("\nComparação de Cartas:\n");
   printf("Populacao: Carta 1 (%d)\n", (populacao1 > populacao2)); 
   printf("Área: Carta 1 venceu (%d):\n",(area1 > area2));
   printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));
   printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (numeroDePontosTuristicos1 > numeroDePontosTuristicos2));
   printf("Densidade Populacioal: Carta 1 venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2));
   printf("PIB per Capita: Carta 1 venceu (%d):\n", (pib1 > pib2));
   printf("Super Poder: Carta 1 venceu (%d)\n", (superPoder1 > superPoder2));

   return 0;
}
