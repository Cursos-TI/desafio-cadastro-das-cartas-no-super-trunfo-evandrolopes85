#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estadoA, estadoB, estadoC, estadoD, estadoE, estadoF, estadoG, estadoH;
    char codigoDaCartaA1[4], codigoDaCartaA2[4], codigoDaCartaA3[4], codigoDaCartaA4[4];

    char nomeDaCidadeA1[100],nomeDaCidadeA2[100], nomeDaCidadeA3[100], nomeDaCidadeA4[100];

    int populacaoA1, populacaoA2, populacaoA3, populacaoA4;

    float areaA1, areaA2, areaA3, areaA4;

    float pibA1, pibA2, pibA3, pibA4;

    int numeroDePontosTuristicosA1, numeroDePontosTuristicosA2, numeroDePontosTuristicosA3, numeroDePontosTuristicosA4;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\n----- Jogo Super Trunfo - Tema 1 -----\n\n");

    printf("Digite a tecla 'A' para o primeiro estado: \n");
    scanf("%c", &estadoA);

    printf("\nCadastro da primeira carta do estado %c\n", estadoA);
    printf("Digite A01 para o código da primeira carta:\n");
    scanf("%s", codigoDaCartaA1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]s", nomeDaCidadeA1);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacaoA1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &areaA1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibA1);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numeroDePontosTuristicosA1);

    printf("\nCadastro da segunda carta do estado %c\n", estadoA);
    printf("Digite A02 para o código da segunda carta:\n");
    scanf("%s", codigoDaCartaA2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]s", nomeDaCidadeA2);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacaoA2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &areaA2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibA2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numeroDePontosTuristicosA2);

    printf("\nCadastro da terceira carta do estado %c\n", estadoA);
    printf("Digite o código A03 para a terceira carta:\n");
    scanf("%s", codigoDaCartaA3);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]s", nomeDaCidadeA3);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacaoA3);

    printf("Digite a area da cidade: \n");
    scanf("%f", &areaA3);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibA3);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numeroDePontosTuristicosA3);

    printf("\nCadastro da quarta carta do estado %c\n", estadoA);
    printf("Digite A04 para o código da quarta carta:\n");
    scanf("%s", codigoDaCartaA4);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]s", nomeDaCidadeA4);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacaoA4);

    printf("Digite a area da cidade: \n");
    scanf("%f", &areaA4);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibA4);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numeroDePontosTuristicosA4);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   printf("\nExibindo cartas cadastradas\n");
   printf("\nEstado: %c\n", estadoA);
   printf("Código da Carta: %s\n", codigoDaCartaA1);
   printf("Nome da Cidade: %s\n", nomeDaCidadeA1);
   printf("Populacao: %d\n", populacaoA1);
   printf("Area %.2f em km2\n", areaA1);
   printf("PIB %.2f bilhoes de reais\n", pibA1);
   printf("Número de pontos turisticos: %d\n", numeroDePontosTuristicosA1);

   printf("\nEstado: %c\n", estadoA);
   printf("Código da Carta: %s\n", codigoDaCartaA2);
   printf("Nome da Cidade: %s\n", nomeDaCidadeA2);
   printf("Populacao: %d\n", populacaoA2);
   printf("Area %.2f em km2\n", areaA2);
   printf("PIB %.2f bilhoes de reais\n", pibA2);
   printf("Número de pontos turisticos: %d\n", numeroDePontosTuristicosA2);

   printf("\nEstado: %c\n", estadoA);
   printf("Código da Carta: %s\n", codigoDaCartaA3);
   printf("Nome da Cidade: %s\n", nomeDaCidadeA3);
   printf("Populacao: %d\n", populacaoA3);
   printf("Area %.2f em km2\n", areaA3);
   printf("PIB %.2f bilhoes de reais\n", pibA3);
   printf("Número de pontos turisticos: %d\n", numeroDePontosTuristicosA3);

   printf("\nEstado: %c\n", estadoA);
   printf("Código da Carta: %s\n", codigoDaCartaA4);
   printf("Nome da Cidade: %s\n", nomeDaCidadeA4);
   printf("Populacao: %d\n", populacaoA4);
   printf("Area %.2f em km2\n", areaA4);
   printf("PIB %.2f bilhoes de reais\n", pibA4);
   printf("Número de pontos turisticos: %d\n", numeroDePontosTuristicosA4);


    return 0;
}
