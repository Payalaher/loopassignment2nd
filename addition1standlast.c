//Write a C program to find sum of first and last digit of a number. 

#include <stdio.h>

int main() {
    int num = 4568;
    int lastDigit = num % 10; 
    int firstDigit;

    while (num >= 10) {
        num = num / 10;
    }

    firstDigit = num; 
    int sum = firstDigit + lastDigit;

    printf("The sum of the first and last digit is: %d\n", sum);

    return 0;
}