#include <stdio.h>
#include<string.h>

int main(){

    char cpf1[15];
    char cpf2[12] = "";

    printf("Insira o seu CPF: \n");
    scanf("%s", cpf1);

    int i = 0, n = 0;

    for(i = 0; i < strlen(cpf1); i++){
        if(cpf1[i] == '.' || cpf1[i] == '-'){
            continue;
        }
        else{
            cpf2[n] = cpf1[i];
            n++;
        }
    }

    cpf2[n] = '\0';

    printf("\n\nEsse é o CPF formatado: %s", cpf2);


    return 0;
}