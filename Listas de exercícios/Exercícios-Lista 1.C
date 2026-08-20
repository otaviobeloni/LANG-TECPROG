#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	
	//Primeiro Exercicio
	int primeiro, segundo, aux;
	
	printf("PRIMEIRO EXERCICIO");
	
	printf("\nEscreva o primeiro numero: ");
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
	
	printf("\n\nSEGUNDO EXERCICIO");
	
	printf("\nInforme um valor do tipo double para mostrar em notacao cientifica: ");
	scanf("%lf", &valor);
	
	N = (int) log10(valor);
	A = valor / pow(10, N);
	
	printf("%f x 10^%d", A, N);
	
	
	//Terceiro exercicio
	int n, resultado, bit64, bit32, bit16, bit8, bit4, bit2;
	
	printf("\n\nTERCEIRO EXERCICIO");
	
	printf("\nInforme um valor para transformar em binario (ate 127): ");
	scanf("%d", &n);
	
	bit64 = n%2;
	resultado = n/2;
	
	bit32 = resultado%2;
	resultado = resultado/2;
	
	bit16 = resultado%2;
	resultado = resultado/2;
	
	bit8 = resultado%2;
	resultado = resultado/2;
	
	bit4 = resultado%2;
	resultado = resultado/2;

	bit2 = resultado%2;
	resultado = resultado/2;
	
	
	printf("O numero %d em binario e igual a : %d%d%d%d%d%d%d", n, resultado%2, bit2, bit4, bit8, bit16, bit32, bit64);

	
	//Quarto exercicio
	int salario;
	float comissao, total;
	
	printf("\n\nQUARTO EXERCICIO");
	
	printf("\nQual e o seu salario?: ");
	scanf("%d", &salario);	
	printf("E quanto voce vendeu este mes?: ");
	scanf("%f", &comissao);
	
	comissao = comissao*0.15;	
	total = salario+comissao;
	
	printf("Seu salario total e de %.2f", total);


	//Quinto exercicio
	float n1, n2, n3, n4;
	
	printf("\n\nQUINTO EXERCICIO / (SOMA MEDIA E PRODUTORIO)");
	
	printf("\nEscreva o primeiro numero: ");
	scanf("%f", &n1);
	printf("Escreva o segundo numero: ");
	scanf("%f", &n2);
	printf("Escreva o terceiro numero: ");
	scanf("%f", &n3);
	printf("Escreva o quarto numero: ");
	scanf("%f", &n4);
	
	printf("A soma entre %.2f, %.2f, %.2f e %.2f e igual a: %.2f ", n1, n2, n3, n4, n1+n2+n3+n4);
	printf("\nA media entre %.2f, %.2f, %.2f e %.2f e igual a: %.2f ", n1, n2, n3, n4, (n1+n2+n3+n4)/4);
	printf("\nO produtorio entre %.2f, %.2f, %.2f e %.2f e igual a: %.2f ", n1, n2, n3, n4, n1*n2*n3*n4);


	//Sexto exercicio
	int diasidade, anos, meses, dias;
	
	printf("\n\nSEXTO EXERCICIO");
	
	printf("\nquantos dias de vida voce tem?: ");
	scanf("%d", &diasidade);
	
	anos = diasidade/365;
	diasidade = diasidade%365;
	meses = diasidade/30;
	dias = diasidade%30;
	
	printf("Entao voce tem %d anos, %d meses e %d dias de vida!", anos, meses, dias);
		
	
	//Setimo exercicio
	int raio;
	
	printf("\n\nSETIMO EXERCICIO");
	
	printf("\nInforme o valor do raio da esfera: ");
	scanf("%d", &raio);
	
	float volume = (4/3.0)*((3.14159)* pow(raio, 3));
	
	printf("O volume da esfera para o raio %d e igual a %f", raio , volume);


	//Oitavo exercicio
	int X1, X2, Y1, Y2;
	
	printf("\n\nOITAVO EXERCICIO");
	
	printf("\nInforme o valor de X1: ");
	scanf("%d", &X1);
	printf("\nInforme o valor de Y1: ");
	scanf("%d", &Y1);
	printf("\nInforme o valor de X2: ");
	scanf("%d", &X2);
	printf("\nInforme o valor de Y2: ");
	scanf("%d", &Y2);
	
	float coordenada = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
	
	printf("A coordenada e igual a: %f", coordenada);
	
	return 0;
}
