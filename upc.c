#include<stdio.h>
#include<stdlib.h> // This header file is for the atol() function

// Main Function of the upc.c file
int main(){
    // Initialize and declare the needed variables
    int firstSum = 0, secondSum = 0, remainder, total;
    // An array that stores the UPC code: 11 digits + 1 for the null terminator
    char upc_str[12];

    // Enter the 11 digit universal product code.
    // The program receives the input as string
    printf("Enter the 11-digit Universal Product Code: ");       
    scanf("%s", &upc_str);                                     
    printf("\nUPC: %s\n", upc_str);
    
    // The atol function is used to convert the character string into a long value
    long int upc = atol(upc_str);
    
    // Loop: while upc is not 0
    int counter = 1;
    while(upc != 0){
        remainder = upc % 10;
        // firstSum adding odd numbers
        if((counter) % 2 != 0){
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