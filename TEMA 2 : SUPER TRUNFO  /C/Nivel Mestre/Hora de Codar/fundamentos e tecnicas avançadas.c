#include<stdio.h>
int main(){

    //Declarar variaveis de produto, u i estoque, double valor unitario, double valor total e 
    // u i quantidade minima
    // exibir as informacoes do produto
    //Comparaçoes do valor minimo do estoque
    //Comparaçoes ds valores totais dos produtos

    char produtoA[30]= "Produro A";
    char produtoB[30]= "Produto B";

    unsigned int estoqueA= 1000;
    unsigned int estoqueB= 2000;

    float valorA = 10.50;
    float valorB = 20.40;
    
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    //Exibir as informacoes do produto
    printf("Produto %s tem em estoque %u e o valor unitario é R$ %.2f\n" , produtoA, estoqueA, valorA);
    printf("Produto %s tem em estoque %u e o valor unitario é R$ %.2f\n" , produtoB, estoqueB, valorB); 
    
    //Comparacoes com valor minimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("Produto %s tem estoque minimo %d\n" , produtoA, resultadoA);
    printf("Produto %s tem estoque minimo %d\n" , produtoB, resultadoB);
    
    
    //Comparacoes com valores  totais de produtos

    printf("Os valor TOTAL de A é:(R$ %.2f), é maior que valor TOTAL de B (R$ %.2f): %d\n", estoqueA*valorA, estoqueB*valorB,
    (estoqueA*valorA)>(estoqueB*valorB));
    
    




    return 0;















}