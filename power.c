// Write a C program to find power of a number using for loop.

#include<stdio.h>

int main(){

    int num, power,ans = 1;
    printf("enter the number:");
    scanf("%d",&num);

    printf("enter the power:");
    scanf("%d",&power);

    for( int i=1; i<=power; i++){
         ans=ans*num;
    }

    printf("the power of %d is: ",ans);

    return 0;

}