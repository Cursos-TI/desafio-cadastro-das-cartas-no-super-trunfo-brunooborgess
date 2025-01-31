#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Bruno

int main(){
    printf ("Super Trunfo - Países");

    char Estado;
    char Codigo[50];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int Pontos;

    
    printf ("Digite o Estado: \n");
    scanf ("%s", &Estado);
    
    printf ("Digite o Codigo da carta: \n");
    scanf ("%d", &Codigo);

    printf ("Digite o nome da cidade; \n");
    scanf ("%s", &Cidade);

    printf ("Digite a População: \n");
    scanf ("%d", &Populacao);

    printf ("Digite a Área em Km²: \n");
    scanf ("%f", &Area);

    printf ("Digite o PIB: \n");
    scanf ("%f", &PIB);

    printf ("Digite o número de Pontos Túristicos: \n");
    scanf ("%d", &Pontos);

    printf ("Estado: %s\n", Estado);

    printf ("Codigo: %d\n", Codigo);

    printf ("Cidade: %s\n", Cidade);

    printf ("Populacao: %d\n", Populacao);

    printf ("Area: %f\n", Area);

    printf ("PIB: %f\n", PIB);

    printf ("Pontos: %d\n", PIB);







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
