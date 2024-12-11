#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    int codigo;
    char nome[200];
    struct
    {
        int dia;
        int mes;
        int ano;
    };
} Aluno;
Aluno aluno;
int main(void)
{
    setlocale(LC_ALL, "portuguese");
    aluno.codigo = 0;
    strcpy(aluno.nome, "NULL");
    aluno.dia = 0;
    aluno.mes = 0;
    aluno.ano = 0;
    printf("\nO código do aluno é: %d", aluno.codigo);
    printf("\nO nome do aluno é: %s", aluno.nome);
    printf("\nA data de nascimento do aluno é: %d/%d/%d", aluno.dia, aluno.mes, aluno.ano);
    printf("\n \n");
    printf("\nO código do aluno é: %d", aluno.codigo);
    printf("\nO nome do aluno é: %s", aluno.nome);
    printf("\nA data de nascimento do aluno é: %d/%d/%d", aluno.dia, aluno.mes, aluno.ano);
    printf("\n \n");
    printf("Digite o código o aluno:");
    scanf("%d%*c", &aluno.codigo);
    printf("Digite o nome do aluno:");
    scanf("%s", aluno.nome);
    printf("Digite o dia de nascimento do aluno:");
    scanf("%d%*c", &aluno.dia);
    printf("Digite o mês de nascimento do aluno:");
    scanf("%d%*c", &aluno.mes);
    printf("Digite o ano de nascimento do aluno:");
    scanf("%d%*c", &aluno.ano);
    printf("\nO código do aluno é: %d", aluno.codigo);
    printf("\nO nome do aluno é: %s", aluno.nome);
    printf("\nA data de nascimento do aluno é: %d/%d/%d", aluno.dia, aluno.mes, aluno.ano);
    printf("\n \n");
    system("pause");
    return (0);
}