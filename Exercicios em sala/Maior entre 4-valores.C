#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a,b,c,d, maior_1, maior_2, maior_3f;
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	//conta
	maior_1 = (a+b+abs(a-b))/2;
	maior_2 = (maior_1+c+abs(maior_1-c))/2;
	maior_3f = (maior_2+d+abs(maior_2-d))/2;
	
	printf("O maior entre |%d|%d|%d|%d| = %d", a,b,c,d, maior_3f);
	
	return 0;
}
