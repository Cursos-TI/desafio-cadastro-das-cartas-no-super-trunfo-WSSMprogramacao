#include <stdio.h>
/// @brief 
/// @return 
int main(){
// ****"DESAFIO DAS CARTAS NO SUPER TRUNFO"**** 
   char Estado1[50];
   char Codigo1[5];
   char Cidade1[50];
   int  Turisticos1;
   float Area1, Pib1, Populacao1;
   float Densidade1,Carpita1;
 
   //printf("--Dados da Carta 1--");

   printf("Digite o nome o Estado da Carta 1: ");
   scanf("%s" ,Estado1);

   printf("Digite a Cidade da carta 1: ");
   scanf("%s" ,Cidade1);
      
   printf("Digite o Codigo da carta 1: ");
   scanf("%4s" ,Codigo1);

   printf("Digite a populacao da carta 1: ");
   scanf("%f", &Populacao1);

   printf("Digite a area Km2 da carta 1: ");
   scanf("%f" ,&Area1);

   printf("Digite o Pib da carta 1: ");
   scanf("%f" ,&Pib1);

   printf("Digite pontos Turisticos da carta 1: ");
   scanf("%d" ,&Turisticos1);

   printf("--Dados da carta 1--\n"); 
   printf("Estado: %s\n", Estado1);
   printf("Cidade: %s\n", Cidade1);
   printf("Populacao : %.3f\n", Populacao1);
   printf("Codigo: %s\n", Codigo1);
   printf("Area km2: %.0f\n", Area1);
   printf("Pib: %.2f\n", Pib1);
   printf("pontosTuristicos: %d\n" ,Turisticos1);
   Densidade1 = (float)(Populacao1/Area1);
   printf("Densidade populacional: %.3f Hab/km2\n", Densidade1);
   Carpita1 = (float)(Pib1/Populacao1);
   printf("Pib per Capita: %fReais\n", Carpita1);



 
   char Estado2[50];
   char Codigo2[5];
   char Cidade2[50];
   int  Turisticos2;
   float Area2, Pib2, Populacao2;
   float Densidade2,Carpita2;
 
   //printf("--Dados da Carta 2--");

   printf("Digite o nome o Estado da Carta 2: ");
   scanf("%s" ,Estado2);

   printf("Digite a Cidade da carta 2: ");
   scanf("%s" ,Cidade2);
      
   printf("Digite o Codigo da carta 2: ");
   scanf("%4s" ,Codigo2);

   printf("Digite a populacao da carta 2: ");
   scanf("%f", &Populacao2);

   printf("Digite a area Km2 da carta 2: ");
   scanf("%f" ,&Area2);

   printf("Digite o Pib da carta 2: ");
   scanf("%f" ,&Pib2);

   printf("Digite pontos Turisticos da carta 2: ");
   scanf("%d" ,&Turisticos2);

   printf("--Dados da carta 2--\n"); 
   printf("Estado: %s\n", Estado2);
   printf("Cidade: %s\n", Cidade2);
   printf("Populacao : %.3f\n", Populacao2);
   printf("Codigo: %s\n", Codigo2);
   printf("Area km2: %.0f\n", Area2);
   printf("Pib: %.2f\n", Pib2);
   printf("pontosTuristicos: %d\n", Turisticos1);
   Densidade2 = (float)(Populacao2/Area2);
   printf("Densidade populacional: %.3f Hab/km2\n", Densidade2);
   Carpita2 = (float)(Pib2/Populacao2);
   printf("Pib per Capita: %f Reais\n", Carpita2);





   return 0;


}