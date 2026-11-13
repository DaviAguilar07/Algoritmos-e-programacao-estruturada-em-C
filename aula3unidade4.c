#include <stdio.h>

    float compras(int quantiitem1, float *valoritem1, int quantiitem2, float *valoritem2){

        float resultado1 = quantiitem1 * (*valoritem1);

        float resultado2 = quantiitem2 * (*valoritem2);

        float soma = 0;
        
        return soma = resultado1 + resultado2;
    }

int main(){

float resultado, valor1, valor2;
int quanti1, quanti2;

printf("Qual o valor do item 1? R$", valor1);
scanf("%f", &valor1);

printf("Qual a quantidade da compra do item 1? ", quanti1);
scanf("%d", &quanti1);

printf("Qual o valor do item 2? R$", valor2);
scanf("%f", &valor2);

printf("Qual a quantidade da compra do item 2? ", quanti2);
scanf("%d", &quanti2);


printf("O valor final é R$%.2f", compras(quanti1, &valor1, quanti2, &valor2));

    return 0;
}