#include<stdio.h>
#include<stdlib.h>

// Main Function of the upc.c file
int main(){
    int firstSum = 0, secondSum = 0, remainder, total;
    char upc_str[12];
    int counter = 0;

    printf("Enter the 11-digit Universal Product Code: ");
    scanf("%s", &upc_str);
    printf("\nUPC: %s\n", upc_str);
    long int upc = atol(upc_str);
    

    while(upc != 0){
        remainder = upc % 10;
        // firstSum adding odd numbers
        if((counter+1) % 2 != 0){
            firstSum = firstSum + remainder;
        }
        // secondSum adding even numbers
        else{
            secondSum = secondSum + remainder;
        }
        upc = upc / 10;
        counter += 1;
    }

    total = (firstSum * 3) + secondSum;
    total = total - 1;
    total = total % 10;
    total = 9 - total;

    printf("Check Digit is %d\n\n", total);
    
    return 0;
}