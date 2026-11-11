#include <stdio.h>

int main(){

    char *ptr;
    char vet[5] = {'a', 'b', 'c', 'd', 'e'};
    int i;
    ptr = vet;

    for(i = 0; i < 5; i++){
        //Valor do vetor no laço atual
        printf("\nvet[%d] = %c\n", i, vet[i]);

        printf("\n");
        //Valor do ponteiro no laço atual
        printf("ptr = %c\n", *ptr);
        ptr++;
    }


    return 0;
}