#include <stdio.h>

int main() {

     // ==============================
    // 1. DECLARAÇÃO DAS VARIÁVEIS
    // ==============================

    // CARTA 1
    char estado[3], codigo[10], nomeCidade[50];
    unsigned long int populacao;
    float area, pib, densidadePopulacional, pibPerCapita;
    int pontosTuristicos;

    // CARTA 2
    char estado2[3], codigo2[10], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;
    int pontosTuristicos2;

    int opcao; // Variável para o Menu de escolha

    // ==============================
    // 2. COLETA DE DADOS - CARTA 1
    // ==============================
    
    printf("\n--- CADASTRO DA CARTA 1 ---\n");
    printf("Digite a sigla do estado: ");
    scanf(" %2s", estado);

    printf("Digite o codigo da carta: ");
    scanf("%9s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade); // %[^\n] permite ler nomes com espaços

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);
    
    // Cálculos Carta 1
    densidadePopulacional = (float)populacao / area;
    pibPerCapita = (pib * 1000000000) / (float)populacao;

    // ==============================
    // 3. COLETA DE DADOS - CARTA 2
    // ==============================
    
    printf("\n--- CADASTRO DA CARTA 2 ---\n");
    printf("Digite a sigla do estado: ");
    scanf(" %2s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%9s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);   

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // ==========================================
    // 4. MENU INTERATIVO DE COMPARAÇÃO
    // ==========================================

    printf("\n====================================\n");
    printf("        SUPER TRUNFO - MENU\n");
    printf("\n====================================\n");
    printf("Escolha o atributo para comparar");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB Per Capita\n");
    printf("6. Pontos Turísticos");
    printf("Opção\n");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");

    // ==========================================
    // 5. LÓGICA DE DECISÃO COM SWITCH E IF-ELSE
    // ==========================================

   switch (opcao)
   {
   case 1:
        printf("Atributo Escolhido: População\n");
        printf("%s: %lu habitantes\n", nomeCidade, populacao);
        printf("%s: %lu habitantes\n", nomeCidade2, populacao2);

        if (populacao > populacao2) {
            printf("Vencedor: %s (Carta 1)\n", nomeCidade);
        } else if (populacao2 > populacao) {
            printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
        } else {
            printf("Resultado: Empate\n");
        }
           
           
    break;

    case 2:
        printf("Atributo Escolhido: Àrea\n");
        printf("%s: %.2f Km²\n", nomeCidade, area);
        printf("%s: %.2f Km²\n", nomeCidade2, area2);

        if (area > area2) {
            printf("Vencedor: %s (Carta 1)\n", nomeCidade);
        } else if (area2 > area) {
            printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
        } else {
            printf("Resultado: Empate\n");
        }
        
        
    break;

    case 3:
        printf("Atributo Escolhido: PIB\n");
        printf("%s: R$%.2f Bilhões\n", nomeCidade, pib);
        printf("%s: R$%.2f Bilhões\n", nomeCidade2, pib2);

        if (pib > pib2) {
            printf("Vencedor: %s (Carta 1)\n", nomeCidade);
        } else if (pib2 > pib) {
            printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
        } else {
            printf("Resultado: Empate\n");
        }
           
    break;

    case 4:
        printf("Atributo Escolhido: Densidade Populacional\n");
        printf("%s: %lu ha/km²\n", nomeCidade, densidadePopulacional);
        printf("%s: %lu ha/km²\n", nomeCidade2, densidadePopulacional2);

        if (densidadePopulacional > densidadePopulacional2) {
            printf("Vencedor: %s (Carta 1)\n", nomeCidade);
        } else if (densidadePopulacional2 > densidadePopulacional) {
            printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
        } else {
            printf("Resultado: Empate\n");
        }
           
    break;

    case 5:
        printf("Atributo Escolhido: PIB Per Capita\n");
        printf("%s: R$%.2f", nomeCidade, pibPerCapita);
        printf("%s: R$%.2f \n", nomeCidade2, pibPerCapita2);

        if (pibPerCapita > pibPerCapita2) {
            printf("Vencedor: %s (Carta 1)\n", nomeCidade);
        } else if (pibPerCapita2 > pibPerCapita) {
            printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
        } else {
            printf("Resultado: Empate\n");
        }
           
    break;

    case 6:
        printf("Atributo Escolhido: Pontos Tutísticos\n");
        printf("%s: %d", nomeCidade, pontosTuristicos);
        printf("%s: %d", nomeCidade2, pontosTuristicos2);

        if (pontosTuristicos > pontosTuristicos2) {
            printf("Vencedor: %s (Carta 1)\n", nomeCidade);
        } else if (pontosTuristicos2 > pontosTuristicos) {
            printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
        } else {
            printf("Resultado: Empate\n");
        }

   default:
    printf("Opção invalida\n");
    break;
   }


}
