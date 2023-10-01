#include <stdio.h>

int main(){
	
	unsigned int num, rem;
	
	printf("Enter a three-digit number: \n");
	scanf("%u,", &num);
	
	while(num>0)
	{
		rem= num % 10;
		printf("%u", rem);
		num = num/10;
	}	
}
