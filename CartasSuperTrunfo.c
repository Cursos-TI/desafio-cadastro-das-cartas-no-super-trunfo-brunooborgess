#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Bruno

int main() {
    printf("Super Trunfo - Países\n");

    char Estado;  // Um único caractere para armazenar o estado (A a H)
    char Codigo[5];  // Código da cidade (exemplo: A01, B02)
    char Cidade[50];  // Nome da cidade
    int Populacao;
    float Area;
    float PIB;
    int Pontos;

    // Loop para percorrer os estados de A a H
    for (Estado = 'A'; Estado <= 'H'; Estado++) {
        printf("\nCadastro do Estado %c\n", Estado);

        // Loop para as 4 cidades de cada estado
        for (int i = 0; i < 4; i++) {
            // Solicita o código da cidade
            printf("\nDigite o Código da cidade do estado %c: ", Estado, Estado);
            scanf("%s", Codigo);  // Leitura do código da cidade (como A01, A02...)

            // Verifica se o código é válido
            if (Codigo[0] != Estado) {
                printf("Código inválido! O código deve começar com %c.\n", Estado);
                i--;  // Repetir a solicitação para a mesma cidade
                continue;
            }

            printf("\nCadastro da cidade do estado %c - Código: %s\n", Estado, Codigo);

            // Captura o nome da cidade
            printf("Digite o nome da cidade %s: ", Codigo);
            getchar();  // Limpar o buffer
            fgets(Cidade, sizeof(Cidade), stdin);
            Cidade[strcspn(Cidade, "\n")] = 0;  // Remove o '\n' da string

            // Captura a População
            printf("Digite a População da cidade %s: ", Codigo);
            scanf("%d", &Populacao);

            // Captura a Área em Km²
            printf("Digite a Área em Km² da cidade %s: ", Codigo);
            scanf("%f", &Area);

            // Captura o PIB da cidade
            printf("Digite o PIB da cidade %s (em bilhões de Reais): ", Codigo);
            scanf("%f", &PIB);

            // Captura o número de Pontos Turísticos
            printf("Digite o número de Pontos Turísticos da cidade %s: ", Codigo);
            scanf("%d", &Pontos);

            // Exibe os dados da cidade cadastrada
            printf("\n----- Dados da Carta -----\n");
            printf("Estado: %c\n", Estado);
            printf("Código: %s\n", Codigo);
            printf("Cidade: %s\n", Cidade);
            printf("População: %d habitantes\n", Populacao);
            printf("Área: %.2f km²\n", Area);
            printf("PIB: %.2f bilhões de Reais\n", PIB);
            printf("Pontos Turísticos: %d\n", Pontos);
        }
    }

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
