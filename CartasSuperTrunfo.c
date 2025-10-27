#include <stdio.h>

int main() {
  // Declaração das variáveis da carta 1
  char estado1[3];
  char codigo1[10];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;

  // Declaração das variáveis da carta 2
  char estado2[3];
  char codigo2[10];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;

  // Entrada de dados - carta 1
  printf("\n=== Cadastro da Carta 1 ===\n");
  printf("Estado (ex: SP): ");
  scanf("%2s", estado1);

  printf("Código da carta (ex: A01): ");
  scanf("%9s", codigo1);

  printf("Nome da cidade: ");
  scanf("%49s", cidade1);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área em Km²: ");
  scanf("%f", &area1);

  printf("PIB (em bilhões): ");
  scanf("%f", &pib1);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos1);

  // Entrada de dados - carta 2
  printf("\n=== Cadastro da Carta 2 ===\n");
  printf("Estado (ex: RJ): ");
  scanf("%2s", estado2);

  printf("Código da carta (ex: B02): ");
  scanf("%9s", codigo2);

  printf("Nome da cidade: ");
  scanf("%49s", cidade2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área em Km²: ");
  scanf("%f", &area2);

  printf("PIB (em bilhões): ");
  scanf("%f", &pib2);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // Saída formatada - exibe os dados das duas cartas
  printf("\n=== Carta 1 ===\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões\n", pib1);
  printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

  printf("\n=== Carta 2 ===\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões\n", pib2);
  printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

  return 0;
}