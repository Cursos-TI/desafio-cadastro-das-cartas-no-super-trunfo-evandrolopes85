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
    char estado1[3], estado2[3]; 
    char codigoDaCarta1[10], codigoDaCarta2[10];
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
    printf("Digite a sigla do estado, ex. SP: \n");
    scanf("%s", estado1);

    printf("Cadastro da carta do estado: '%s'\n", estado1);
    printf("Digite código da primeira carta.\n");
    scanf(" %s", codigoDaCarta1);
    getchar();

    printf("Digite o nome da cidade do estado (%s):\n", estado1);
    fgets(nomeDaCidade1, 50, stdin); // lendo string com espaco em branco
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = 0; //remvendo o \n do nome da cidade

    printf("Digite a população da cidade (%s):\n", nomeDaCidade1);
    scanf("%lu", &populacao1);

    printf("Digite a area da cidade (%s): \n", nomeDaCidade1);
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (%s) em bilhões: \n", nomeDaCidade1);
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos da (%s): \n", nomeDaCidade1);
    scanf("%d", &numeroDePontosTuristicos1);

    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 / (float)populacao1) * 1000000000; // convertendo valor para bilhão
    // calculo do super poder
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)numeroDePontosTuristicos1 + pibPerCapita1 + (float)(1/densidadePopulacional1); // 1 / densidadePopulacional1 calcula o inverso da densidade populacionasl

    // entrada de dados para o segundo estado 
    printf("\nCadastro do novo estado.\nDigite a sigla do estado, diferente do anterior ex.  RJ: \n");
    scanf(" %s", estado2);
    //getchar();

    printf("Cadastro da carta do estado: '%s'\n", estado2);
    printf("Digite código da primeira carta. do estado %s\n",estado2);
    scanf(" %s", codigoDaCarta2);
    getchar();

    printf("Digite o nome da cidade do estado do (%s):\n", estado2);
    fgets(nomeDaCidade2, 50, stdin); // lendo string com espaco em branco
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = 0; //remvendo o \n do nome da cidade

    printf("Digite a população da cidade (%s):\n", nomeDaCidade2);
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade (%s): \n", nomeDaCidade2);
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (%s) em bilhões: \n", nomeDaCidade2);
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos da cidade (%s): \n", nomeDaCidade2);
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
   printf("\nEstado: %s\n", estado1);
   printf("Código da Carta: %s\n", codigoDaCarta1);
   printf("Nome da Cidade: %s\n", nomeDaCidade1);
   printf("Populacao: %lu\n", populacao1);
   printf("Area %.2f em km2\n", area1);
   printf("PIB %.2f bilhoes de reais\n", pib1);
   printf("Número de pontos turisticos: %d\n", numeroDePontosTuristicos1);
   printf("Densidade populacional: %.2f hab/km2\n", densidadePopulacional1);
   printf("PIB per Capita: %.2f reais \n", pibPerCapita1);

   printf("\nCarta 2:");
   printf("\nEstado: %s\n", estado2);
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

   printf("\nComparação de Cartas (Atribudo: Populacao):\n");
   // Comparando as cartas pelo atributo Populacao
   // Se a populacao da carta 1 for maior que o atributo da carta 2 então carta 1 e exibe as informacoes da carta,atributo escolhido e a carta1 ganhadora
   if(populacao1 > populacao2){
      printf("Carta 1 - %s (%s): %lu\n", nomeDaCidade1, estado1, populacao1);
      printf("Carta 2 - %s (%s): %lu\n", nomeDaCidade2, estado2, populacao2);
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
   }else{ // se não carta 2 ganhou e exibe as informacoes da carta,atributo escolhido e a carta2 ganhadora
      printf("Carta 1 - %s (%s): %lu\n", nomeDaCidade1, estado1, populacao1);
      printf("Carta 2 - %s (%s): %lu\n", nomeDaCidade2, estado2, populacao2);
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
   }

   return 0;
}
