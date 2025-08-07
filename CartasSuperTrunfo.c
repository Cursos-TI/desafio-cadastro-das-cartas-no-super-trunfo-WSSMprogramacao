#include <stdio.h>
int main(){

   char Estado1[50];
   char Codigo1[5];
   char Cidade1[50];
   int Populacao1, pontosTuristicos1;
   float Area1, Pib1;

   //printf("--Dados da Carta 1--");

   printf("Digite o nome o Estado da Carta 1: ");
   scanf("%s" ,Cidade1);

   printf("Digite a Cidade da carta 1: ");
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
   printf("Populacao : %d\n", Populacao1);
   printf("Codigo: %s\n", Codigo1);
   printf("Area km2: %f\n", Area1);
   printf("Pib: %f\n", Pib1);
   printf("pontosTuristicos: %d\n" ,pontosTuristicos1);



char Estado2 [50];
char Cidade2[50];
char Código2[5];
int População2,Turisticos2;
float Area2;
float Pib2;

//printf("--Dados da Carta 2--");


printf("Digite o Estado da carta 2 : ");
scanf("%s", Estado2);

printf("Digite a Cidade da carta 2: ");
scanf("%s", Cidade2);

printf("Digite o Código da carta 2: ");
scanf("%s" , Código2);

printf("Digite a população da carta 2: ");
scanf("%d", &População2);

printf("Digite Área km2 da carta 2: ");
scanf("%f", &Area2);

printf("Digite o PIB da carta 2 : ");
scanf("%f", &Pib2);

printf("Digite P.Turisticos da carta 2: ");
scanf("%d" ,&Turisticos2);

printf("--Dados da Carta 2--\n");
printf("Estado: %s\n",Estado2);
printf("Cidade: %s\n",Cidade2);
printf("Codigo: %s\n", Código2);
printf("População: %d\n", População2);
printf("Área km2: %f\n", Area2);
printf("PIB: %f\n", Pib2);
printf("P.Turísticos: %d\n", Turisticos2);


return 0;

   
}
   