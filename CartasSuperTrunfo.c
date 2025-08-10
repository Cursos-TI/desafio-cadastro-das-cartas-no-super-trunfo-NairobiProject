#include <stdio.h>


int main() {
 
// variáveis carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosturisticos1 = 50;


// variáveis carta 2
    char estado2 = 'B';
    char codigo2[] = "B02";
    char cidade2[] = "Rio de Janeiro";
    int populaçao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; 
    int pontosturisticos2 = 30;

//exibindo carta 1
printf("=== Carta 1 ===\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %ld\n", populacao1);
printf("Área: %.2fkm²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Pontos Turísticos: %d\n", pontosturisticos1);

//exibindo carta 2
printf("=== Carta 2 ===\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %ld\n", pontosturisticos2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f Bilhões de reais\n", pib2);
printf("Pontos Turísticos: %d\n", pontosturisticos2);


    return 0;
}
