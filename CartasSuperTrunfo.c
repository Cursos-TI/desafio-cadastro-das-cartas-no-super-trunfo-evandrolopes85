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
    char estado; // declara váriavel estado do tipo char
    char codigoDaCarta[3];       // declara váriavel codigoDaCarta do tipo char com 3 caracteres
    char nomeDacidade[100];      // declara váriavel nomeDacidade do tipo char com até 100 caracteres
    int populacao;               // declara váriavel populacao do tipo inteiro
    float area;                  // declara váriavel area do tipo ponto flutuante
    float pib;                   // declara váriavel pib do tipo ponto flutuante
    int numeroDePontoTuristicos; // declara váriavel numeroDePontoTuristicos do tipo inteiro

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o estado, sendo uma letra entre A e H: \n");
    scanf("%c", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDacidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o pib (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numeroDePontoTuristicos);

    printf("Eatado: %c \n", estado);
    printf("Nome da cidade: %s \n", nomeDacidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Nome da cidade: %d \n", numeroDePontoTuristicos);

    // Cadastro da primeira carta

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
