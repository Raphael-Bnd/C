#include <stdio.h>
#include <stdlib.h>

void troca(int x, int y){
    int aux;
    aux = x; // Guarda o valor de X na Aux.
    x = y; // Guarda o valor de Y em X.
    y = aux; // Atribui o valor de aux em Y.
}

int main(){
    int v1=5, v2=10;
    printf("\nAntes da troca: v1=%d e v2=%d", v1, v2);
    troca(v1,v2); // 5, 10
    printf("\nDepois da troca: v1=%d e v2=%d", v1, v2);
    exit(0);
}