#include<stdio.h>

int main(){

    int idade;
    float renda;

    printf("Digite sua idade:  ");
    scanf("%d", &idade);

    printf("Digite sua renda:  ");
    scanf("%f",&renda);

    if(idade <=18 || idade >=60) 
    {
      if(renda < 2000) {
         printf("Voce tem direito ao desconto!!\n");
      } else {
         printf("Voce nao tem direito ao desconto devido a sua renda!");
      }  
    
    } else {
         printf("Voce nao  esta dentro dos criterios devido a sua idade!!");
    }


}

