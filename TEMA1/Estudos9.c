#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    int codigo;
    char nome[20];
    Data dataNasc;
} Aluno;

Aluno aluno[2];
int i = 0;

void printSeparator(){
    printf(" \n ======================================================================");
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    for (i = 0; i < 2; i++)
    {
        aluno[i].codigo = 0;
        strcpy(aluno[i].nome, "NULL");
        aluno[i].dataNasc.dia = 0;
        aluno[i].dataNasc.mes = 0;
        aluno[i].dataNasc.ano = 0;
    }
    for (i = 0; i < 2; i++)
    {
        printSeparator();
        printf("\n O codigo do aluno e: %d", aluno[i].codigo);
        printf("\n O nome do aluno e: %s", aluno[i].nome);
        printf("\n A data de nascimento do aluno e: %d / %d / %d",
               aluno[i].dataNasc.dia, aluno[i].dataNasc.mes,
               aluno[i].dataNasc.ano);
        printf(" \n ");
    }

    for (i = 0; i < 2; i++)
    {
        printSeparator();
        printSeparator();
        printf("\n Digite o codigo do aluno: ");
        scanf("%d%*c", &aluno[i].codigo);
        printf("\n Digite o nome do aluno: ");
        scanf("%s%*c", aluno[i].nome);
        printf("\n Digite o dia de nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].dataNasc.dia);
        printf("\n Digite o mes de nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].dataNasc.mes);
        printf("\n Digite o ano de nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].dataNasc.ano);
    }

    for (i = 0; i < 2; i++)
    {
        printSeparator();
        printSeparator();
        printf("\n O codigo do aluno e: %d", aluno[i].codigo);
        printf("\n O nome do aluno e: %s", aluno[i].nome);
        printf("\n A data de nascimento do aluno e: %d / %d / %d",
               aluno[i].dataNasc.dia, aluno[i].dataNasc.mes,
               aluno[i].dataNasc.ano);
        printf(" \n ");
    }
    printf("Pressione enter para sair...");
    getchar();
    return (0);
}