#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main () {
  // Carta 1
    char estado1[] = "Paraná";
    char codigo1[] = "A01";
    char nomeCidade1[] = "Curitiba";
    int populacao1 = 1830795;
    float area1 = 432.0f; // km²
    float pib1 = 98.0f;   // bilhões de reais
    int numeroPontosTuristicos1 = 26;
    float densidadepopulacional1 = populacao1/ area1;
    float pibpercapita1 = (pib1 * 1e9) / populacao1;

    // Carta 2
    char estado2[] = "Tocantins";
    char codigo2[] = "B01";
    char nomeCidade2[] = "Palmas";
    int populacao2 = 302692;
    float area2 = 2.219f; // km²
    float pib2 = 32.977f;   // bilhões de reais
    int numeroPontosTuristicos2 = 15;
    float densidadepopulacional2 = populacao2 / area2;
    float pibpercapita2 = ( pib2* 1e9) / populacao2;

    // Impressão Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", numeroPontosTuristicos1);
    printf("Densidade Populacional: %.2f Hab/KM²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f Reais\n", pibpercapita1);

    // Impressão Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
    printf("Densidade Populacional: %.2f Hab/KM²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f Reais\n", pibpercapita2);

    return 0;


}
