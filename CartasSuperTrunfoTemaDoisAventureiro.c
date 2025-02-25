#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 2 - Aventureiro
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

void menu();

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Declarando variaveis para 2 estados cada um com 1 carta
    char nomeDoPais1[50], nomeDoPais2[50];
    int populacaoDoPais1, populacaoDoPais2;
    float areaDoPais1, areaDoPais2;
    float pibDoPais1, pibDoPais2;
    int numeroDePontosTuristicosDoPais1, numeroDePontosTuristicosDoPais2;
    float densidadeDemograficaDoPais1, densidadeDemograficaDoPais2;
    int opcao;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\n----- Jogo Super Trunfo - Tema 2 Aventureiro -----\n\n"); // Titulo do jogo
    // entrada de dados para o primeiro pais 
    printf("Digite o nome do país:\n");
    fgets(nomeDoPais1,sizeof(nomeDoPais1), stdin); // Leitura de String com com espaco, calculado a quantidade de caracaters com sizeof
    nomeDoPais1[strcspn(nomeDoPais1,"\n")] = 0; // remove o \n da String

    printf("Digite a população do(a) (%s):\n", nomeDoPais1); // Pedindo para o usuario digitar a populacao do pais
    scanf("%d", &populacaoDoPais1); // armazena populacao na variavel populacaoDoPais1

    printf("Digite a area do(a) (%s): \n", nomeDoPais1);
    scanf("%f", &areaDoPais1); // Leitura de um float e aramazeno na variavel areaDoPais1

    printf("Digite o PIB do(a) (%s) em bilhões: \n", nomeDoPais1);
    scanf("%f", &pibDoPais1); // Leitura de um float e aramazeno na variavel pibDoPais1

    printf("Digite o número de pontos turisticos do(a) (%s): \n", nomeDoPais1);
    scanf("%d", &numeroDePontosTuristicosDoPais1); // Leitura de um float e aramazeno na variavel numeroDePontosTuristicosDoPais1

    getchar(); // limpando o buffer
    // entrada de dados para o segundo pais 
    printf("\nCadastro do novo país.\nDigite o nome do novo país, diferente do anterior\n");

    printf("Digite o nome do país:\n");
    fgets(nomeDoPais2, sizeof(nomeDoPais2), stdin); // Leitura de String com com espaco, calculado a quantidade de caracaters com sizeof
    nomeDoPais2[strcspn(nomeDoPais2,"\n")] = 0; // remove o \n da String

    printf("Digite a população do(a) (%s):\n", nomeDoPais2); 
    scanf("%d", &populacaoDoPais2); // Leitura de um inteiro e aramazeno na variavel populacaoDoPais2

    printf("Digite a area do(a) (%s): \n", nomeDoPais2);
    scanf("%f", &areaDoPais2); // Leitura de um float e aramazeno na variavel areaDoPais2

    printf("Digite o PIB do(a) (%s) em bilhões: \n", nomeDoPais2);
    scanf("%f", &pibDoPais2); // Leitura de um float e aramazeno na variavel pibDoPais2

    printf("Digite o número de pontos turisticos do(a) (%s): \n", nomeDoPais2);
    scanf("%d", &numeroDePontosTuristicosDoPais2); // Leitura de um float e aramazeno na variavel numeroDePontosTuristicosDoPais2
    getchar();

    densidadeDemograficaDoPais1 = (float)populacaoDoPais1 / areaDoPais1; // Calcula a densidade demografica do Pais1
    densidadeDemograficaDoPais2 = (float)populacaoDoPais2 / areaDoPais2; // Calcula a densidade demografica do Pais2

    
    // Menu para o usuário escolher o atributo que será comparado
    printf("\nEscolha um dos atributos a seguir para realizar a comparação\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &opcao); // Le a opção do usuario e armaze em opcao

    printf("Pais 1 - %s\n", nomeDoPais1); // Exibir o nome do pais 1
    printf("Pais 2 - %s\n", nomeDoPais2); // Exibir o nome do pais 2
    switch(opcao){ // switch para exibir o resulta de acordo com a opcao escolhida
      case 1: // caso opcao 1 escolhida
        printf("Atributo de comparacao: Populacao\n"); // exibe que o atributo escolhido e populacao
        printf("Populacao do(a) %s = %d\n", nomeDoPais1, populacaoDoPais1); // Exibir a populacao do pais 1
        printf("Populacao do(a) %s = %d\n", nomeDoPais2, populacaoDoPais2); // Exibir a populacao do pais 2
        if(populacaoDoPais1 > populacaoDoPais2){ // se a populacao do pais 1 for maior que a do pais 2
          printf("A carta do(a) %s Ganhou\n", nomeDoPais1); // exibe que a carta 1 ganhhou
        }else if(populacaoDoPais1 < populacaoDoPais2){ // senão se população do pais 2 for maior que a do pais 1
          printf("A carta do(a) %s Ganhou\n", nomeDoPais2); // exibe que o pais 2 ganhou 
        }else{ // senão
          printf("Empate\n"); //exibe empate
        }
        break; // termina o switch
      case 2: // caso opcao 2 escolhida
        printf("Atributo de comparacao: Área\n");// exibe que o atributo escolhido e área
        printf("Área do(a) %s = %.2f\n", nomeDoPais1, areaDoPais1);// Exibir o nome do pais 1 e sua áera 
        printf("Área do(a) %s = %.2f\n", nomeDoPais2, areaDoPais2);// Exibir o nome do pais 2 e sua áera
        if(areaDoPais1 > areaDoPais2){// se a área do pais 1 for maior que a do pais 2
          printf("A carta do(a) %s Ganhou\n", nomeDoPais1); // exibe que a carta 1 ganhhou
        }else if(areaDoPais1 < areaDoPais2){ // senão se área do pais 2 for maior que a do pais 1
          printf("A carta do(a) %s Ganhou\n", nomeDoPais2); // exibe que o pais 2 ganhou 
        }else{// senão
          printf("Empate\n"); //exibe empate
        }
        break;
      case 3:// caso opcao 3 escolhida
        printf("Atributo de comparacao: PIB\n");// exibe que o atributo escolhido e PIB
        printf("PIB do(a) %s = %.2f\n", nomeDoPais1, pibDoPais1); // Exibir o nome do pais 1 o seu PIB 
        printf("PIB do(a) %s = %.2f\n", nomeDoPais2, pibDoPais2); // Exibir o nome do pais 2 o seu PIB

        if(pibDoPais1 > pibDoPais2){// se a PIB do pais 1 for maior que a do pais 2
          printf("A carta do(a) %s Ganhou\n", nomeDoPais1); // exibe que a carta 1 ganhhou
        }else if(pibDoPais1 < pibDoPais2){ // senão se PIB do pais 2 for maior que a do pais 1
          printf("A carta do(a) %s Ganhou\n", nomeDoPais2); // exibe que o pais 2 ganhou 
        }else { // se não
          printf("Empate\n");//exibe empate
        }
        break;
      case 4:// caso opcao 4 escolhida
        printf("Atributo de comparacao: Número de Pontos Turísticos\n"); // exibe que o atributo escolhido e Número de Pontos Turísticos
        printf("Número de Pontos Turísticos do(a) %s = %.2f\n", nomeDoPais1, numeroDePontosTuristicosDoPais1); // Exibir o nome do pais 1 e Número de Pontos Turísticos
        printf("Número de Pontos Turísticos do(a) %s = %.2f\n", nomeDoPais2, numeroDePontosTuristicosDoPais2); // Exibir o nome do pais 2 e Número de Pontos Turísticos

        if(numeroDePontosTuristicosDoPais1 > numeroDePontosTuristicosDoPais2){ // se a Número de Pontos Turísticos do pais 1 for maior que a do pais 2
          printf("A carta do(a) %s Ganhou\n", nomeDoPais1);// exibe que a carta 1 ganhhou
        }else if(numeroDePontosTuristicosDoPais1 < numeroDePontosTuristicosDoPais2){ // se a Número de Pontos Turísticos do pais 2 for maior que a do pais 1
          printf("A carta do(a) %s Ganhou\n", nomeDoPais2);// exibe que o pais 2 ganhou 
        }else { // senão
          printf("Empate\n"); // exibe empate
        }

        break;
      case 5:// caso opcao 5 escolhida
        printf("Atributo de comparacao: Densidade demográfica\n"); // exibe que o atributo escolhido e Densidade demográfica
        printf("Densidade demográfica do(a) %s = %.2f\n", nomeDoPais1, densidadeDemograficaDoPais1);// Exibir o Densidade demográfica do pais 1
        printf("Densidade demográfica do(a) %s = %.2f\n", nomeDoPais2, densidadeDemograficaDoPais2);// Exibir o Densidade demográfica do pais 2

        if(densidadeDemograficaDoPais1 < densidadeDemograficaDoPais2){ // se a Densidade demográfica do pais 1 for menor que a do pais 2
          printf("A carta do(a) %s Ganhou\n", nomeDoPais1); // exibe que o pais 1 ganhou 
        }else if(densidadeDemograficaDoPais2 < densidadeDemograficaDoPais1){ // se a Densidade demográfica do pais 2 for menor que a do pais 1
          printf("A carta do(a) %s Ganhou\n", nomeDoPais2); // exibe que o pais 2 ganhou 
        }else { // senão
          printf("Empate\n"); // exibe empate
        }
        break;

      default: // caso opcao escolhida não for entre 1 e 5 inclusive
        printf("Atributo de comparação invalido"); // mensagem de oção invalida
  }


   return 0;
}
