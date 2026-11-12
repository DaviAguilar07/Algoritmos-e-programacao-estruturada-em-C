#include <stdio.h>

int main(){

    int num[5];
    int soma = 0;

    //Realização do vetor e do acumulador:
    
    for(int i = 0; i < 5; i++){
        printf("Digite as vendas realizadas no dia %d: ",i + 1);
        scanf("%d", &num[i]);
        
        soma += num[i];
    }

    printf("\n");

    //Impressão do vetor e de seu acumulador:
    printf("-----A quantidade de vendas realizadas foram----- \n");
    for(int i = 0; i < 5; i++){
       printf("Dia %d = %d\n", i+1, num[i]);
    }

    printf("Foram feitas %d vendas em 5 dias.\n", soma);
    
    return 0;
}