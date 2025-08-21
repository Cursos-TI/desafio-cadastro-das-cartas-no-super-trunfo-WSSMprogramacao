#include <stdio.h> 
int main(){


// ****"DESAFIO DAS CARTAS NO SUPER TRUNFO"**** 
   char Estado1[50];
   char Codigo1[5];
   char Cidade1[50];
   int  Turisticos1;
   float Area1, Pib1; 
   unsigned long int Populacao1;
   float Densidade1,Carpita1;
   double resultado1;
   
   resultado1= (Populacao1+Area1+Pib1+Turisticos1+(1/Densidade1));
   comparação = (Populacao1 > Populacao2),(Area1>Area2),(Pib1>Pib2),(Carpita1>Carpita2),(Turisticos1>Turisticos2),(Densidade1<Densidade2);

   //printf("--Dados da Carta 1--");

   printf("Digite o nome o Estado da Carta 1: ");
   scanf("%s" ,Estado1);

   printf("Digite a Cidade da carta 1: ");
   scanf("%s" ,Cidade1);
      
   printf("Digite o Codigo da carta 1: ");
   scanf("%4s" ,Codigo1);

   printf("Digite a populacao da carta 1: ");
   scanf("%ld", &Populacao1);

   printf("Digite a area Km2 da carta 1: ");
   scanf("%f" ,&Area1);

   printf("Digite o Pib da carta 1: ");
   scanf("%f" ,&Pib1);

   printf("Digite pontos Turisticos da carta 1: ");
   scanf("%d" ,&Turisticos1);

   printf("--Dados da carta 1--\n"); 
   printf("Estado: %s\n", Estado1);
   printf("Cidade: %s\n", Cidade1);
   printf("Populacao : %ld\n", Populacao1);
   printf("Codigo: %s\n", Codigo1);
   printf("Area km2: %.0f\n", Area1);
   printf("Pib: %.2f\n", Pib1);
   printf("pontosTuristicos: %d\n" ,Turisticos1);
   Densidade1 = (float)(Populacao1/Area1);
   printf("Densidade populacional: %.3f Hab/km2\n", Densidade1);
   Carpita1 = (float)(Pib1/Populacao1);
   printf("Pib per Capita: %fReais\n", Carpita1);
   printf("Super poder da carta 1: %ld\n", &resultado1);
   printf("estado venceu: carta")




   return 0;


}