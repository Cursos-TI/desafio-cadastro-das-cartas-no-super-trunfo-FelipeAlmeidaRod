#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
        
    //Variaveis da primeira carta:
    int carta1 = 1;
    char estado1 = 'A';
    char codigo1[50] = "A01";
    char cidade1[50];
    int populacao1;
    float area1;
    int turistico1;  
    
    //Variaveis da segunda carta:
    int carta2 = 2;
    char estado2 = 'B';
    char codigo2[50] = "B02";
    char cidade2[50];
    int populacao2;
    float area2;
    int turistico2;   

    //Instrução para usuário iniciar o jogo Super Trunfo
    printf("Vamos iniciar o nosso jogo, para começar digite os dados da primeira carta a seguir: \n");

    // Cadastro da primeira carta:    
    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turistico1);   

    //Exibir os dados da primeira carta ao usuário
    printf("Aqui estão os dados da sua primeira carta: \n");

    //Exibição dos Dados da primeira carta:    
    printf("Carta: 1\n", carta1);
    printf("Estado: A\n", estado1);
    printf("Código da carta: A01\n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("A população da cidade é: %d \n", populacao1);
    printf("A área da cidade é: %.3f " "KM²\n", area1);
    printf("Quantidade de pontos turísticos: %d \n", turistico1);

    printf("Agora insira os dados da próxima carta: \n");

    //Cadastro segunda carta:
    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turistico2);  

    //Exibir os dados da primeira carta ao usuário
    printf("Aqui estão os dados da sua primeira carta: \n");

    //Exibição dos Dados da primeira carta:
    printf("Carta: 2\n", carta2);
    printf("Estado: B\n", estado2);
    printf("Código da carta: B02\n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("A população da cidade é: %d \n", populacao2);
    printf("A área da cidade é: %.3f " "KM²\n", area2);
    printf("Quantidade de pontos turísticos: %d \n", turistico2);



    return 0;
}
