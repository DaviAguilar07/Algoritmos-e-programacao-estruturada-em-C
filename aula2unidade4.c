#include <stdio.h>

    int formulaquimica(float a, float b){

        const float mA = 321.43;
        const float mB = 150.72; 

        printf("-----Tabela consulta para os químicos-----\n");
        printf("(1.2 x %.2f) + (1.0 x %.2f) = %.2f\n", mA, mB, 1.2 * mA + 1.0 * mB);
        printf("(1.4 x %.2f) + (1.0 x %.2f) = %.2f\n", mA, mB, 1.4 * mA + 1.0 * mB);
        printf("(1.0 x %.2f) + (1.6 x %.2f) = %.2f\n", mA, mB, 1.0 * mA + 1.6 * mB);

            return (a * mA) + (b * mB);
    };

int main(){

    float num1 = 0, num2 = 0, formula = 0;

    printf("Insira a quantidade de mol de A: ");
    scanf("%f", &num1);

    printf("Insira a quantidade de mol de B: ");
    scanf("%f", &num2);

    formula = formulaquimica(num1, num2);
    
    printf("A massa final do composto é %.2f", formula);

    return 0;
}