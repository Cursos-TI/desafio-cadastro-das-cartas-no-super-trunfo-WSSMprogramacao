#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
        int main(){

          int escolhajogador,escolhacomputador;
          srand(time(0));
 
           printf("***jogo do Jokenpô***\n");
           printf("Escolha uma opção:\n");
           printf("1- pedra\n");
           printf("2-papel\n");
           printf("3-tesoura\n");
           printf("Escolha: ");
           scanf("%d", &escolhajogador);

           escolhacomputador = rand() % 3+ 1;

           switch (escolhajogador)
           {
           case 1:
                 printf("Jogador: pedra -\n");
            break;
           case 2:
                 printf("Jogador: papel -\n");
            break;
           case 3:
                 printf("Jogador: tesoura -\n");
            break;
           default:
                 printf("Opção invalido\n");
            break;     
           }
           

           switch (escolhacomputador)
           {
           case 1:
                 printf("Computador: pedra\n ");
            break;
           case 2:
                 printf("Computador: papel\n ");
            break;
           case 3:
                 printf("Computador: tesoura\n ");
            break;
           }

          if(escolhajogador == escolhacomputador)
          {
            printf("### jogo empatou!!");
          } else if((escolhajogador == 1) && (escolhacomputador == 3) ||
                     (escolhajogador == 2) && (escolhacomputador == 1) ||
                     (escolhajogador == 3) && (escolhacomputador))
          {
            printf("** Parabens, Você venceu!!\n"); 
          } else {
            printf("Você perdeu\n");
          }       
        
      
            return 0;
          }
           