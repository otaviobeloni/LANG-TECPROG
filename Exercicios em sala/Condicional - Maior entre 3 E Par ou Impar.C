#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b, c ,r;
	
	printf("----MAIOR ENTRE 3----");
	
	printf("\nInforme os valores para A, B e C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b){
		r = a;
	}
	else{
		r = b;
	}
	if(c>r){
		r = c;
	}
	printf("\nO maior eh %d", r);
	
	int num;
	
	printf("\n\n----PAR OU IMPAR----");
	
	printf("\nInforme o valor inteiro desejado: ");
	scanf("%d", &num);
	
	if(num%2==0){
		printf("O numero %d eh PAR", num);
	}
	else{
		printf("O numero %d eh IMPAR", num);
	}

	return 0;
}
