#include<stdio.h>
       int main(){
       
        char variavel;

        printf("Digite a letra: \n");
        scanf("%c", &variavel);

        switch (variavel) {
            case 'a':
                   printf("Codigo a ser executado se variavel == a\n");
            break;
            case'b': 
                   printf("Codigo a ser executado se variavel == b\n");
            break;
            default:
                   printf("Codigo a ser executado se variavel nao for a ou b\n ");
        }




       }

