#include <stdio.h> 
int main(){


// ****"DESAFIO DAS CARTAS NO SUPER TRUNFO"**** 
   char Estado1[50];
   char Codigo1[5];
   char Cidade1[50];
   int  Turisticos1;
   float Area1, Pib1; 
   unsigned long int Populacao1,resultado1;
   float Densidade1,Carpita1;
   
  
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
   
   resultado1= (Populacao1+Area1+Pib1+Turisticos1+Carpita1+(1/Densidade1));


   char Estado2[50];
   char Codigo2[5];
   char Cidade2[50];
   int  Turisticos2;
   float Area2, Pib2;
   float Densidade2,Carpita2;
   unsigned long int Populacao2,resultado2;
   int Comparacao;

   resultado2= (float)(Populacao2+Area2+Pib2+Turisticos2,Carpita2+(1/Densidade2));
   
 
   //printf("--Dados da Carta 2--");

   printf("Digite o nome o Estado da Carta 2: ");
   scanf("%s" ,Estado2);

   printf("Digite a Cidade da carta 2: ");
   scanf("%s" ,Cidade2);
      
   printf("Digite o Codigo da carta 2: ");
   scanf("%4s" ,Codigo2);

   printf("Digite a populacao da carta 2: ");
   scanf("%ld", &Populacao2);

   printf("Digite a area Km2 da carta 2: ");
   scanf("%f" ,&Area2);

   printf("Digite o Pib da carta 2: ");
   scanf("%f" ,&Pib2);

   printf("Digite pontos Turisticos da carta 2: ");
   scanf("%d" ,&Turisticos2);

   printf("--Dados da carta 2--\n"); 
   printf("Estado: %s\n", Estado2);
   printf("Cidade: %s\n", Cidade2);
   printf("Populacao : %ld\n", Populacao2);
   printf("Codigo: %s\n", Codigo2);
   printf("Area km2: %.0f\n", Area2);
   printf("Pib: %.2f\n", Pib2);
   printf("pontosTuristicos: %d\n", Turisticos1);
   Densidade2 = (float)(Populacao2/Area2);
   printf("Densidade populacional: %.3f Hab/km2\n", Densidade2);
   Carpita2 = (float)(Pib2/Populacao2);
   printf("Pib per Capita: %f Reais\n", Carpita2);
   printf("Super poder da carta 2: %ld\n", &resultado2);

   Comparacao = (Populacao1 > Populacao2),(Area1>Area2),(Pib1>Pib2),(Carpita1>Carpita2),(Turisticos1>Turisticos2),
   (resultado1>resultado2),(Densidade1<Densidade2);
   
   printf("*** CARTA 1 VENCE (1) , CARTA 2 VENCE (0) ***\n");
   printf("População : Carta %d vence\n",Populacao1 > Populacao2);
   printf("Area Km2: Carta %d vence\n",Area1 > Area2);
   printf("Pib : Carta %d vence\n",Pib1 > Pib2);
   printf("Pib Per Capita : Carta %d vence\n",Carpita1 > Carpita2);
   printf("P.turisticos : Carta %d vence\n",Turisticos1 > Turisticos2);
   printf("Densidade populacional : Carta %d vence\n",Densidade1 < Densidade2);
   printf("A Maior Super Carta é : %d\n vence", resultado1>resultado2);





   return 0;


}