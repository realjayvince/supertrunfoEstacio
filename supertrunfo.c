#include <stdio.h>


int main(){
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2;
    float perCapita1, perCapita2;
    float superPoder1, superPoder2;


    printf("Preencha os dados da Carta 1 \n");
    printf("Qual é o estado?: ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta 1: ");
    scanf(" %s", &codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]%*c", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos Turisticos: ");
    scanf("%d", &turistico1);

    densidade1 = populacao1 / area1;
    perCapita1 = pib1 / populacao1;

    printf("Preencha os dados da Carta 2 \n");
    printf("Qual é o estado?: ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta 1: ");
    scanf(" %s", &codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]%*c", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos Turisticos: ");
    scanf("%d", &turistico2);

    densidade2 = populacao2 / area2;
    perCapita2 = pib2 / populacao2;

    superPoder1 = populacao1 + area1 + pib1 + turistico1 + perCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + turistico2 + perCapita2 + (1 / densidade2);

    printf("Segue Dados da Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Cidade: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turistico1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB per Capita: %f\n", perCapita1);

    printf("Segue Dados da Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Cidade: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turistico2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per Capita: %f\n", perCapita2);

    printf("Comparação das Cartas \n");
    if (populacao1 > populacao2)
    {
        printf("População: Carta 1 venceu! \n");
    }
    else{
        printf("População: Carta 2 venceu! \n");
    }
    
    if (area1 > area2)
    {
        printf("Area: Carta 1 venceu! \n");
    }
    else{
        printf("Area: Carta 2 venceu! \n");
    }

    if (pib1 > pib2)
    {
        printf("PIB: Carta 1 venceu! \n");
    }
    else{
        printf("PIB: Carta 2 venceu! \n");
    }

    if (turistico1 > turistico2)
    {
        printf("Pontos turisticos: Carta 1 venceu! \n");
    }
    else{
        printf("Pontos turisticos: Carta 2 venceu! \n");
    }

    if (densidade1 > densidade2)
    {
        printf("Densidade Populacional: Carta 1 venceu! \n");
    }
    else{
        printf("Densidade Populacional: Carta 2 venceu! \n");
    }
    
    if (perCapita1 > perCapita2)
    {
        printf("PIB per Capita: Carta 1 venceu! \n");
    }
    else{
        printf("PIB per Capita: Carta 2 venceu! \n");
    }

    if (superPoder1 > superPoder2)
    {
        printf("Super Poder: Carta 1 venceu! \n");
    }
    else{
        printf("Super Poder: Carta 2 venceu! \n");
    }
}
