#include <stdio.h>

int main(){
	
	unsigned int num, rem;
	
	printf("Enter a two-digit number: \n");
	scanf("%u,", &num);
	
	if(num<99)
	{
		//prints the first remainder which will be the last digit
		rem= num % 10;
		printf("%u", rem);
		
		//prints the rest remainder which will be the first digit
		num = num/10;
		printf("%u", num); 
	}
	else{
		printf("Please enter a two-digit number only");
	}	
	return 0;	
}
