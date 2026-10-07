#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int numero[10], i;
    int maior, menor;
    
    for(i = 0; i < 10; i++) {
        printf("Digite o %d valor: ",i);
        scanf("%d", &numero[i]);
    }
    
    maior = numero[0];
    
    for(i = 1; i < 5; i++) {
    	if(maior < numero[i]) maior = numero[i];
    }
    
    menor = numero[5];
    
    for(i = 6; i < 10; i++) {
        if(menor > numero[i]) menor = numero[i];
    }
    
    printf("O maior entre os 5 primeiros eh: %d\n", maior);
    printf("O menor entre os 5 ultimos eh: %d\n", menor);
    
    return 0;
}
