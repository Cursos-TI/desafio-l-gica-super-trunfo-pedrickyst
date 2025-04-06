#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    //Titulo do Jogo.
    printf("*** Super Trunfo *** \n");
    printf("*** Países ***");
    printf("\n");
    
    //informações basicas para o menu!
    int opcao, player1, computador, valor1, valor2;
    srand(time(0));

    //A apresentação do menu inicial do jogo.
    printf("Menu Principal\n");
    printf("1. Iniciar Jogo   2. Regras do Jogo    3. Sair \n");
    printf("\n");
    printf("Escolha uma Opção: ");
    scanf("%d", &opcao);
    printf("\n");
    
    
    switch (opcao)
    {
    case 1:
        break;
    case 2:
    printf("Este jogo consiste em desafiar seus amigos, ultilizando cartas. \n");
    printf("Neste jogo iremos usar inrformações reais de cada País. \n");
    printf("Ex; \n");
    printf("1 = Africa, 2 = Alemanha! \n");
    printf("Deseja continuar com jogo: \n");
    scanf("%d", &opcao);
        break;
    case 3:
        printf("Sair\n");
        printf("Vamos voltar ao jogo: \n");
        scanf("%d", &opcao);
        break;   
        default:
        printf("Código Inexistente!\n");
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
    
    int carta;

    printf("\n");
    printf("Escolha sua carta: ");
    scanf("%d", &carta);
    printf("\n");

    //Lugar reservado para a escolha da carta("Estado!").
    switch (carta)
    {
    case 1:
       printf("África \n");
        break;
    case 2:
        printf("Alemanha \n");
         break;
    
    default:
        break;
    }
    
    

    return 0;
    
}