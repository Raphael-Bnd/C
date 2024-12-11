#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y);

int main(void){
    int num1, num2, num3;
    printf("Digite o primeiro numero:");
    scanf("%d", &num1);
    printf("Digite o segundo numero:");
    scanf("%d", &num2);
    num3 = soma(num1, num2);
    printf("A soma e de: %d + %d = %d\n", num1, num2, num3);
    return(0);
}

int soma(int x, int y){
    return(x+y);
}