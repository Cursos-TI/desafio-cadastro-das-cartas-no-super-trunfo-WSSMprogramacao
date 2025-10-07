#include <stdio.h>

int main(){

    int nota;
    
    printf("Digite sua nota:\n");
    scanf("%d",&nota);
//A>=90
//B>=80
//C>=70
//D>=60
//E>=50
//F


    if (nota >=90) {
        printf("O conceito e A!\n");
    } else if (nota >=80) {
        printf("O conceito e B!\n");
    } else if (nota >=70){
        printf("O conceito e C!\n"); 
    } else if (nota >= 60) {
        printf("O conceito e D!\n");
    } else if (nota >= 50) {
        printf("O conceito e E!\n");
    } else {
        printf("O conceito e F!\n");
    }    
    







}
