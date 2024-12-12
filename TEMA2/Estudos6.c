#include <stdio.h>
#include <stdlib.h>

int soma(int *a, int *b){
    *a = *a + *b;
    return *a;
}
int main(){
    int x=5, y=3;
    y = soma(&x, &y);
    printf("%d", y);
    return(0);
}