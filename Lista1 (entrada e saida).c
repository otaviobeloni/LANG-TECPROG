#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//Primeiro Exercicio
	int primeiro, segundo, aux;
	
	printf("Escreva o primeiro numero: ");
	scanf("%d", &primeiro);
	printf("Escreva o segundo numero: ");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf("%d \n %d", primeiro, segundo);
	
	//Segundo exercicio
	double valor, A;
	int N;
	
	printf("\nInforme um valor do tipo double: ");
	scanf("%lf", &valor);
	
	N = (int) log10(valor);
	A = valor / pow(10, N);
	
	printf("%f x 10^%d", A, N);
	
	
	//Quarto exercicio
	int salario;
	float comissao, total;
	
	printf("\nQual e o seu salario?: ");
	scanf("%d", &salario);	
	printf("E quanto voce vendeu este mes?: ");
	scanf("%f", &comissao);
	
	comissao = comissao*0.15;	
	total = salario+comissao;
	
	printf("Seu salario total e de %.2f", total);
	
	//Quinto exercicio
	float n1, n2, n3, n4;
	
	printf("\nEscreva o primeiro numero: ");
	scanf("%f", &n1);
	printf("Escreva o segundo numero: ");
	scanf("%f", &n2);
	printf("Escreva o terceiro numero: ");
	scanf("%f", &n3);
	printf("Escreva o quarto numero: ");
	scanf("%f", &n4);
	
	printf("A soma entre %f, %f, %f e %f e igual a: %f ", n1, n2, n3, n4, n1+n2+n3+n4);
	printf("\nA média entre %f, %f, %f e %f e igual a: %f ", n1, n2, n3, n4, (n1+n2+n3+n4)/4);
	printf("\nO produtorio entre %.2f, %.2f, %.2f e %.2f e igual a: %.2f ", n1, n2, n3, n4, n1*n2*n3*n4);
	
	//Sexto exercicio
	int diasidade, anos, meses, dias;
	
	printf("\nquantos dias de vida voce tem?: ");
	scanf("%d", &diasidade);
	
	anos = diasidade/365;
	diasidade = diasidade%365;
	meses = diasidade/30;
	dias = diasidade%30;
	
	printf("Então você tem %d anos, %d meses e %d dias de vida!", anos, meses, dias);
		
	
	//Setimo exercicio
	int raio;
	
	printf("\nInforme o valor do raio da esfera: ");
	scanf("%d", &raio);
	
	float volume = (4/3.0)*((3.14159)* pow(raio, 3));
	
	printf("O volume da esfera para o raio %d é igual a %f", raio , volume);
		
	//Oitavo exercicio
	int X1, X2, Y1, Y2;
	
	printf("\nInforme o valor de X1: ");
	scanf("%d", &X1);
	printf("\nInforme o valor de X2: ");
	scanf("%d", &X2);
	printf("\nInforme o valor de Y1: ");
	scanf("%d", &Y1);
	printf("\nInforme o valor de Y2: ");
	scanf("%d", &Y2);
	
	float coordenada = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
	
	return 0;
}
