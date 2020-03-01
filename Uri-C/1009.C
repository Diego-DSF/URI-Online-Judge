#include<stdio.h>

int main(){

	char nome[20];
	double salario_fixo,salario,valor_vendas;
	
	
	scanf("%s %lf %lf",&nome,&salario_fixo,&valor_vendas);
	
	salario = salario_fixo + (valor_vendas * 0.15);
	
	printf("TOTAL = R$ %.2lf",salario);
	
	printf("\n");
	return 0;
}