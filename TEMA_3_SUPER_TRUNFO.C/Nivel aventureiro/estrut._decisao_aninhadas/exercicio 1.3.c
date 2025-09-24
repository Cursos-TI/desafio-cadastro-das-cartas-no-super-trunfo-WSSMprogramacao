#include<stdio.h>
        
        int main(){
        
            int numero;

            printf(" Digite o numero: ");
            scanf("%d", &numero);

            if ( numero > 0) {
                if( numero % 2 == 0) {
                    printf("numero par\n");
                } else {
                    printf("numero impar\n");
                }

                printf("positivo");
            } else if ( numero == 0) {
                printf("numero zero");
            } else {
                printf("negativo");
            }


        }
