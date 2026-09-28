#include <stdio.h>
#include <stdlib.h>


float calc_inss(float salario){
	if (salario <= 1412) return salario*0.075;
	else if (salario <= 2666.68) return salario*0.09;
	else if (salario <= 4000.03) return salario*0.12;
	else return salario*0.14;
}

float calc_irpf(float salario){
	if (salario <= 2259.20) return salario*0;
	else if (salario <= 2826.65) return (salario*0.075)-169.44;
	else if (salario <= 3751.05) return (salario*0.15)-381.44;
	else if (salario <= 4664.68) return (salario*0.225)-662.77;
	else return (salario*0.275)-896;
}

int main(int argc, char *argv[]) {

  // exercicios 7,8 e 9
	
	float horas, valor, salario, desconto_inss, salario_base, desconto_irpf;
	
	printf("======================================================");
	printf("\n               CALCULADORA DE SALARIO                ");
	printf("\n======================================================");
	printf("\nINFORME AS HORAS TRABALHADAS: ");
	scanf ("%f", &horas);
	printf("INFORME O VALOR POR HORA: ");
	scanf("%f", &valor);
	salario = horas*valor;
	
	desconto_inss = calc_inss(salario);
	salario_base = salario - desconto_inss;
	
	desconto_irpf = calc_irpf(salario_base);
	
	printf("\n======================================================");
	printf("\n    RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)    ");
	printf("\n======================================================");
	
	printf("\nSALARIO BRUTO (HORAS X VALOR):     R$ %.2f", salario);
	printf("\n(-) DESCONTO INSS:                 R$ %.2f", desconto_inss);
	printf("\n(-) DESCONTO IRPF:                 R$ %.2f", desconto_irpf);
	
	printf("\n------------------------------------------------------");
	printf("\nLIQUIDO A RECEBER:                 R$ %.2f", (salario - desconto_inss)-desconto_irpf);
	printf("\n======================================================");

  // exercicio 5

  int total, n100, n50, n10, n5, n2, n1;
	
	printf("\n\nExercicio 05:");
	printf("\nQuanto de dinheiro voce deseja sacar?: ");
	scanf("%d", & total);
	
	n100=total/100;
	total=total%100;
	
	n50=total/50;
	total=total%50;
	
	n10=total/10;
	total=total%10;
	
	n5=total/5;
	total=total%5;
	
	n2=total/2;
	total=total%2;
	
	n1=total;
	
	printf("Total de notas de 100: %d", n100);
	printf("\nTotal de notas de 50: %d", n50);
	printf("\nTotal de notas de 10: %d", n10);
	printf("\nTotal de notas de 5: %d", n5);
	printf("\nTotal de notas de 2: %d", n2);
	printf("\nTotal de notas de 1: %d", n1);
	
	return 0;
}
