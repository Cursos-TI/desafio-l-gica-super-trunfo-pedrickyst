#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Nome do jogo que Será impresso
int main(){
    printf("### SUPER TRUNFO ### \n");
    printf("\n");

int jogador, computador, resultado, valor1, valor2, comp1, comp2, opcao, carta;
float media, media1, media2;

srand(time(0));

    //informações dos atributos das cartas
    char pais1[20] = "Alemanha", pais2[20] = "Africa";
    char codigo1[10] = "A01", codigo2[10] = "B01";
    char cidade1[20] = "Berlim", cidade2[20] = "Cidade do Cabo";
    unsigned int populacao1 = 3.5, populacao2 = 4.0;
    float area1 = 891.8, area2 = 2446;
    float PIB1 = 163.000, PIB2 = 9190;
    int pontos1 = 15, pontos2 = 15;
    unsigned int densidade1 = 4.15, densidade2 = 1.64;
    unsigned int densidadeP1 = 2.27, densidadeP2 = 0.44;

        //Menú inicial
    printf("### Menú Inicial ### \n");
    printf("1. Iniciar Jogo     2. Regras do Jogo     3. Sair\n");
    printf("\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("\n");

    /*Local onde o Jogador será direcionado a depender de sua escolha.
    no case 1 Ele será direcionado ao campo de escolha das cartas.
    no case 2, Ele receberá as instruções de como é o funcionamento do jogo e lá ele terá as opções de continuar o jogo ou sair.
    no case 3, ele antes de sair receberá uma opçãop de retornar ou não ao jogo.
    */
    switch (opcao)
    {
    case 1:        

        break;    
    case 2:
        printf("###As regras do jogo! ###\n");
        printf("\n");
        printf("O jogo consiste em batalha de cartas, onde os atributos de cada carta serão comparadas.\n");
        printf("Ex; África & Alemanha, ambas as cartas escolhidas terão a oportunidade de comparar seus atributos.\n");
        printf("Densidade Populacional x P.I.B Percapta = Vence a que tiver o maior valor.\n");
        printf("O Jogador além de escolher a carta, também escolherá o atributo a ser usado para batalhar.\n");
        printf("E que vença o melhor atributo!\n");
        printf("\n");
        printf("Vamos retornar ao Jogo, sim[1] não[2]: ");
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
    /*Esta opção foi acrescentada
    caso o jogador escolha a opção 2 ou 3 ele tenha a opção de sair definitivamente do jogo ou retornar ao jogo.
    */
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

    //escolha da carta.
    printf("\n");
    printf("1. Alemanha     2. Africa\n");
    printf("Escolha sua carta: ");
    scanf("%d", &carta);
    printf("\n");

    /*Após o jogador selecionar a carta desejada,
    aparecerá para ele as informações da carta selecionada
    para que ele possa escolher os atributos da carta desejada.
    */
    switch (carta)
    {
    case 1:
        printf("### Alemanha ###\n");
        printf("\n");
        printf("Atributos!");
        printf("\n");
        printf("1. População: 3,5 Milhões \n");
        printf("2. Área: 891,8Km²\n");
        printf("3. P.I.B: 163 Milhões\n");
        printf("4. Pontos Turisticos: 15\n");
        printf("5. Densidade Populacional: 4.15\n");
        printf("6. Densidade Percapta: 2.27\n");
        break;
    case 2:
        printf("### Africa ###\n");
        printf("\n");
        printf("Atributos!");
        printf("\n");
        printf("1. População: 4 Milhões\n");
        printf("2. Área: 2.446Km²\n");
        printf("3. P.I.B: 9.190 Milhões\n");
        printf("4. Pontos Turisticos: 15\n");
        printf("5. Densidade Populacional: 1.64\n");
        printf("6. Densidade Percapta: 0.44\n");
        break;
    default:
        printf("Código Inexistente!");
        return 0;
        break;
    }

        //Área reservada para as escolhas dos atributos.
    printf("\n");
    printf("### Escolha dos Atributos ###\n");
    printf("\n");
    printf("Atributo: ");
    scanf("%d", &valor1);
    printf("Atributo: ");
    scanf("%d", &valor2);
    printf("\n");
 
    //Informações a serem impressas dependendo da escolha do Jogador.
    printf("### Comparação dos Atributos! ###\n");
    switch (valor1){
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
        default:
            printf("Código Inexistente! /");
            return 0;

            break;
        }switch (valor2){
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
            default:
                printf("Código Inexistente! \n");
                return 0;
    
                break;
            }
        //área de decisão do Computador.
        comp1 = rand() % 6 + 1;
        comp2 = rand() % 6 + 1;
        

        //Informações a serem impressas dependendo da escolha do Computador.
    switch (comp1){
        case 1:
            printf("Computador: População / ");
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
        }switch (comp2){
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
            }

        printf("\n");

        //Área de informações que aparecerá apos a batalha, para que o jogador compare.
        printf("### Informações das Cartas ###\n");
        printf("\n");

        printf("### Alemanha ###\n");
        printf("\n");
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("P.I.B: %.2f\n", PIB1);
        printf("Pontos Turisticos: %d\n", pontos1);
        printf("Densidade Demografica: %u\n", densidade1);
        printf("Densidade Percapta: %d\n", densidadeP1);
        printf("\n");

        printf("### Africa ###\n");
        printf("\n");
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("P.I.B: %.2f\n", PIB2);
        printf("Pontos Turisticos: %d\n", pontos2);
        printf("Densidade Demografica: %u\n", densidade2);
        printf("Densidade Percapta: %d\n", densidadeP2);

        printf("\n");

            //A soma de todos os atributos das cartas.
        media1 = (populacao1 + area1 + PIB1 + pontos1 + densidade1 + densidadeP1);
        printf("Atributos Jogador: %.2f\n", media1); 
        media2 = (populacao2 + area2 + PIB2 + pontos2 + densidade2 + densidadeP2);
        printf("Atributos Computador: %.2f\n", media2);
        printf("\n");
       
        /* Comparação dos atributos.
        Impressões a serem mostradas a depender do resultado.
        DRAWNGAMER em caso de EMPATE
        Jogador Venceu! Caso os atributos do mesmo forem maior que os do Computador.
        Comptador venceu! Caso os atributos do mesmo forem maior que os do Jogador.
        */
    if ((valor1 + valor2) == (comp1 + comp2))
    {
        printf(" ### DROWNGAMER ###\n");

    } else if ((populacao1 > populacao2) || (area1 > area2) || (PIB1 > PIB2) ||
            (pontos1 > pontos2) || (densidade1 > densidade2) || (densidadeP1 > densidadeP2)){


             printf("\n");
             
        printf("Jogador: venceu! \n");
    } else {
        printf("Computador: Venceu! \n");
    }
            
        //Ao termino da batalha o programa irá imprimir o vencedor e finalizar a Emulação do Jogo.
    return 0;
}