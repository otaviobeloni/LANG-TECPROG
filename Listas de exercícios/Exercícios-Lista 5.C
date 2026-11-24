#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Calculaposicao(double x1, double y1, double x2, double y2){
    return(sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)));
}

int main(int argc, char *argv[]) {

// EXERCICIO 1

    printf("\n========== EXERCICIO 1 ==========\n");

    int v[100], i, j, aux;

    for(i=0;i<100;i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &v[i]);
    }

    for(i=0;i<99;i++){
        for(j=0;j<99;j++){
            if (v[j]>v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }

    for(i=99;i>=0;i--){
        printf("%d ",v[i]);
    }


// EXERCICIO 2

    printf("\n\n========== EXERCICIO 2 ==========\n");

    double nu;
    int exp;

    exp = 0;

    printf("Digite um numero para transformar em notacao cientifica: ");
    scanf("%lf",&nu);

    while(nu>=10){
        nu = nu/10;
        exp++;
    }

    printf("%.2lf x 10^%d",nu,exp);


// EXERCICIO 3

    printf("\n\n========== EXERCICIO 3 ==========\n");

    int numero;
    int vetor[32], k, n;

    n = 0;

    printf("Digite um numero para transformar em binario: ");
    scanf("%d",&numero);

    while (numero > 0){
        vetor[n] = numero%2;
        numero = numero/2;
        n++;
    }

    for (k = n -1;k>=0;k--){
        printf("%d",vetor[k]);
    }


// EXERCICIO 4

    printf("\n\n========== EXERCICIO 4 ==========\n");

    int vet[10], l;
    int maiorab;

    for (l=0;l<10;l++){
        printf("Digite o %d valor: ",l+1);
        scanf("%d", &vet[l]);
    }

    maiorab = vet[0];

    for (l=1;l<10;l++){
        maiorab = (maiorab + vet[l] + abs(maiorab - vet[l])) / 2;
    }

    printf("O maior eh: %d", maiorab);


// EXERCICIO 5

    printf("\n\n========== EXERCICIO 5 ==========\n");

    int v100[100], p, q, cont;

    for(p=0;p<100;p++){
        printf("Digite o %d numero: ",p+1);
        scanf("%d",&v100[p]);
    }
    
	for(p=0;p<100;p++){

    	cont=0;

    	for(q=1;q<=v100[p];q++){
     	   if(v100[p]%q==0) cont++;
    	}

    	if(cont == 2){
    	    printf("%d eh primo!\n",v100[p]);
   	    }

   	    if(v100[p]%2==0){
            printf("%d eh par!\n",v100[p]);
        }
	}


// EXERCICIO 6

    printf("\n\n========== EXERCICIO 6 ==========\n");

    double x1[10], y1[10], x2[10], y2[10], d[10];
    int r;

    for(r=0;r<10;r++){
        printf("Digite o X1: ");
        scanf("%lf", &x1[r]);

        printf("Digite o Y1: ");
        scanf("%lf", &y1[r]);

        printf("Digite o X2: ");
        scanf("%lf", &x2[r]);

        printf("Digite o Y2: ");
        scanf("%lf", &y2[r]);
    }

    for(r=0;r<10;r++){
        d[r] = Calculaposicao(x1[r],y1[r],x2[r],y2[r]);

        printf("Distancia entre os %d pontos: %lf\n",r+1,d[r]);
    }


// EXERCICIO 7

    printf("\n\n========== EXERCICIO 7 ==========\n");

    int n100[100], s;

    for(s=0;s<100;s++){
        printf("Digite o %d numero: ",s+1);
        scanf("%d",&n100[s]);
    }

    for(s=0;s<100;s++){

        if (s > 0 && n100[s-1] == n100[s]-1){
            printf("%d e %d\n",n100[s-1],n100[s]);
        }

        if (s < 99 && n100[s+1] == n100[s]+1){
            printf("%d e %d\n",n100[s],n100[s+1]);
        }

    }

    return 0;
}
