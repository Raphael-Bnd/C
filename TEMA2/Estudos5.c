#include <stdio.h>

void v_iniciacao(int *vet, int n){
    int i;
    for(i=0; i < n; i++)
    vet[i]=0;
}

void v_imprime(int *vet, int n){
    int i;
    for(i=0; i < n; i++)
    printf(" %d - ",vet[i]);
    printf("\n");
}

int main(void){
    int vet[10], i;
    v_iniciacao(vet, 10);
    printf("Impressao do vetor antes da atribuicao");
    v_imprime(vet,10);
    for(i=0; i < 10; i++){
    vet[i]=i;
    }
    printf("impreesao do vetor apos a atribuicao");
    v_imprime(vet,10);
    return(0);
}