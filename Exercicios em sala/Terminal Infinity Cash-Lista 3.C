#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int valor, n100, n50, n10, n5, n2, n1;
	
	printf("Quanto de dinheiro voce deseja sacar?: ");
	scanf("%d", & valor);
	
	n100=valor/100;
	valor=valor%100;
	
	n50=valor/50;
	valor=valor%50;
	
	n10=valor/10;
	valor=valor%10;
	
	n5=valor/5;
	valor=valor%5;
	
	n2=valor/2;
	valor=valor%2;
	
	n1=valor;
	
	printf("Total de notas de 100: %d", n100);
	printf("\nTotal de notas de 50: %d", n50);
	printf("\nTotal de notas de 10: %d", n10);
	printf("\nTotal de notas de 5: %d", n5);
	printf("\nTotal de notas de 2: %d", n2);
	printf("\nTotal de notas de 1: %d", n1);
	return 0;
}
