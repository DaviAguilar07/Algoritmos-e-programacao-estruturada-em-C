#include <stdio.h>

int main(){

    int provas, opcao;
    float nota1, media; //nota2, nota3;

    do{
        printf("Insira sua nota: ");
        scanf("%f", &nota1);

        printf("Insira a quantidade de provas no semestre: ");
        scanf("%d", &provas);

        printf("\n");

        printf("[1] Veja qual a sua média.\n");
        printf("[2] Sair do programa.\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            media = nota1 / provas;
            printf("A sua média é: %.2f\n", media);
            break;
        
        case 2:
                printf("Saindo...\n");
                break;

        default:
        printf("Opção inválida.");
            break;
        }

    }while(opcao != 2);

    return 0;
}