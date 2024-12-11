#include <stdio.h>

int main()
{
    int x = 42;    // Variável normal
    int *ptr = &x; // Ponteiro que armazena o endereço de x

    printf("Endereço de x: %p\n", &x);        // Mostra o endereço de x
    printf("Valor de ptr: %p\n", ptr);        // Mostra o endereço armazenado em ptr
    printf("Valor de x: %d\n", x);            // Mostra o valor de x
    printf("Valor via ponteiro: %d\n", *ptr); // Mostra o valor de x usando o ponteiro

    // Alterando o valor de x usando o ponteiro
    *ptr = 100;
    printf("Novo valor de x: %d\n", x);
    printf("Valor via ponteiro:%d\n", *ptr);
    printf("Endereço de X: %p\n", &x);
    printf("Endereço de ptr: %p\n", ptr);
    return 0;
}
