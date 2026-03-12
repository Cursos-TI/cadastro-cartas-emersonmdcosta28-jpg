#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 #include <stdio.h>

int main() {
   
    /////// CARTA 1 ///////

    // ==============================
    // 1. DECLARAÇÃO DAS VARIÁVEIS
    // ==============================

    char estado;
    char codigo[10];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;


    // ==============================
    // 2. COLETA DE DADOS
    // ==============================
    
    printf("\nCARTA 1:\n");
    printf("Digite o estado (uma letra de A-H): ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);


    // ==============================
    // 3. EXIBIÇÃO DOS DADOS
    // ==============================

    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);


     /////// CARTA 2 ////////


    // ==============================
    // 1. DECLARAÇÃO DAS VARIÁVEIS
    // ==============================

    char estado2;
    char codigo2[10];
    char nomedaCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ==============================
    // 2. COLETA DE DADOS
    // ==============================
    
    printf("\nCARTA 2:\n");
    printf("Digite o estado (uma letra de A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da ciadade: ");
    scanf("%s", &nomedaCidade2);
    
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);   

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos Turisticos da cidade: ");
    scanf("%d", &pontosTuristicos2);


    // ==============================
    // 3. EXIBIÇÃO DOS DADOS
    // ==============================


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomedaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}

return 0;
} 
