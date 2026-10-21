#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// Primeiro Exercicio
	
	int valor[100], i;
	
	printf("Digite 100 valores: \n");
	
	for(i = 0; i < 100; i++){
		printf("%d: ", i);
		scanf("%d", &valor[i]);
	}
	
	for(i = 99; i > 0; i--){
		printf(" %d ",valor[i]);
	}
	
	//  Terceiro Exercicio
	
	int n, aux;
	printf("\n\n Digite o numero que deseja converter para binario: ");
	scanf("%d", &n);
	while (n > 1){
		
	}
	
	
	return 0;
}
