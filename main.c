#include <stdio.h>
#include "aluno.h"
#include <signal.h>

Aluno alunos[MAX_ALUNO];
int count = 0;

int sinal_recebido = 0;

int display(void) {
    int option;
 printf("======================================\n");
    printf(" SISTEMAS DE CADASTRO DE ALUNOS\n");
    printf("======================================\n");
    printf("1. Cadastrar aluno\n");
    printf("2. Listar alunos\n");
    printf("3. Buscar aluno\n");
    printf("4. Atualizar aluno\n");
    printf("5. Excluir aluno\n");
    printf("6. Sair\n");


    printf("======================================\n");
    printf("digite sua opção: ");

    scanf("%d", &option);
    return option;
}


void handler(int sign_num){
    if (sign_num == SIGINT)
    {
        sinal_recebido = 1; 
    }
}

int main(){
    signal(SIGINT, handler);
    bool status = true;
    load_data(alunos, &count);
    while(status){

        int escolha = display();
        escolha = validate_option(escolha);
        switch (escolha)
        {
            case 1:
            cadastrar_aluno(alunos, &count);
            break;
            case 2:
            listar_alunos(alunos, count);
            break;
            case 3:
            buscar_aluno(alunos, count);
            break;
            case 4:
            atualizar_aluno(alunos, count); 
            break;
            case 5:
            excluir_aluno(alunos, &count);
            break;
            case 6:
            status = false;
            break;
            default:
            printf("Opção inválida. Tente novamente.\n");
        }




    
    }
}

