#include <stdio.h>
int main(){

   char Estado1[50];
   char Codigo1[5];
   char Cidade1[50];
   int Populacao1, pontosTuristicos1;
   float Area1, Pib1;

   //printf( --Dados da Carta 1--)
   printf("Digite o nome da cidade da Carta 1: ");
   scanf("%s" ,Cidade1);

   printf("Digite o Estado da carta 1: ");
   scanf("%s" ,Estado1);

   printf("Digite a populacao da carta 1: ");
   scanf("%d" ,&Populacao1);   
    
   printf("Digite o Codigo da carta 1: ");
   scanf("%s" ,Codigo1);

   printf("Digite a area Km2 da carta 1: ");
   scanf("%f" ,&Area1);

   printf("Digite o Pib da carta 1: ");
   scanf("%f" ,&Pib1);

   printf("Digite pontos Turisticos da carta 1: ");
   scanf("%d" ,&pontosTuristicos1);

   printf("--Dados da carta 1--\n"); 
   printf("Estado: %s\n", Estado1);
   printf("Cidade: %s\n", Cidade1);
   printf("Codigo: %s\n", Codigo1);
   printf("Area km2: %f\n", Area1);
   printf("Pib: %f\n", Pib1);
   printf("pontosTuristicos: %d\n" ,pontosTuristicos1);


   return 0;

   
}
   