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
    int turistico1;  
    
    // Variaveis da segunda carta:
    char cidade2[50];
    int populacao2;
    float area2;
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
    printf("A população da cidade é: %d \n", populacao1);
    printf("A área da cidade é: %.3f " "KM²\n", area1);
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
    printf("A população da cidade é: %d \n", populacao2);
    printf("A área da cidade é: %.3f " "KM²\n", area2);
    printf("Quantidade de pontos turísticos: %d \n", turistico2);



    return 0;
}
