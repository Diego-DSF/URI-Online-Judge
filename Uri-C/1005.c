#include<stdio.h>

int main(){

	double media,a,b;
	
	scanf("%lf%lf",&a,&b);
	
	media = ((a*3.5)+(b*7.5))/11.0;
	
	printf("MEDIA = %.5lf",media);
	
	printf("\n");
	return 0;
}