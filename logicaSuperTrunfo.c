#include<stdio.h>

int main(){

    int jogador;

    //informações das cartas
    char país1[20] = "Alemanha", país2[20] = "Africa";
    char codigo1[10] = "A01", codigo2[10] = "B01";
    char cidade1[20] = "Berlim", cidade2[20] = "Cidade do Cabo";
    unsigned int populacao1 = 3700000000, populacao2 = 4000000000;
    float area1 = 89180000, area2 = 2.446;
    float PIB1 = 1630000000, PIB2 = 9190000000;
    int pontos1 = 15, pontos2 = 15;
    unsigned int densidade1 = 10852.412, densidade2 = 40119.518;
    unsigned int densidadeP1 = 21834.641, densidadeP2 = 81966.057;

    //Local onde os atributos de densidades são calculados.
    printf("Calculando as Densidades...\n");
    printf("\n");
    printf("Densidade Populacional: %.2f\n", populacao1 / area1);
    printf("Densidade Percapita: %.2f\n", populacao1 / PIB1);
    printf("\n");

    //Informações dos atributos a serem comparados.
    printf("Comparando os Atributos! \n");
    printf("\n");
    printf("### População ###\n");
    printf("\n");
    printf("Berlim, População: 3,7 Milhões \n");
    printf("Cidade do Cabo, População: 4 Milhões \n");
    printf("\n");
   
    //Comparação e revelação dos atributos que estãos endo comparados.
    if (populacao1 == populacao2)
    {
        printf("Empate!\n");
    } else if (populacao1 > populacao2)
    {
        printf("Alemanha, venceu! \n");
    } else {
        printf("Africa, venceu! \n");
    }

    return 0;    


}