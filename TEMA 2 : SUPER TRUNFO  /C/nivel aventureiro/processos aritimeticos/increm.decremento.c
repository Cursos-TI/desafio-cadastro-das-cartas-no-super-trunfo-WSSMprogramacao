#include <stdio.h>

int main(){

/*
Incremento (++)
Pre-incremento ++a
Pos-incremento a++
Decremento (--)
Pre-decremento --a
Pos-incremento a--
*/

int numero1= 1, resultado;

printf("Antes incremento: %d\n", numero1);
//numero1= numero 1 + 1;
//numero1 += 1;

//pos-incremento;
//resultado = numero1;
//numero1 = ++;
resultado = numero1++;
//printf("Apos incremento: %d\n", numero1);
printf("Apos pos-incremento - numero1: %d, resultado %d\n", numero1, resultado);

resultado = ++numero1;
printf("Apos pre-incremento - numero1: %d, resultado %d\n", numero1, resultado);

resultado = numero1--;
printf("Apos pos-decremento - numero1: %d, resultado %d\n", numero1, resultado);

resultado = --numero1;
printf("Apos pre-decremento - numero1: %d, resultado %d\n", numero1, resultado);


//numero1= numero 1 - 1;
//numero1 -= 1;
//numero1--;




}


