//Criando as Cartas do Super Trunfo
// NIVEL NOVATO
// cadastrar somente 2 cartas
// cadastro de carta 1
// PASSO 1  nesse jogo vou cadastrar o id da carta 1
// passo 2 Nome do Pais pode ser qualquer um pais
// passo 3 responder o nome da cidade
// passo 4 perguntar a população da cidade 
// passo 5 perguntar quantidade de pontos turisticos
// passo 6 perguntar o PIB
///////////////////////////////////////////////////
// PARTE 2 DO DESAFIO
// cadastrar carta 2
// passo 2 Nome do Pais pode ser qualquer um pais
// passo 3 responder o nome da cidade
// passo 4 perguntar a população da cidade 
// passo 5 perguntar quantidade de pontos turisticos
// passo 6 perguntar o PIB

#include <stdio.h>

int main() {
    int i;
    //cadastrar as variaveis
    // Estrutura simples de uma carta (fixo 2 cartas)
    int id[2];
    char nome[2][50];
    char cidade[2][50];
    int populacao[2];
    int pontosTuristicos[2];
    double pib[2];

    for (i = 0; i < 2; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);

        printf("ID da carta: ");
        scanf("%d", &id[i]);

        printf("Nome do país: ");
        scanf(" %[^\n]", nome[i]);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", cidade[i]);

        printf("População da cidade: ");
        scanf("%d", &populacao[i]);

        printf("Quantidade de pontos turísticos: ");
        scanf("%d", &pontosTuristicos[i]);

        printf("PIB (em bilhões): ");
        scanf("%lf", &pib[i]);
    }

    // Mostra as cartas cadastradas
    printf("\n===== CARTAS CADASTRADAS =====\n");
    for (i = 0; i < 2; i++) {
        printf("\nCarta %d\n", i + 1);
        printf("ID: %d\n", id[i]);
        printf("País: %s\n", nome[i]);
        printf("Cidade: %s\n", cidade[i]);
        printf("População: %d habitantes\n", populacao[i]);
        printf("Pontos Turísticos: %d\n", pontosTuristicos[i]);
        printf("PIB: %.2lf bilhões\n", pib[i]);
    }

    return 0;
}







