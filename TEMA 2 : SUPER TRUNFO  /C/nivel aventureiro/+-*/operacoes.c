#include <stdio.h>
int main(){

    /*
    soma (+)
    subtracao (-)
    multiplicacao (*)
    divisao (/)
    */

    int numero1,numero2;
    int soma,subtracao,multiplicacao,divisao;

    printf("Entre com numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com numero 2: \n");
    scanf("%d", &numero2);

    // operacao soma 
    soma = numero1 + numero2;
    // operacao subtracao
    subtracao = numero1 - numero2;
    // operacao multiplicacao
    multiplicacao = numero1 * numero2;
    // operacao divisao
    divisao = numero1 / numero2;

    printf("A soma é: %d\n",soma);
    printf("A subtração é: %d\n",subtracao);
    printf("A multiplicação é: %d\n",multiplicacao);
    printf("A Divisão é: %d\n",divisao);



}