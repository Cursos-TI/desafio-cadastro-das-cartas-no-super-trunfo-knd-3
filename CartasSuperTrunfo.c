#include <stdio.h>

int main() {
    int populacao, p_turisticos;
    char codigo[5], estado[10], cidade[50];
    float area, pib, densidade1, densidade2, pib_percapita1, pib_percapita2;

    // INICIO PRIMEIRA CARTA
    //PERGUNTAS PRIMEIRA CARTA

    printf("** Para a Primeira Carta **\nEscolha e digite uma letra de A a H:\n");
    scanf ("%s", &estado);

    printf("Escolha e digite um numero de 1 a 4: \n");
    scanf ("%s", &codigo);

    printf("Qual sera o nome dessa cidade? \n");
    scanf ("%s", &cidade);

    printf("Quantos habitantes tem nessa cidade? \n");
    scanf ("%d", &populacao);

    printf("Qual o tamanho da area total dessa cidade? (em km²) \n");
    scanf ("%f", &area);
    
    printf("Digite o PIB da cidade: \n");
    scanf ("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf ("%d", &p_turisticos);

    //CALCULO DENSIDADE POPULACIONAL E PIB PER CAPITA CARTA 01
    densidade1 = (float) populacao / area;
    pib_percapita1 = (float) pib / populacao;

    //IMPRESSÃO RESPOSTAS PRIMEIRA CARTA
    printf("\nCARTA 01\n");
    printf("Estado: %s\nCodigo: %s0%s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado, estado, codigo, cidade, populacao, area, pib, p_turisticos);
    printf("Densidade populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", densidade1, pib_percapita1);
    
    //INICIO DA SEGUNDA CARTA

    //PERGUNTAS SEGUNDA CARTA
     printf("\n** Vamos para a Segunda Carta **\nEscolha novamente e digite uma letra de A a H: \n");
    scanf ("%s", &estado);

    printf("Agora um numero de 1 a 4: \n");
    scanf ("%s", &codigo);

    printf("Qual sera o nome da segunda cidade? \n");
    scanf ("%s", &cidade);

    printf("Quantos habitantes tem nessa cidade? \n");
    scanf ("%d", &populacao);

    printf("Qual o tamanho da area total dessa cidade? (em km²) \n");
    scanf ("%f", &area);
    
    printf("Digite o PIB da cidade: \n");
    scanf ("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf ("%d", &p_turisticos);

    //CALCULO DENSIDADE POPULACIONAL E PIB PER CAPITA CARTA 02
    densidade2 = (float) populacao / area;
    pib_percapita2 = (float) pib / populacao;

    //IMPRESSÃO RESPOSTAS SEGUNDA CARTA
    printf("\nCARTA 02\n"); 
    printf("Estado: %s\nCodigo: %s0%s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado, estado, codigo, cidade, populacao, area, pib, p_turisticos);
    printf("Densidade populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", densidade2, pib_percapita2);

    return 0;
}
