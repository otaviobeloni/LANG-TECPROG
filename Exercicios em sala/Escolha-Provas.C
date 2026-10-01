#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Função que verifica se é impar e divisivel por 5:
int imp5(int n){
	if (n%2 == 1 && n%5 == 0){
		return 1;
	}
	return 0;		
}

// Funções para executar os exercicios da prova:

void exec1(){
	
}
void exec2(){
	
}
void exec3(){
	
}
void exec4(){
	int n1,n2,n3,n4;
	printf("Digite os valores com um espacamento entre eles: ");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	if (imp5(n1)){
		printf("%d ",n1);
	}
	if (imp5(n2)){
		printf("%d ",n2);
	}
	if (imp5(n3)){
		printf("%d ",n3);
	}
	if (imp5(n4)){
		printf("%d ",n4);
	}	
}
void exec5(){
	int cap, itens, tot;
	printf("\nQual a capacidade de suas mochilas?: ");
	scanf("%d", &cap);
	printf("Quantos itens voce tem?: ");
	scanf("%d", &itens);
	
	tot = itens/cap;
	
	printf("O total de mochilas preenchidas totalmente ficou em: %d", tot);
}
void exec6(){
	
}
void exec7(){
	
}
void exec8(){
	
}
void exec9(){
	
}

int main(int argc, char *argv[]) {
	
	int prova, ex;
	
	printf("\n--------------------------");
	printf("\n      MENU DE PROVAS      ");
	printf("\n--------------------------");
	printf("\n\nQual prova voce deseja: 1|2|3 ?: ");
	scanf("%d", &prova);
	
	switch(prova){
		
		case 1:
			printf("\n--------------------------");
			printf("\n         PROVA 1          ");
			printf("\n--------------------------");
			printf("\n\nQual exercicio voce deseja?: ");
			scanf("%d", &ex);
			if (ex == 1) exec1();
			else if (ex == 2) exec2();
			else if (ex == 3) exec3();
			else printf("Esse exercicio nao existe!!");
			break;
		case 2:
			printf("\n--------------------------");
			printf("\n         PROVA 2          ");
			printf("\n--------------------------");
			printf("\n\nQual exercicio voce deseja?: ");
			scanf("%d", &ex);
			if (ex == 1) exec4();
			else if (ex == 2) exec5();
			else if (ex == 3) exec6();
			else printf("Esse exercicio nao existe!!");
			break;
		case 3:
			printf("\n--------------------------");
			printf("\n         PROVA 3          ");
			printf("\n--------------------------");
			printf("\n\nQual exercicio voce deseja?: ");
			scanf("%d", &ex);
			if (ex == 1) exec7();
			else if (ex == 2) exec8();
			else if (ex == 3) exec9();
			else printf("Esse exercicio nao existe!!");
			break;
		default:
			printf("Opção invalida, voce precisa escolher entre as provas 1, 2 e 3!");
			break;		
	}
	
	return 0;
}
