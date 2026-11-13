#include <stdio.h>

void dobrar(int *num){

    *num *= 2;

}


int main(){

    int valor = 5;

    printf("O número do valor antes da chamada da função: %d\n", valor);

    dobrar(&valor);

    printf("O número do valor após a chamada da função: %d\n", valor);


    return 0;
}