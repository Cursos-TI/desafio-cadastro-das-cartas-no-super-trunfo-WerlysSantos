#include <stdio.h>

int main() {
    //declarei as variáveis para cada descrição das duas cartas, por seus respectivos tipos
    char estado1[12], estado2[12], cidade1[22], cidade2[22];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;

    //fiz o questionário com printf e o sancf para receber os dados nas variáveis anteriormente declaradas
    printf("Digite o estado da primeira carta: \n");
    scanf("%10s", &estado1);
    printf("Digite a cidade: \n");
    scanf("%20s", &cidade1);
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite a quatidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    //fiz o prinf que mostra a carta por completo, com os dados que foram digitados pelo usuário
    printf("Carta 1:\n Estado: %s\n Código: A01\n Nome da Cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Número de Pontos Turisticos: %d", estado1, cidade1, populacao1, area1, pib1, pontosTuristicos1);

    //é inciado após apresentação da primeira carta, o questionário da segunda, da mesma forma anterior
    printf("\nDigite o estado da segunda carta: \n");
    scanf("%10s", &estado2);
    printf("Digite a cidade: \n");
    scanf("%20s", &cidade2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite a quatidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //apresentação da segunda carta, igualmente a primeira
    printf("Carta 2:\n Estado: %s\n Código: A02\n Nome da Cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Número de Pontos Turisticos: %d", estado2, cidade2, populacao2, area2, pib2, pontosTuristicos2);

    return 0;
}
