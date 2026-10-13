#ifndef ALUNO_H
#define ALUNO_H

#define MAX_ALUNO 1000
#define NAME_LENGTH 20

#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    int id;
    char nome[NAME_LENGTH];
    int idade;
    float nota;
} Aluno;

void cadastrar_aluno(Aluno*alunos, int *count);
void listar_alunos(Aluno*alunos, int count);
void buscar_aluno(Aluno*alunos, int count);
void atualizar_aluno(Aluno*alunos, int count);
void excluir_aluno(Aluno*alunos, int *count);

#endif