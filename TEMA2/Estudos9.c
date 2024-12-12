//Estudo de teste com variaveis locais e globais
#include <stdio.h>

int num; 
int num = 20; //Variavel global(fora do escopo Main)
int main(){
    int num;
    num = 10; //variavel local
    printf("O valor da variavel num e de: %d", num);
    return(0);
}
//perceba que ao executar o codigo, a variavel local 
//sobreescreve a variavel global