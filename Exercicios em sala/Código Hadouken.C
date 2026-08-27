#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	int a,b,c, r, h, mult, div, sum, sub;
	
	printf("Insira o primeiro numero: ");
	scanf("%d",& a);
	printf("Insira o segundo numero: ");
	scanf("%d",& b);
	
	if (a>0 && b>0){
		if (a<10 && b <10){
			if((a==2||a==3||a==5||a==7) && (b==2||b==3||b==5||b==7)){
				r = (a*b)/2;
				h = sqrt(((a*a)+(b*b)));
				printf("A area do triangulo eh %d e a hipotenusa eh %d", r, h);
			}else{
				sum = a+b;
				sub = a-b;
				mult = a*b;
				div = a/b;
				printf("soma de A e B: %d",sum);
				printf("\na subtracao de A e B: %d",sub);
				printf("\na multiplicacao de A e B: %d",mult);
				printf("\na divisao de A e B: %d",div);
			}
		}else{
			if(a%b == 0) printf("sim, sao multiplos"); else printf("nao, nao sao multiplos");
		}	
	}else printf("Os inversos de A e B sao: %d e %d",-a,-b);
	
	return 0;
}
