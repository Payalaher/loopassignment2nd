// Write a C program to calculate factorial of a number.

#include<stdio.h>

int main(){


    int n;
    int factotial=1;

    printf("enter the no.: \n");
scanf("%d",&n);

// for( int i=1; i<=n; i++){

//  factotial = factotial * i;

// }


while(n>=1){

     factotial = factotial * n;

     n--;


}


printf("the factorial of %d is",factotial);

    return 0;
}