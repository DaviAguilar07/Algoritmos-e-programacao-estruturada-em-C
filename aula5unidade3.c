#include <stdio.h>
#include <string.h>
 
struct aluno
    {
        char nome[50];
        int matricula;
        float notas[2];
    };
    
    struct turma
    {
        int numeroturma;
        struct aluno alunos[30];
        int totalalunos;
    };
    
int main(){

   struct aluno alunos[5];
   struct turma turmas[10];
    
    int opçao;

    strcpy(alunos[0].nome, "João");
    alunos[0].matricula = 1001;
    alunos[0].notas[0] = 8.5;
    alunos[0].notas[1]= 7.0;

    strcpy(alunos[1].nome, "Maria");
    alunos[1].matricula = 1002;
    alunos[1].notas[0] = 7.5;
    alunos[1].notas[1] = 8;

    strcpy(alunos[2].nome, "Pedro");
    alunos[2].matricula = 1003;
    alunos[2].notas[0] = 9.0; 
    alunos[2].notas[1] = 9.5;

    strcpy(alunos[3].nome, "Ana");
    alunos[3].matricula = 1004;
    alunos[3].notas[0] = 7.0; 
    alunos[3].notas[1] = 7.5;

    strcpy(alunos[4].nome, "Carlos");
    alunos[4].matricula = 1005;
    alunos[4].notas[0] = 8.0; 
    alunos[4].notas[1] = 8.5;

    //Inicializa duas turmas:
    turmas[0].totalalunos = 0;
    turmas[0].numeroturma = 5000;

    turmas[1].totalalunos = 0;
    turmas[1].numeroturma = 6000;

    int a, t;
    float mediaturma = 0;

    do{
        printf("1) Cadastrar aluno na turma.\n");
        printf("2) Lançar notas de aluno.\n");
        printf("3) Média da turma.\n");
        printf("4) Relatório da turma.\n");
        printf("5) Terminando o programa.\n");
        scanf("%d", &opçao);

        switch (opçao)
        {
        case 1:
                printf("Escolha o aluno: ");
                scanf("%d", &a);

                printf("Escolha a turma: ");
                scanf("%d", &t);

                if(turmas[t].totalalunos < 30){
                    turmas[t].alunos[turmas[t].totalalunos] = alunos[a];
                    turmas[t].totalalunos++;
                }else{
                    printf("Não é possível colocar mais alunos.");
                }
                break;
        case 2:
                printf("Escolha o aluno: \n");
                scanf("%d", &a);

                for(int i = 0; i < 2; i++){
                    printf("Nota %d", i + 1);
                    scanf("%f", &alunos[a].notas[i]);
                }
            break;

        case 3:
                printf("Escolha a turma: ");
                scanf("%d", &t);

                mediaturma = 0.0;

                for(int i = 0; i < turmas[t].totalalunos; i++){
                    float somanotas = 0;
                    for(int j = 0; j < 5; j++){
                        somanotas += turmas[t].alunos[i].notas[j];
                    }
                    mediaturma += somanotas / 2;
                }
                printf("Média: %.2f\n", mediaturma / turmas[t].totalalunos);
                break;
                
        case 4:
                printf("Escolha uma turma:");
                scanf("%d", &t);

                printf("Turma %d\n", turmas[t].numeroturma);
                for(int i = 0; i < turmas[t].totalalunos; i++){
                    printf("Aluno: %s\n", turmas[t].alunos[i].nome);
                    printf("Matrícula: %d\n", turmas[t].alunos[i].matricula);
                    printf("Notas: ");
                    for(int j = 0; j < 2; j++){
                        printf("%.2f", turmas[t].alunos[i].notas[j]);
                    }
                    printf("\n");
                }
                break;
        default:
                printf("Programa encerrado.\n");
            break;
        }
    }while(opçao != 5);


    return 0;
}