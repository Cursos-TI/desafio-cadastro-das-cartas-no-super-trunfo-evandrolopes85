#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 2 - Mestre
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

void menu(){
    // Menu para o usuário escolher o atributo que será comparado
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade demográfica\n");
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Declarando variaveis para 2 estados cada um com 1 carta
    char nomeDoPais1[50], nomeDoPais2[50];
    int populacaoDoPais1, populacaoDoPais2, opcao1, opcao2;
    float areaDoPais1, areaDoPais2, pibDoPais1, pibDoPais2, densidadeDemograficaDoPais1, densidadeDemograficaDoPais2, somaAtributoCarta1, somaAtributoCarta2;
    int numeroDePontosTuristicosDoPais1, numeroDePontosTuristicosDoPais2;

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

    // Verifica se os atribuos escolhidos são iguais, ignoraando case sensitive (maiusculo e minusculo) 
    // stcasecmp para LINUX
    // Caso sim exibe uma mensagem e finaliza o programa
    if(strcasecmp(nomeDoPais1, nomeDoPais2) == 0){
        printf("Digite o nome do pais diferente do primeiro. Por favor tente novamente!\n");
        printf("Finalizando.....\n");
        return 0;
    }

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
    
    while(1){
    printf("\nEscolha um dos atributos a seguir como primeira opção para realizar a comparação\n");
    menu();
    scanf("%d", &opcao1); // Le a opção do usuario e armaze em opcao

    switch(opcao1){
        case 1: 
            printf("\nEscolha o próximo atributo para comparação\n");
            printf("1 - Área\n");
            printf("2 - PIB\n");
            printf("3 - Número de Pontos Turísticos\n");
            printf("4 - Densidade demográfica\n");
            scanf("%d", &opcao2); // Le a opção do usuario e armaze em opcao
            
            printf("Pais 1 - %s\n", nomeDoPais1); // Exibir o nome do pais 1
            printf("Pais 2 - %s\n", nomeDoPais2); // Exibir o nome do pais 2

            printf("Atributo 1 escolhido para comparacao foi: %s\n","População");
            switch(opcao2){
                case 1: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "Área");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo Populacao tem valor = %d\n",populacaoDoPais1);
                    printf("Atributo Área tem valor = %.2f\n", areaDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo Populacao tem valor = %d\n", populacaoDoPais2);
                    printf("Atributo Área tem valor = %.2f\n", areaDoPais2);

                    somaAtributoCarta1 = (float)populacaoDoPais1 + areaDoPais1;
                    somaAtributoCarta2 = (float)populacaoDoPais2 + areaDoPais2;

                    printf("\nNo atributo %s a carta %d venceu\n", "Populacao", (populacaoDoPais1 > populacaoDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "Área", (areaDoPais1 > areaDoPais2) ? 1: 2);
                break;
                case 2: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "PIB");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %d\n", "Populacao", populacaoDoPais1);
                    printf("Atributo %s tem valor = %.2f\n", "PIB", pibDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %d\n", "Populacao", populacaoDoPais2);
                    printf("Atributo %s tem valor = %.2f\n", "PIB", pibDoPais2);

                    // Soma dos atributos 
                    somaAtributoCarta1 = (float)populacaoDoPais1 + pibDoPais1;
                    somaAtributoCarta2 = (float)populacaoDoPais2 + pibDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "Populacao", (populacaoDoPais1 > populacaoDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "PIB", (pibDoPais1 > pibDoPais2) ? 1: 2);
                break;
                case 3: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "Número de Pontos Turísticos");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %d\n", "Populacao", populacaoDoPais1);
                    printf("Atributo %s tem valor = %.d\n", "Número de Pontos Turísticos", numeroDePontosTuristicosDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %d\n", "Populacao", populacaoDoPais2);
                    printf("Atributo %s tem valor = %.d\n", "Número de Pontos Turísticos", numeroDePontosTuristicosDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = (float)populacaoDoPais1 + numeroDePontosTuristicosDoPais1;
                    somaAtributoCarta2 = (float)populacaoDoPais2 + numeroDePontosTuristicosDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "Populacao", (populacaoDoPais1 > populacaoDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "Número de Pontos Turísticos", (numeroDePontosTuristicosDoPais1 > numeroDePontosTuristicosDoPais2) ? 1: 2);
                break;
                case 4: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "Densidade demográfica");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %d\n", "Populacao", populacaoDoPais1);
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %d\n", "Populacao", populacaoDoPais2);
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = (float)populacaoDoPais1 + densidadeDemograficaDoPais1;
                    somaAtributoCarta2 = (float)populacaoDoPais2 + densidadeDemograficaDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "Populacao", (populacaoDoPais1 > populacaoDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "Densidade demográfica", (densidadeDemograficaDoPais1 > densidadeDemograficaDoPais2) ? 2: 1);
                break;
                default:
                    printf("Opção invalida, tente novamente.\nFinalizando....\n");
                    return 0;
            }
            
            break;
        case 2:
            printf("\nEscolha o próximo atributo para comparação\n");
            printf("1 - População\n");
            printf("2 - PIB\n");
            printf("3 - Número de Pontos Turísticos\n");
            printf("4 - Densidade demográfica\n");
            scanf("%d", &opcao2); // Le a opção do usuario e armaze em opcao

            printf("\nPais 1 - %s\n\n", nomeDoPais1); // Exibir o nome do pais 1
            printf("\nPais 2 - %s\n\n", nomeDoPais2); // Exibir o nome do pais 2

            printf("Atributo 1 escolhido para comparacao foi: %s\n", "Área");
            switch(opcao2){
                case 1: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "População");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %.2f\n", "Área", areaDoPais1);
                    printf("Atributo %s tem valor = %.d\n", "População", populacaoDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %.2f\n", "Área", areaDoPais2);
                    printf("Atributo %s tem valor = %.d\n", "População", populacaoDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = areaDoPais1 + (float)populacaoDoPais1;
                    somaAtributoCarta2 = areaDoPais1 + (float)populacaoDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "Área", (areaDoPais1 > areaDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "Populacao", (populacaoDoPais1 > populacaoDoPais2) ? 1: 2);
                break;
                case 2: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "PIB");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %.2f\n","Área",areaDoPais1);
                    printf("Atributo %s tem valor = %.2f\n", "PIB",pibDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %.2f\n","Área",areaDoPais2);
                    printf("Atributo %s tem valor = %.2f\n","PIB",pibDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = areaDoPais1 + pibDoPais1;
                    somaAtributoCarta2 = areaDoPais1 + pibDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "Área", (areaDoPais1 > areaDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "PIB", (pibDoPais1 > pibDoPais2) ? 1: 2);
                break;
                case 3: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "Número de Pontos Turísticos");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %.2f\n", "Área", areaDoPais1);
                    printf("Atributo %s tem valor = %d\n", "Numero de pontos turisticos", numeroDePontosTuristicosDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %.2f\n", "Área", areaDoPais2);
                    printf("Atributo %s tem valor = %d\n", "Numero de pontos turisticos", numeroDePontosTuristicosDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = areaDoPais1 + (float)numeroDePontosTuristicosDoPais1;
                    somaAtributoCarta2 = areaDoPais1 + (float)numeroDePontosTuristicosDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "Área", (areaDoPais1 > areaDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "Numero de pontos turisticos", (numeroDePontosTuristicosDoPais1 > numeroDePontosTuristicosDoPais2) ? 1: 2);
                break;
                case 4: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "Densidade demográfica");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %.2f\n", "Área", areaDoPais1);
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %.2f\n", "Área", areaDoPais2);
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = areaDoPais1 + densidadeDemograficaDoPais1;
                    somaAtributoCarta2 = areaDoPais1 + densidadeDemograficaDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "Área", (areaDoPais1 > areaDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "Densidade demográfica", (densidadeDemograficaDoPais1 > densidadeDemograficaDoPais2) ? 2: 1);
                break;
                default:
                    printf("Opção invalida, tente novamente.\nFinalizando....\n");
                    return 0;
            }
        break;
        case 3: 
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - Número de Pontos Turísticos\n");
            printf("4 - Densidade demográfica\n");
            scanf("%d", &opcao2); // Le a opção do usuario e armaze em opcao

            printf("Pais 1 - %s\n", nomeDoPais1); // Exibir o nome do pais 1
            printf("Pais 2 - %s\n", nomeDoPais2); // Exibir o nome do pais 2

            printf("Atributo 1 escolhido para comparacao foi: %s\n","PIB");
            switch(opcao2){
                case 1: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "População");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %.2f\n", "PIB", pibDoPais1);
                    printf("Atributo %s tem valor = %d\n", "População", populacaoDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %.2f\n", "PIB", pibDoPais2);
                    printf("Atributo %s tem valor = %d\n", "População", populacaoDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = pibDoPais1 + populacaoDoPais1;
                    somaAtributoCarta2 = pibDoPais2 + populacaoDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "PIB", (pibDoPais1 > pibDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "População", (populacaoDoPais1 > populacaoDoPais2) ? 1: 2);
                break;
                case 2: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "Área");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %.2f\n", "PIB", pibDoPais1);
                    printf("Atributo %s tem valor = %.2f\n", "Área", areaDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %.2f\n", "PIB", pibDoPais2);
                    printf("Atributo %s tem valor = %.2f\n", "Área", areaDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = pibDoPais1 + areaDoPais1;
                    somaAtributoCarta2 = pibDoPais2 + areaDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "PIB", (pibDoPais1 > pibDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "Área", (areaDoPais1 > areaDoPais2) ? 1: 2);
                break;
                case 3: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "Número de Pontos Turísticos");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %.2f\n", "PIB", pibDoPais1);
                    printf("Atributo %s tem valor = %d\n", "Número de Pontos Turísticos", numeroDePontosTuristicosDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %.2f\n", "PIB", pibDoPais2);
                    printf("Atributo %s tem valor = %d\n", "Número de Pontos Turísticos", numeroDePontosTuristicosDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = pibDoPais1 + (float)numeroDePontosTuristicosDoPais1;
                    somaAtributoCarta2 = pibDoPais2 + (float)numeroDePontosTuristicosDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "PIB", (pibDoPais1 > pibDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "Número de Pontos Turísticos", (numeroDePontosTuristicosDoPais1 > numeroDePontosTuristicosDoPais2) ? 1: 2);
                break;
                case 4: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "Densidade demográfica");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %.2f\n", "PIB", pibDoPais1);
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %.2f\n", "PIB", pibDoPais2);
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = pibDoPais1 + densidadeDemograficaDoPais1;
                    somaAtributoCarta2 = pibDoPais2 + densidadeDemograficaDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "PIB", (pibDoPais1 > pibDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "Densidade demográfica", (densidadeDemograficaDoPais1 > densidadeDemograficaDoPais2) ? 2: 1);
                break;
                default:
                    printf("Opção invalida, tente novamente.\nFinalizando....\n");
                    return 0;
            }
        break;
        case 4: 
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Densidade demográfica\n");
            scanf("%d", &opcao2); // Le a opção do usuario e armaze em opcao

            printf("Pais 1 - %s\n", nomeDoPais1); // Exibir o nome do pais 1
            printf("Pais 2 - %s\n", nomeDoPais2); // Exibir o nome do pais 2

            printf("Atributo 1 escolhido para comparacao foi: %s\n", "Número de Pontos Turísticos");
            switch(opcao2){
                case 1: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "População");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %d\n", "Número de Pontos Turísticos", numeroDePontosTuristicosDoPais1);
                    printf("Atributo %s tem valor = %d\n", "População", populacaoDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %d\n", "Número de Pontos Turísticos", numeroDePontosTuristicosDoPais2);
                    printf("Atributo %s tem valor = %d\n", "População", populacaoDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = numeroDePontosTuristicosDoPais1 + populacaoDoPais1;
                    somaAtributoCarta2 = numeroDePontosTuristicosDoPais1 + populacaoDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "População", (populacaoDoPais1 > populacaoDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "Número de Pontos Turísticos", (numeroDePontosTuristicosDoPais1 > numeroDePontosTuristicosDoPais2) ? 1: 2);
                break;
                case 2: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "Área");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %d\n", "Número de Pontos Turísticos", numeroDePontosTuristicosDoPais1);
                    printf("Atributo %s tem valor = %.2f\n", "Área", areaDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %d\n", "Número de Pontos Turísticos", numeroDePontosTuristicosDoPais2);
                    printf("Atributo %s tem valor = %.2f\n", "Área", areaDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = (float)numeroDePontosTuristicosDoPais1 + areaDoPais1;
                    somaAtributoCarta2 = (float)numeroDePontosTuristicosDoPais1 + areaDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "Área", (areaDoPais1 > areaDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "Número de Pontos Turísticos", (numeroDePontosTuristicosDoPais1 > numeroDePontosTuristicosDoPais2) ? 1: 2);
                break;
                case 3: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "PIB");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %d\n", "Número de Pontos Turísticos", numeroDePontosTuristicosDoPais1);
                    printf("Atributo %s tem valor = %.2f\n", "PIB", pibDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %d\n", "Número de Pontos Turísticos", numeroDePontosTuristicosDoPais1);
                    printf("Atributo %s tem valor = %.2f\n", "PIB", pibDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = (float)numeroDePontosTuristicosDoPais1 + pibDoPais1;
                    somaAtributoCarta2 = (float)numeroDePontosTuristicosDoPais1 + pibDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "PIB", (pibDoPais1 > pibDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "Número de Pontos Turísticos", (numeroDePontosTuristicosDoPais1 > numeroDePontosTuristicosDoPais2) ? 1: 2);
                break;
                case 4: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "Densidade demográfica");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %d\n", "Número de Pontos Turísticos", numeroDePontosTuristicosDoPais1);
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %d\n", "Número de Pontos Turísticos", numeroDePontosTuristicosDoPais2);
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = (float)numeroDePontosTuristicosDoPais1 + densidadeDemograficaDoPais1;
                    somaAtributoCarta2 = (float)numeroDePontosTuristicosDoPais1 + densidadeDemograficaDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "Número de Pontos Turísticos", (numeroDePontosTuristicosDoPais1 > numeroDePontosTuristicosDoPais2) ? 1: 2);
                    printf("\nNo atributo %s a carta %d venceu\n", "Densidade demográfica", (densidadeDemograficaDoPais1 > densidadeDemograficaDoPais2) ? 2: 1);
                break;
                default:
                    printf("Opção invalida, tente novamente.\nFinalizando....\n");
                    return 0;
            }
        break;
        case 5: 
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de Pontos Turísticos\n");
            scanf("%d", &opcao2); // Le a opção do usuario e armaze em opcao

            printf("Pais 1 - %s\n", nomeDoPais1); // Exibir o nome do pais 1
            printf("Pais 2 - %s\n", nomeDoPais2); // Exibir o nome do pais 2

            printf("Atributo 1 escolhido para comparacao foi: %s\n", "Densidade demográfica");
            switch(opcao2){
                case 1: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "População");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais1);
                    printf("Atributo %s tem valor = %d\n", "População", populacaoDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais2);
                    printf("Atributo %s tem valor = %d\n", "População", populacaoDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = (float)numeroDePontosTuristicosDoPais1 + densidadeDemograficaDoPais1;
                    somaAtributoCarta2 = (float)numeroDePontosTuristicosDoPais1 + densidadeDemograficaDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "Densidade demográfica", (densidadeDemograficaDoPais1 > densidadeDemograficaDoPais2) ? 2: 1);
                    printf("\nNo atributo %s a carta %d venceu\n", "População", (populacaoDoPais1 > populacaoDoPais2) ? 1: 2);
                break;
                case 2: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "Área");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais1);
                    printf("Atributo %s tem valor = %.2f\n", "Área", areaDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais2);
                    printf("Atributo %s tem valor = %.2f\n", "Área", areaDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = (float)numeroDePontosTuristicosDoPais1 + areaDoPais1;
                    somaAtributoCarta2 = (float)numeroDePontosTuristicosDoPais1 + areaDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "Densidade demográfica", (densidadeDemograficaDoPais1 > densidadeDemograficaDoPais2) ? 2: 1);
                    printf("\nNo atributo %s a carta %d venceu\n", "Área", (areaDoPais1 > areaDoPais2) ? 1: 2);
                break;
                case 3: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "PIB");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais1);
                    printf("Atributo %s tem valor = %.2f\n", "PIB", pibDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais2);
                    printf("Atributo %s tem valor = %.2f\n", "PIB", pibDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = (float)numeroDePontosTuristicosDoPais1 + pibDoPais1;
                    somaAtributoCarta2 = (float)numeroDePontosTuristicosDoPais1 + pibDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "Densidade demográfica", (densidadeDemograficaDoPais1 > densidadeDemograficaDoPais2) ? 2: 1);
                    printf("\nNo atributo %s a carta %d venceu\n", "PIB", (pibDoPais1 > pibDoPais2) ? 1: 2);
                break;
                case 4: 
                    printf("Atributo 2 escolhido para comparacao foi: %s\n", "Número de Pontos Turísticos");
                    printf("\nValores dos atributos da carta 1\n");
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais1);
                    printf("Atributo %s tem valor = %.2f\n", "Número de Pontos Turísticos", numeroDePontosTuristicosDoPais1);
                    printf("\nValores dos atributos da carta 2\n");
                    printf("Atributo %s tem valor = %.2f\n", "Densidade demográfica", densidadeDemograficaDoPais2);
                    printf("Atributo %s tem valor = %.2f\n", "Número de Pontos Turísticos", numeroDePontosTuristicosDoPais2);

                    // Soma dos atributos
                    somaAtributoCarta1 = densidadeDemograficaDoPais1 + (float)numeroDePontosTuristicosDoPais1;
                    somaAtributoCarta2 = densidadeDemograficaDoPais2 + (float)numeroDePontosTuristicosDoPais2;

                    // Exibe o atributo vencedor
                    printf("\nNo atributo %s a carta %d venceu\n", "Densidade demográfica", (densidadeDemograficaDoPais1 > densidadeDemograficaDoPais2) ? 2: 1);
                    printf("\nNo atributo %s a carta %d venceu\n", "Número de Pontos Turísticos", (numeroDePontosTuristicosDoPais1 > numeroDePontosTuristicosDoPais2) ? 1: 2);
                break;
                default:
                    printf("Opção invalida, tente novamente.\nFinalizando....\n");
                    return 0;
            }
        break;
        default:
            printf("Opção invalida, tente novamente.\nFinalizando....\n");
            return 0;
    }

    if(somaAtributoCarta1 > somaAtributoCarta2){
        printf("\nA carta vencedora foi a carta %d do %s\n", 1, nomeDoPais1);
    }else if(somaAtributoCarta1 < somaAtributoCarta2){
        printf("\nA carta vencedora foi a carta %d do %s\n", 2, nomeDoPais2);
    }else{
        printf("Empatou!!!");
    }
    }

   return 0;
}
