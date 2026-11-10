#include <stdio.h>

int main() {
    int num = -1; // inicializa com um valor diferente de 0
    int soma = 0;

    while (num != 0) {
        printf("Insira um número inteiro para ser somado ao final (digite 0 para terminar o programa): ");
        scanf("%d", &num);

        if (num != 0) {
            soma = soma + num;
        }
    }

    printf("A soma final do programa é: %d\n", soma);

    return 0;
}
