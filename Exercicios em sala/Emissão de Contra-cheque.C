#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
	printf("Informe as horas trabalhadas: ");
	scanf ("%f", &horas);
	printf("Informe o valor por hora: ");
	scanf("%f", &valor);
	salario = horas*valor
	
	desconto_inss = calc_inss(salario);
	salario_base = salario - desconto_inss;
	printf("%f || %f", desconto_inss, calc_inss(salario));
	
	desconto_irpf = calc_irpf(salario_base);
	printf("\n%f || %f", desconto_irpf, calc_irpf(salario_base));
	
	
	return 0;
}
