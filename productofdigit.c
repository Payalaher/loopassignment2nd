// . Write a C program to calculate product of digits of a number. 

#include <stdio.h>
int main() {
    int product = 1;
    
    int num=12345;


   while (num > 0) {
       int rem = num % 10; 
        product = product * rem;       
        num = num / 10; 
   }


    printf("The product of the digit is: %d\n", product);

    return 0;
}