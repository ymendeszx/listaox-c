#include <stdio.h>
#include "function_lista.c"

int main(int argc, char *argv[]) {
    char lista[9] = {0};
    int usar_argumentos = 0;

    if (argc > 1) {
        int tamanho_arg = 0;
        while (argv[1][tamanho_arg] != '\0') {
            tamanho_arg++;
        }
        if (tamanho_arg >= 9) {
            usar_argumentos = 1;
        }
    }

    if (usar_argumentos == 1) {
        for (int i = 0; i < 9; i++) {
            char c = argv[1][i];
            if (validar_caractere(c) == 1) {
                lista[i] = c;
            }
        }
    } else {
        for (int i = 0; i < 9; i++) {
            char caractere;
            int valido = 0;
            while (valido == 0) {
                printf("Digite o caractere %d da lista:\n", i + 1);
                scanf(" %c", &caractere);
                if (validar_caractere(caractere) == 1) {
                    lista[i] = caractere;
                    valido = 1;
                } else {
                    printf("caractere inválido\n");
                }
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        printf("Caractere %d: %c\n", i + 1, lista[i]);
    }

    printf("Criado por Marcelo Mendes");
    return 0;
}