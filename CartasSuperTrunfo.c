#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Aluno: Felipe

int main() {
        
    // Variaveis da primeira carta:
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turistico1;  
    
    // Variaveis da segunda carta:
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;   

    // INSTRUÇÕES PARA O USUÁRIO INICAR O JOGO SUPER TRUNFO
    printf("Vamos iniciar o nosso jogo, para começar digite os dados da primeira carta a seguir: \n\n\n");

    // CADASTRO DA PRIMEIRA CARTA    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turistico1);  
    printf("\n");

    // EXIBIR DADOS DA PRIMEIRA CARTA AO USUÁRIO
    printf("Aqui estão os dados da sua primeira carta: \n");

    // EXIBIÇÃO DOS DADOS DA PRIMEIRA CARTA    
    printf("Carta: 1\n");
    printf("Estado: A\n");
    printf("Código da carta: A01\n");
    printf("Nome da Cidade: %s \n", cidade1);
    printf("A população da cidade é: %d " "Milhões de habitantes.\n", populacao1);
    printf("A área da cidade é: %.3f " "KM².\n", area1);
    printf("O PIB da cidade é: %.3f " "Bilhões de reais.\n", pib1);
    printf("Quantidade de pontos turísticos: %d \n", turistico1);
    printf("\n");

    // INSTRUÇÕES PARA O USUÁRIO CONTINUAR O CADASTRO DA SEGUNDA CARTA
    printf("Agora insira os dados da próxima carta: \n\n");

    // CADASTRO DA SEGUNDA CARTA
    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turistico2);
    printf("\n");  

    // EXIBIR DADOS DA SEGUNDA CARTA AO USUÁRIO
    printf("Aqui estão os dados da sua segunda carta: \n\n");

    // EXIBIÇÃO DOS DADOS DA SEGUNDA CARTA:
    printf("Carta: 2\n");
    printf("Estado: B\n");
    printf("Código da carta: B02\n");
    printf("Nome da Cidade: %s \n", cidade2);
    printf("A população da cidade é: %d " "Milhões de habitantes.\n", populacao2);
    printf("A área da cidade é: %.3f " "KM².\n", area2);
    printf("O PIB da cidade é: %.3f " "Bilhões de reais.\n", pib2);
    printf("Quantidade de pontos turísticos: %d \n\n\n", turistico2);

    // CALCULANDO DENSIDADE E PIB DAS CARTAS
    float densidadepopulacional1 = populacao1 / area1;
    float densidadepopulacional2 = populacao2 / area2;

    float pibpercapita1 = pib1 / populacao1;
    float pibpercapita2 = pib2 / populacao2;

    // MOSTRANDO AS CARTAS COM DOIS NOVOS PODERES: DENSIDADE POPULACIONAL E PIB PER CAPITA

    printf("Dois novos atributos foram incluidos nas suas cartas, DENSIDADE POPULACIONAL e PIB PER CAPITA: \n\n");

    // MOSTRANDO CARTA 1 ATUALIZADA
    printf("Carta A01 \n");
    printf("Nome da Cidade: %s \n", cidade1);
    printf("A população da cidade é: %d " "Milhões de habitantes.\n", populacao1);
    printf("A área da cidade é: %.3f " "KM².\n", area1);
    printf("O PIB da cidade é: %.3f " "Bilhões de reais.\n", pib1);
    printf("Quantidade de pontos turísticos: %d \n", turistico1);
    printf("Densidade populacional carta: %.2f habitantes por KM².\n", densidadepopulacional1);
    printf("O Pib Per Capita é: %.2f Mil reais por habitande. \n", pibpercapita1);
    printf("\n");

    // MOSTRANDO CARTA 2 ATUALIZADA

    printf("Carta B02 \n");
    printf("Nome da Cidade: %s \n", cidade2);
    printf("A população da cidade é: %d " "Milhões de habitantes.\n", populacao2);
    printf("A área da cidade é: %.3f " "KM².\n", area2);
    printf("O PIB da cidade é: %.3f " "Bilhões de reais.\n", pib2);
    printf("Quantidade de pontos turísticos: %d \n", turistico2);
    printf("Densidade populacional carta: %.2f habitantes por KM²\n", densidadepopulacional2);
    printf("O Pib Per Capita é: %.2f Mil reais por habitande. \n", pibpercapita2);
    printf("\n");

    // REALIZANDO COMPARAÇÃO DE ATRIBUTO E EXIBINDO A CARTA VENCEDORA
    printf("Comparando qual carta é a vencedora utilizando o atributo: População. \n\n");

    printf("Carta A01 - %s: População %d\n", cidade1, populacao1);
    printf("Carta A02 - %s: População %d\n", cidade2, populacao2);
    printf("\n");                                                                          

    if (populacao1 > populacao2){
        printf("A carta A01 (%s) é a vencedora.\n", cidade1);
    } else if (populacao1 < populacao2){
        printf("A carta B02 (%s) é a vencedora.\n", cidade2);
    } else {
        printf("Empate!");
    }

    


    return 0;
}
