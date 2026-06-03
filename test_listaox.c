#include <stdio.h>
#include <assert.h>
#include "function_lista.c"

int main() {
    assert(validar_caractere('X') == 1);
    assert(validar_caractere('O') == 1);
    assert(validar_caractere('A') == 0);

    printf("Criado por Marcelo Mendes");
    return 0;
}