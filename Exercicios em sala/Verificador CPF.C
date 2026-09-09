#include <stdio.h>
#include <stdlib.h>


int MultDigito(int dig, int valor){
	return dig*valor;	
}

int main(int argc, char *argv[]) {
	
	int c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, soma, resto, resto2;
	
	printf("VERIFICADOR DE CPF\n");
	printf("==================\n\n");
	printf("Informe o seu cpf: ");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", 
		&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &c10, &c11);
		
	soma = MultDigito(c1,10)+MultDigito(c2,9)+MultDigito(c3,8)+
			MultDigito(c4,7)+MultDigito(c5,6)+MultDigito(c6,5)+
			MultDigito(c7,4)+MultDigito(c8,3)+MultDigito(c9,2);
			
	soma *=10;
	resto =soma%11;
	if (resto == 10) resto = 0;
	printf("\nO primeiro numero da verificacao eh: %d\n", resto);
	
	soma = MultDigito(c1,11)+MultDigito(c2,10)+MultDigito(c3,9)+
			MultDigito(c4,8)+MultDigito(c5,7)+MultDigito(c6,6)+
			MultDigito(c7,5)+MultDigito(c8,4)+MultDigito(c9,3)+MultDigito(c10,2);
			
	soma *=10;
	resto2 =soma%11;
	if (resto2 == 10) resto2 = 0;
	printf("O segundo numero da verificacao eh: %d\n", resto2);
	
	printf("\n=========================\n");
	
	if (resto == c10 && resto2 == c11) printf("O CPF INFORMADO EH VALIDO");
	else printf("O CPF INFORMADO EH INVALIDO");
			
			
	return 0;
}
