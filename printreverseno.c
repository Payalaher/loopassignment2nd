//Write a C program to enter a number and print its reverse. 

#include <stdio.h>
int main() {
    int reverse = 0;
    
    int num=123456;

while (num > 0) {
        int rem = num % 10;  
        reverse = reverse * 10 + rem; 
        num = num / 10;    
    }



    printf("The reverse digit is: %d\n", reverse);

    return 0;
}