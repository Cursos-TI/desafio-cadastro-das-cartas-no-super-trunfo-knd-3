#include <stdio.h>

int main() {
    int populacao, p_turisticos;
    char codigo[5], estado[10], cidade[50];
    float area, pib;

// INICIO PRIMEIRA CARTA
    //PERGUNTAS PRIMEIRA CARTA

    printf("Para a Primeira Carta\nEscolha e digite uma letra de A a H:\n");
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

    //IMPRESSÃO RESPOSTAS PRIMEIRA CARTA
    printf("\nCARTA 01\n");
    printf("Estado: %s\nCodigo: %s0%s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2fkm²\nPIB: %.2f\nNumero de Pontos Turisticos: %d\n", estado, estado, codigo, cidade, populacao, area, pib, p_turisticos);
    
//INICIO DA SEGUNDA CARTA

    //PERGUNTAS SEGUNDA CARTA
    printf("\nVamos para a Segunda Carta.\nEscolha novamente e digite uma letra de A a H: \n");
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

    //IMPRESSÃO RESPOSTAS SEGUNDA CARTA
    printf("\nCARTA 02\n"); 
    printf("Estado: %s\nCodigo: %s0%s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2fkm²\nPIB: %.2f\nNumero de Pontos Turisticos: %d\n", estado, estado, codigo, cidade, populacao, area, pib, p_turisticos);
  
    return 0;
}
