#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia uma palavra ,
e verifique se ela é um palindomo */

// Entrada: ABBA
// Saída: eh um palindromo

int main(int argc, char *argv[]) {
	
	int i,j,palindromo;
	char palavra[30];
	printf("Digite a palavra: ");
	scanf("%s", &palavra);
	printf("\n");
	
	for(i=0; i<30 && palavra[i] != '\0'; i++);
	
	for(j=i-1, i=0; i<j; i++, j--){
		if (palavra[i] == palavra[j]) palindromo = 1;
		else palindromo = 0;
	}
	
	if(palindromo) printf("a palavra %s eh palindromo", palavra);
	else printf("a palavra %s nao eh um palindromo", palavra);
	
	return 0;
}
