#include <stdio.h>
#include <stdlib.h>

int compara(int a, int b){
	if (a<b) return b;
	else return a;
}

int main(int argc, char *argv[]) {
    
    int numero[10], i;
    int maior, menor;
    
    for(i = 0; i < 10; i++) {
        printf("Digite o %d valor: ",i);
        scanf("%d", &numero[i]);
    }
      
    for(i = 1, maior = numero[0]; i< 5; i+=2) {
    	int temp = compara(numero[i], numero[i+1]);
    	maior = compara(maior, temp);
    }
    
    for(i = 1, menor = numero[5]; i< 10; i+=2) {
    	int temp = compara(numero[i], numero[i+1]);
    	menor = compara(menor, temp);
    }

    
    printf("O maior entre os 5 primeiros eh: %d\n", maior);
    printf("O menor entre os 5 ultimos eh: %d\n", menor);
    
    return 0;
}
