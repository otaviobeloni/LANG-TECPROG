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
	
	
	return 0;
}
