#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void Torre(int movimento) //recursivo para movimentação da torre.
{
    if(movimento > 0)
    {
        printf("Direita\n");

        Torre(movimento - 1);
    }
}

void Bispo(int movimento) //recursivo para movimentação da bispo.
{
    int h, v = 5;

    if(movimento > 0)
    {
        //uso de loop aninhado para movimentação na vertical(loop externo) e na horizontal(loop interno)    
        do
        {
            do
            {
                printf("Direita\t");
            } while (h == v);
            
            printf("Cima\n");
        } while (h == movimento);
        
        //decrementos conforme avanço de casa.
        h--;
        v--;

        Bispo (movimento - 1);

    }
    
}

void Rainha(int movimento) //recursivo para movimento da Rainha
{
    if(movimento > 0)
    {
        printf("Esquerda\n");

        Rainha(movimento - 1);
    }
}

void Cavalo(int movimento) //recursivo para movimento do cavalo
{
     //uso de condição com uso de break quebra de loop.
    
    while(movimento > 0)
    {
        printf("Cima\n");

        if(movimento == 2)
        {
            printf("Direita\n");
            break;
        }

        movimento--; //decremento conforme avanço de casa.
    }  
    
}

int main() {

    //declaração de variáveis.
    char menu;
    
    printf("*** XADREZ *** \n\n");

    printf("T. Torre\n");
    printf("B. Bispo\n");
    printf("R. Rainha\n");
    printf("C. Cavalo\n\n");

    printf("Escolha a peça para mover: "); //menu para o jogador escolher qual peça mover.
    scanf("%c", &menu);

    switch(menu)
    {
        case 'T':
        case 't':
            printf("Você escolheu a Torre: \n");
            Torre(5); //chama a função torre e determina quantidade de casas que pode andar.
            break;
        case 'B':
        case 'b':
            printf("Você escolheu o Bispo: \n");
            Bispo(5); //chama a função bispo e determina quantidade de casas que pode andar.
            break;
        case 'R':
        case 'r':
            printf("Você escolheu a Rainha: \n");
            Rainha(8); //chama a função rainha e determina quantidade de casas que pode andar.
            break;
        case 'C':
        case 'c':
            printf("Você escolheu o Cavalo: \n");
            Cavalo(3); //chama a função cavalo e determina quantidade de casas que pode andar.
            break;
        default:
            printf("Opção Inválida!\n");
            break;            


    }

    
    return 0;
}
