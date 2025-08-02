#include <stdio.h>
int main(){

   int Carta1;
   char Estado1[50];
   char Codigo1[05];
   char Cidade1[50];
   int Populacao1;
   float Area1;
   float Pib1;
   int pontosTuristicos1;

   printf("Digite o nome da cidade da Carta 1:\n");
   scanf("%s" ,Cidade1);

   printf("Digite o Estado da carta 1:\n");
   scanf("%s" ,Estado1);

   printf("Digite a populacao da carta 1:\n");
   scanf("%d" ,&Populacao1);   
    
   printf("Digite o Codigo da carta 1:\n");
   scanf("%s" ,Codigo1);

   printf("Digite a area da carta 1:\n");
   scanf("%f" ,&Area1);

   printf("Digite o Pib da carta 1:\n");
   scanf("%f" ,&Pib1);

   printf("Digite pontos Turisticos da carta 1:\n");
   scanf("%d" ,&pontosTuristicos1);


   return 0;

   
}
   