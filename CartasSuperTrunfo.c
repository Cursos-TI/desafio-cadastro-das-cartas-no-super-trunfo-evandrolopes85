#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Declaração de Variáveis da primeira carta
    int populacao1,populacao2;               // declara váriavel populacao do tipo inteiro
    float area1, area2;                  // declara váriavel area do tipo ponto flutuante
    float pib1, pib2;                   // declara váriavel pib do tipo ponto flutuante
    int numeroDePontoTuristicos1, numeroDePontoTuristicos2; // declara váriavel numeroDePontoTuristicos do tipo inteiro

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastrando dados da primeira carta
    printf("Cadastro da primeira Carta: \n\n");
    printf("Digite a população: \n"); // Mensagem pedindo para o usuario digitar a população da cidade
    scanf("%d", &populacao1);          // Armazenando o dado digitado pelo usuario na várialvel populacao

    printf("Digite a area da cidade: \n"); // Mensagem pedindo para o usuario digitar a area da cidade
    scanf("%f", &area1);                    // Armazenando o dado digitado pelo usuario na várialvel area

    printf("Digite o pib (Produto Interno Bruto) da cidade: \n"); // Mensagem pedindo para o usuario digitar o PIB da cidade
    scanf("%f", &pib1);                                            // Armazenando o dado digitado pelo usuario na várialvel pib

    printf("Digite o número de pontos turisticos: \n");  // Mensagem pedindo para o usuario digitar o número de pontos turisticos da cidade
    scanf("%d", &numeroDePontoTuristicos1);               // Armazenando o dado digitado pelo usuario na várialvel numeroDePontoTuristicos

    printf("\n"); // pulando linha
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibindo dados da primeira carta
    printf("Dados cadastrados da primeira carta\n");
    printf("População: %d \n", populacao1); // exibindo a população da cidade
    printf("Área: %.2f Km2 \n", area1); // exibindo área com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1); // exibindo PIB com 2 casas decimais
    printf("Número de Pontos Turísticos: %d \n", numeroDePontoTuristicos1);  // exibindo a quantidade de ponto turistico da cidade

    printf("\n"); // pulando linha
    // Cadastrando dados da segunda carta
    printf("Cadastro da segunda carta");
    printf("Digite a população: \n"); // Mensagem pedindo para o usuario digitar a população da cidade
    scanf("%d", &populacao2);          // Armazenando o dado digitado pelo usuario na várialvel populacao

    printf("Digite a area da cidade: \n"); // Mensagem pedindo para o usuario digitar a area da cidade
    scanf("%f", &area2);                    // Armazenando o dado digitado pelo usuario na várialvel area

    printf("Digite o pib (Produto Interno Bruto) da cidade: \n"); // Mensagem pedindo para o usuario digitar o PIB da cidade
    scanf("%f", &pib2);                                            // Armazenando o dado digitado pelo usuario na várialvel pib

    printf("Digite o número de pontos turisticos: \n");  // Mensagem pedindo para o usuario digitar o número de pontos turisticos da cidade
    scanf("%d", &numeroDePontoTuristicos2);               // Armazenando o dado digitado pelo usuario na várialvel numeroDePontoTuristicos

    // Exibindo dados da primeira carta
    printf("\nDados cadastrados da segunda carta\n");
    printf("População: %d \n", populacao2); // exibindo a população da cidade
    printf("Área: %.2f Km2 \n", area2); // exibindo área com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib2); // exibindo PIB com 2 casas decimais
    printf("Número de Pontos Turísticos: %d \n", numeroDePontoTuristicos2);  // exibindo a quantidade de ponto turistico da cidade
    return 0;
}
