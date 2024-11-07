//Write a C program to calculate sum of digits of a number. 

#include <stdio.h>
int main() {
    int sum = 0;
    
    int num=123456;


   while (num > 0) {
       int rem = num % 10; 
        sum = sum + rem;       
        num = num / 10; 
   }


    printf("The sum of the digit is: %d\n", sum);

    return 0;
}