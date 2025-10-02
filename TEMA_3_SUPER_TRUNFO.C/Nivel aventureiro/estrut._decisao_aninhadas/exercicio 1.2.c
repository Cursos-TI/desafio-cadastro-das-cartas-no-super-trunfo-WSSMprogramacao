#include<stdio.h>

int main(){

    int idade, dependentes;
    float renda;

    // A primeira condição é a idade do usuario ser de 18 a 65
    // A segunda condição se renda do usuario ser menor que R$3000,00
    // A terceira condicao verifica se o numerode dependentes e maior 2 

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda: ");
    scanf("%f", &renda);
    printf ("Digite quantos dependentes: ");
    scanf("%d", &dependentes);

        if(idade >=18 && idade <65){
           if( renda < 3000){
                 if(dependentes > 2) 
                {
                 printf("Você atende a todos os criterios\n");
                } else {
                 printf("Você nao atende aos criterios  de dependentes\n");
                }    
            
            } else {
             printf("Você não atende o criterio de renda\n");
            }
        
        } else {    
         printf("Voce não atende os criterios de idade\n");
        }


}        

    
        
    
        
        
         
        
        
        








