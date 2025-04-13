#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("### SUPER TRUNFO ###");

int jogador, computador, resultado, valor1, valor2, comp1, comp2, opcao, carta;
srand(time(0));

    char estado1;
    char estado2;
    char codigo1[10] = "A01";
    char codigo2[10] = "B01";
    char cidade1[20] = "Amsterdã";
    char cidade2[20] = "Berlim";
    unsigned int populacao1 = 1400;
    unsigned int populacao2 = 8328;
    float area1 = 41528;
    float area2 = 357021;
    float PIB1 = 1154;
    float PIB2 = 4526;
    int pontos1 = 15;
    int pontos2 = 15;
    unsigned int densidade1 = 46320.00;
    unsigned int densidade2 = 23326.35;
    unsigned int densidadeP1 = 0.15;
    unsigned int densidadeP2 = 1.84;
    unsigned int poder1 = 311513;
    unsigned int poder2 = 4798496;

    printf("### Menú Inicial ###\n");
    printf("1. Iniciar Jogo     2. Regras do Jogo     3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao)
    {
    case 1:        

        break;    
    case 2:
        printf("###As regras do jogo! ###\n");
        printf("O jogo consiste em batalha de cartas, onde os atributos de cada carta serão comparadas.\n");
        printf("Ex; Holanda & Alemanha, ambas as cartas escolhidas terão a oportunidade de comparar seus atributos.\n");
        printf("Densidade Populacional x P.I.B Percapta = Vence a que tiver o maior valor.\n");
        printf("O Jogador além de escolher a carta, também escolherá o atributo a ser usado para batalhar.\n");
        printf("E que vença o melhor atributo!\n");
        printf("Vamos retornar ao Jogo: \n");
        scanf("%d", &opcao);
        break;
    case 3:
        printf("Vamos retornar ao Jogo: ");
        scanf("%d", &opcao);
        break;
        default:
        printf("Código Inexistente!");
        return 0;
        break;

    }
    switch (opcao)
    {
    case 1:
        printf("Carregando jogo...\n");
        break;
    case 2:
        printf("You Lose!\n");
        return 0;
        break;
    
        default:
        printf("Código Inexistente!");
        return 0;
        break;
    }

    printf("1. Holanda     2. Alemanha\n");
    printf("Escolha sua carta: ");
    scanf("%d", &carta);
    printf("\n");

    switch (carta)
    {
    case 1:
        printf("### Holanda ###\n");
        break;
    case 2:
        printf("### Alemanha ###\n");
        break;
    default:
        printf("Código Inexistente!");
        return 0;
        break;
    }

    printf("Atributo 1: ");
    scanf("%d", &valor1);
    printf("Atributo 2: ");
    scanf("%d", &valor2);
    printf("\n");

    switch (valor1)
    {
        case 1:
        printf("Jogador: População / ");
        break;
    case 2:
        printf("Jogador: Área / ");
        break;
    case 3:
        printf("Jogador: P.I.B / ");
        break;
    case 4:
        printf("Jogador: Pontos Turisticos / ");
        break;
    case 5:
        printf("Jogador: Densidade Populacional / ");
        break;
    case 6:
        printf("Jogador: Densidade Percapta / ");
        break;
    case 7:
        printf("Jogador: Poder / ");
        break;
    default:
        printf("Código Inexistente! \n");
        return 0;
        break;
    } switch (valor2){
        case 1:
            printf("População \n ");
            break;
        case 2:
            printf("Área \n ");
            break;
        case 3:
            printf("P.I.B \n ");
            break;
        case 4:
            printf("Pontos Turisticos \n ");
            break;
        case 5:
            printf("Densidade Populacional \n ");
            break;
        case 6:
            printf("Densidade Percapta \n ");
            break;
        case 7:
            printf("Poder \n ");
            break;
        default:
            printf("Código Inexistente! \n");
            return 0;

            break;
        }
        
        comp1 = rand() % 7 + 1;
        comp2 = rand() % 6 + 1;

            printf("\n");
    switch (comp1) {
        case 1:
            printf("Computador:1 População / ");
            break;
        case 2:
            printf("Computador: Área / ");
            break;
        case 3:
            printf("Computador: P.I.B / ");
            break;
        case 4:
            printf("Computador: Pontos Turisticos / ");
            break;
        case 5:
            printf("Computador: Densidade Populacional / ");
            break;
        case 6:
            printf("Computador: Densidade Percapta / ");
            break;
        case 7:
            printf("Computador: Poder / ");
            break;
        }
        switch (comp2){
        case 1:
            printf("População\n");
            break;
        case 2:
            printf("Área\n");
            break;
        case 3:
            printf("P.I.B\n");
            break;
        case 4:
            printf("Pontos Turisticos\n");
            break;
        case 5:
            printf("Densidade Populacional\n");
            break;
        case 6:
            printf("Densidade Percapta\n");
            break;
        case 7:
            printf("Poder\n");
            break;
        }

        printf("\n");

        //Área de comparação dos valores das cartas.
        printf("Comparação das cartas: \n");
        printf("\n");
        printf("População: %u\n", populacao1 > populacao2);
        printf("Área: %d\n", area1 > area2);
        printf("P.I.B: %d\n", PIB1 > PIB2);
        printf("Pontos Turisticos: %d\n", pontos1 > pontos2);
        printf("Densidade Populacional: %d\n", densidade1 > densidade2);
        printf("Densidade Percapta: %d\n", densidadeP1 > densidadeP2);
        printf("Super Poder: %d\n", poder1 > poder2);

        printf("\n");
    float media;

    
    if (jogador == computador)
    {
        printf(" ### DROWNGAMER ###\n");

    } else if ((populacao1 >= populacao2) && (populacao1 == populacao2) ||
    (area1 >= area2) && (area1 >= area2) || (PIB1 == PIB2) &&
                (PIB1 >= PIB2) || (pontos1 >= pontos2) && (pontos1 == pontos2) ||
            (densidade1 >= densidade2) && (densidade1 == densidade2) || 
            (poder1 >= poder2) && (poder1 == poder2)||
             (densidadeP1 == densidadeP2) && (densidadeP1 >= densidadeP2)){
             media = (populacao1 + area1 + PIB1 + pontos1 + densidade1 + poder1 + densidadeP1)  / 10000;
             
             printf("Total em poder é: %.2f\n", media);
             
        printf("Jogador: venceu! \n");
    } else {
        printf("Computador: Venceu! \n");
    }
    
    //Aqui mostrará quem venceu a partida.

    printf("\n");

    


 return 0;
}