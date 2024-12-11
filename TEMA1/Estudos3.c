#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i;

    p = malloc(10 * sizeof(int));//ALOCANDO ESPAÇO NA MEMÓRIA
    if (p == NULL){
        printf("Espaço Insuficiente!");
        exit(1);
    }else{
        printf("Primeiros 10 numeros.\n");
        for (i = 0; i < 10; i++){//PARA CADA ITEM(i) NA POSIÇÃO 0, QUE FOR MENOR QUE 10, INCREMENTA.
                p[i] = i + 10; //PARA COMEÇA NO 10
                printf("%d-%d\n", i, p[i]); // i = POSIÇÃO | P = VALOR(PONTEIRO)
        }
        p = realloc(p, 20 * sizeof(int));//REALOCANDO ESPAÇO NA MEMÓRIA
        printf("Realocando para mais 10 numeros.\n");
        for (i = 10; i < 20; i++){
                p[i] = i + 20; //PARA COMEÇAR NO 30
                printf("%d-%d\n", i, p[i]);
        }
        printf("Todos os 20 numeros alocados");
        for (i=0; i < 20; i++) //MOSTRAR TODOS OS NUMEROS NA MEMÓRIA
                printf("%d-%d\n",i,p[i]); //PERCORRER DE 0 A 20 TODOS OS ITENS NA MEMÓRIA
        free(p); //FUNÇÃO FREE PARA LIBERAR ESPAÇO ALOCADO
    }
    system("pause");
    return(0);
}