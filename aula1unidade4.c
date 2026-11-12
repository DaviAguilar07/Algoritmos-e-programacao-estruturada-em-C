#include <stdio.h>

int construçao(){
    float base = 0, altura = 0, comprimento = 0;

    int R = 25;

    printf("Qual o tamanho da base? ");
    scanf("%f", &base);

    printf("Qual a altura? ");
    scanf("%f", &altura);

    printf("Qual o tamanho do comprimento? ");
    scanf("%f", &comprimento);

    return (int) (base * altura * comprimento * R);
}
int main(){

    float peso = construçao();

    if(peso <= 500){
        printf("O peso é de %.2f, então deverá usar o guindaste G1.", peso);
    }
    else if(peso > 1500){
        printf("O peso é de %.2f, então deverá uasr o guindaste G3.", peso);
    }
    else{
        printf("O peso é de %.2f, então deverá usar o guindaste G2.", peso);
    }

    return 0;
}