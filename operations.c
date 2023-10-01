#include <stdio.h>

int main(){
	double a ,b , sum, difference, product, quotient;
	printf("Enter two numbers:");
	scanf("%lf %lf",&a , &b);
	
	sum = a + b;
	difference = a - b;
	product = a * b;
	quotient = a/b;
	printf("sum = %lf\n",sum);
	printf("difference = %lf\n",difference);
	printf("product = %lf\n",product);
	printf("quotient = %lf",quotient);
	
	return 0;
}

