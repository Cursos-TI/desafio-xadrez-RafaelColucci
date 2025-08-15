#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    //declaração de variáveis.
    char menu;
    int i = 0; 

    printf("*** XADREZ *** \n\n");

    printf("T. Torre\n");
    printf("B. Bispo\n");
    printf("R. Rainha\n\n");

    printf("Escolha a peça para mover: "); //menu para o jogador escolher qual peça mover.
    scanf("%c", &menu);

    switch(menu)
    {
        case 'T':
        case 't':
            printf("Você escolheu a Torre: \n");
            for(i = 0; i < 5; i++) //utilização do for para mover 5 casas para direita.
            {
                printf("direita\n");  // saida na tela
            }
            break;
        case 'B':
        case 'b':
            printf("Você escolheu o Bispo: \n");
            while(i < 5) //utilização do while para mover 5 casas na diagonal direita.
            {
                printf("Cima - Direita\n"); // saida na tela
                i++; //incremento
            }
            break;
        case 'R':
        case 'r':
            printf("Você escolheu a Rainha: \n"); // utilização do dowhile para mover 8 casas para esquerda.
            do
            {
                printf("Esquerda\n"); // saida na tela
                i++; //incremento
            } while (i < 8);
            break;
        default:
            printf("Opção Inválida!\n"); // saida na tela
            break;            


    }

    
    return 0;
}
