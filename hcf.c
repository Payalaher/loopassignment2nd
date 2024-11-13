// Write a C program to find HCF (GCD) of two numbers.

#include<stdio.h>

int main(){

int n1,n2;

 printf("enter the no. \n");
    scanf("%d",&n1);

     printf("enter the no. \n");
    scanf("%d",&n2);

    int hcf=0;

    for(int i=1; i<=n1; i++){

        if(n1 % i == 0 && n2 % i == 0){

            hcf=i;

            
            

        }

       

    }

 printf("%d",hcf);

    return 0;

}