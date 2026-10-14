#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int valor, i, soma;
    float media;

    printf("Informe 10 numeros inteiros e positivos: ");

    i = 0;
    while (i < 10) {
        printf("\nDigite o %d numero: ", i + 1);
        scanf("%d", &valor);

        if (valor > 0) {
            soma = soma + valor;
            i++;
        }
    }
    
    media = soma/10;

    printf("\nA soma dos valores positivos digitados foi de: %d", soma);
    printf("\nA media dos valores positivos eh de: %f", media);

    return 0;
}
