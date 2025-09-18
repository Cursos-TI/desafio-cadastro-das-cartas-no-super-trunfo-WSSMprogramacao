#include<stdio.h>
 
        int main(){

          int opcao, regras;
          int numeroSecreto,palpite;

           printf("Menu principal:\n");
           printf("1.Iniciar jogo\n");
           printf("2.ver regras\n");
           printf("3.Sair\n");
           printf("Escolha uma opcao do jogo: ");
           scanf("%d", &opcao);
           
           switch (opcao){
            case 1:
             srand(time(0));
             numeroSecreto = rand() % 10;
             printf("Digite numero de 0 à 9: \n");
             scanf("%d", &palpite);
             if(numeroSecreto == palpite) {
               printf("Você acertou !\n");
               printf("numero secreto %d\n", numeroSecreto);
             } else {
               printf("Você errou!\n");
               printf("numero secreto %d\n", numeroSecreto);
             }
             break;
            case 2:
              printf("A explicaçao das regras\n");
              printf("Digite a opção relacionada as regras do jogo!\n");
              scanf("%d", &regras);
              switch (regras) {
              case 1:
                printf("Regra 1");
                break;
              case 2:
                printf("Regra 2");
                break;
              default:  
                printf("Opção invalida!\n");
            }
           
         
         }
      }
                
            

   
      









        
