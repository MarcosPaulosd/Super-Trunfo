#include <stdio.h> 

int main() {
    // Declarando as variáveis para a Carta 1
    char estado1;
    char codigoCarta1[5]; 
    char nomeCidade1[50]; 
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Solicitando ao usuário os dados da primeira carta.
    printf("Por Gentileza, Insira os dados da primeira carta\n");
    

    printf("Estado entre (A e H): ");
    scanf(" %c", &estado1); 

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Declarando as variáveis para a Carta 2 ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Solicitação ao usuario os dados da Segunda carta.
    printf("\n Por Gentileza, insira os dados da Segunda Carta\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Visualizando os dados da Carta 1
    printf("\n--- Informacoes da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1); 
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Visualizando os dados da Carta 2
    printf("\n--- Informacoes da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0; 
}