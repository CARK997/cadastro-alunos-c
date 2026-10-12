#ifndef ALUNO_H
#define ALUNO_H

#define MAX_ALUNOA 1000
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

#endif