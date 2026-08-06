#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a, b, soma, sub, mult, div;
	
	a = 8;
	b = 19;
	soma = a+b;
	sub = a-b;
	mult = a*b;
	div = a/b;
	
	printf("As operacoes entre %f e %f = %f + %f = %f, %f - %f = %f, %f * %f = %f, %f / %f = %f", a,b,a,b,soma,a,b,sub,a,b,mult,a,b,div);
	
	return 0;
}
