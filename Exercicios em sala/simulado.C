#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

  //primeiro exercicio

	float a, b, c, d, aux;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &a);
	printf("Digite o segundo valor: ");
	scanf("%f", &b);
	printf("Digite o terceiro valor: ");
	scanf("%f", &c);
	printf("Digite o quarto valor: ");
	scanf("%f", &d);
	
	aux = a;
	a = c;
	c = d;
	d = b;
	b = aux;
	
	printf("A nova ordem dos valores ficou: %f,%f,%f,%f",a,b,c,d);

  //segundo exercicio

	int qa;
	float pa, ve, vpa, pvp;
	
	printf("Qual eh o valor patrimonial da empresa: ");
	scanf("%f", &ve);
	
	printf("Quantas acoes disponiveis a empresa tem?: ");
	scanf("%d",& qa);
	
	vpa = ve/qa;
	
	printf("Qual o preco por acao?: ");
	scanf("%f", &pa);
	
	pvp = pa/vpa;
	
	if (pvp < 0.0)printf("seu P/Vp eh %f e sua classificacao eh pessima", pvp);
	
	else if (pvp >= 0.0 && pvp < 0.8) printf("seu P/Vp eh %f e sua classificacao eh otima", pvp);
	
	else if (pvp >= 0.8 && pvp <= 1.2) printf("seu P/Vp eh %f e sua classificacao eh indiferente", pvp);
	
	else if (pvp > 1.2 && pvp <= 2.0) printf("seu P/Vp eh %f e sua classificacao eh boa", pvp);
	
	else printf("seu P/Vp eh %f e sua classificacao eh ruim", pvp);
	
	return 0;
}
