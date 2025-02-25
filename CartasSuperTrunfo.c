#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Bruno

int main() {
    printf("Super Trunfo - Países\n");

    char Estado;
    char Codigo[10];   
    char CidadeA01[50], CidadeB01[50];
    int PopulacaoA01, PopulacaoB01;
    float AreaA01, AreaB01;
    float PIBA01,PIBB01;
    int PontosTuristicosA01, PontosturisticosB01;

    printf("Cadastro de cartas\n");

    printf("Estado A \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", Codigo);

    getchar(); // Limpa o buffer antes de ler a string com espaços

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", CidadeA01); // Corrigido para ler nomes com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &PopulacaoA01);

    printf("Digite a Área da cidade: \n");
    scanf("%f", &AreaA01);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &PIBA01);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicosA01);

    printf("\n----- Dados da Carta -----\n");
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", CidadeA01);
    printf("População: %d habitantes\n", PopulacaoA01);
    printf("Área: %.2f km²\n", AreaA01);
    printf("PIB: %.2f bilhões de Reais\n", PIBA01);
    printf("Pontos Turísticos: %d\n", PontosTuristicosA01);
    printf("Estado B \n");
    printf("Digite o código da cidade: \n");
    scanf("%s", Codigo);

    getchar(); // Limpa o buffer antes de ler a string com espaços

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", CidadeB01); // Corrigido para ler nomes com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &PopulacaoB01);

    printf("Digite a Área da cidade: \n");
    scanf("%f", &AreaB01);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &PIBB01);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &PontosturisticosB01);

    printf("\n----- Dados da Carta -----\n");
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", CidadeB01);
    printf("População: %d habitantes\n", PopulacaoB01);
    printf("Área: %.2f km²\n", AreaB01);
    printf("PIB: %.2f bilhões de Reais\n", PIBB01);
    printf("Pontos Turísticos: %d\n", PontosturisticosB01);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;

    }
