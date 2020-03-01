#include<stdio.h>

int main(){

	int num_func,horas_trab;
	double valor_hora,salario;
	
	scanf("%d%d%lf",&num_func,&horas_trab,&valor_hora);
	
	salario = horas_trab * valor_hora;
	
	printf("NUMBER = %d\n",num_func);
	printf("SALARY = U$ %.2lf",salario);
	
	
	printf("\n");
	return 0;
}