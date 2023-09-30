#include<stdio.h>

// Main Function of the upc.c file
int main(){
    int firstSum = 0, secondSum = 0, remainder, total;
    long int upc;
    int counter = 0;

    printf("Enter the 11-digit Universal Product Code: ");
    scanf("%ld", &upc);
    printf("\nUPC: %ld\n", upc);

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