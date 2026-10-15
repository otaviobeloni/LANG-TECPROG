#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// Exercicio 1 (contagem com passo)
	
    int valor, limit, passo;

    printf("Por qual numero voce quer comecar?: ");
    scanf("%d", &valor);

    printf("Ate onde deseja contar?: ");
    scanf("%d", &limit);

    printf("Com qual passo?: ");
    scanf("%d", &passo);

    for (valor; valor <= limit; valor += passo) {
        printf("%d ", valor);
    }
    
    // Exercicio 2 (soma dos termos)
    
    int n, cont;
    float dec, soma;

    printf("Insira um valor: ");
    scanf("%d", &n);
	
	dec = 2;
    for (cont = 0; cont < n; cont++) {
        soma += 1.0 / dec;
        dec *= 2;
    }

    printf("Soma = %f", soma);

    return 0;
}
