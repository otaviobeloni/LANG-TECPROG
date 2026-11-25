#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Calculaposicao (int x1, int y1, int x2, int y2){
	return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

int main(int argc, char *argv[]) {
	
	// Exercicio 1
	
	printf("======== EXERCICIO 1 ========\n\n");
	
	int v[80], i;
	int quantp=0, quantn=0, quant0=0;
	
	for(i=0;i<80;i++){
		printf("Digite o %d valor: ",i+1);
		scanf("%d",&v[i]);
		
		if(v[i]>0){
			quantp++;
		}else if(v[i]<0) quantn++;
		
		else quant0++;
		
	}
	
	printf("Quantidade de positivos digitados: %d",quantp);
	printf("Quantidade de negativos digitados: %d",quantn);
	printf("Quantidade de 0s digitados: %d",quant0);
	
	// Exercicio 2
	
	printf("\n\n======= EXERCICIO 2 =======\n\n");
	
	int j, numero, fatorial=1;
	
	printf("Digite o numero que deseja saber o fatorial: ");
	scanf("%d",&numero);
	
	for(j=1;j<=numero;j++){
		fatorial = fatorial*j;
	}
	
	printf("O fatorial de %d eh: %d",numero,fatorial);
	
	// Exercicio 3
	
	printf("\n\n======= EXERCICIO 3 =======\n\n");
	
	int vet[20], k, soma=0;
	
	for(k=0;k<20;k++){
		printf("Digite o %d valor: ",k);
		scanf("%d",&vet[k]);
		
		if (k%2 == 0) soma = soma + vet[k];
	}
	
	printf("A soma dos valores em casas pares eh de: %d",soma);
	
	// Exercicio 4
	
	printf("\n\n======= EXERCICIO 4 =======\n\n");
	
	int num, l, quant52=0;
	
	for(l=0;l<15;l++){
		printf("Digite o %d numero: ",l+1);
		scanf("%d",&num);
		
		if (num%5 == 0 && num%2 != 0) quant52++;
			
	}
	
	printf("O total de numeros divisiveis por 5 e nao pares eh de: %d",quant52);
	

	// Exercicio 5
	
	printf("\n\n======= EXERCICIO 5 =======\n\n");
	
	int n, m, perfeito=0;
	
	printf("Digite o numero para saber se eh perfeito ou n: ");
	scanf("%d",&n);
	
	for(m=1;m<n;m++){
		if(n%m==0) perfeito = m + perfeito;
	}
	
	if (perfeito==n){
		printf("O numero %d eh perfeito!",n);
	}else printf("O numero %d nao eh perfeito!!",n);
	
	// Exercicio 6
	
	printf("\n\n======= EXERCICIO 6 =======\n\n");
	
	double x1,x2,y1,y2,d;
	
	printf("Digite o valor de X1: ");
	scanf("%lf",&x1);
	
	printf("Digite o valor de Y1: ");
	scanf("%lf",&y1);
	
	printf("Digite o valor de X2: ");
	scanf("%lf",&x2);
	
	printf("Digite o valor de Y2: ");
	scanf("%lf",&y2);
	
	d = Calculaposicao(x1,y1,x2,y2);
	
	printf("Distancia entre os pontos: %lf",d);
	
	// Exercicio 7
	
	printf("\n\n======= EXERCICIO 7 =======\n\n");
	
	int n100[100],o,algarismo,aux;
	
	for(o=0;o<100;o++){
		
		
		printf("Digite o %d valor: ",o+1);
		scanf("%d",&n100[o]);
		
		aux = n100[o];
		
		while(aux>0){
			algarismo = aux%10;
			
			if (algarismo == 7){
				printf("%d contem o numero 7!",n100[o]);
				break;
			}
			
			aux = aux/10;
		}
	}

	return 0;
}
