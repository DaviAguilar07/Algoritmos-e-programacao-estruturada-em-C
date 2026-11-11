#include <stdio.h>

int main(){

    int *ptr;
    int vet[5] = {1, 2, 3, 4, 5};
    ptr = vet;


    for(int i = 0; i < 5; i++){
        printf("O valor do vet[%d] = %d\n", i, vet[i]);

        printf("Acrescentando mais dez: \n");
        printf("O valor do ptr[%d] = %d\n", i, *ptr + 10);
        ptr++;
        printf("\n");
    }


    return 0;
}