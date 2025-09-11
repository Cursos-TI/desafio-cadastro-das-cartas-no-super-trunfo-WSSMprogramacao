#include <stdio.h>

int main(){

    int idade;

      printf("Digite sua idade: \n");
      scanf("%d",&idade);

      //criança < 12
      // adolescente 12>= x <18
      // adulto 18>= x < 60
      // idoso > 60

      if (idade < 12) {
        printf("Você e uma criança!\n");
      } else if (idade > 12 && idade <18) {
        printf("Você e um adolescete!\n");
      } else if (idade >18 && idade <60) {
        printf("Você e um adulto!\n");
      } else {
        printf("Você e um idoso!\n");
      }



    }







