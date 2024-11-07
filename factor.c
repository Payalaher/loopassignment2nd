// Write a C program to find all factors of a number.

#include<stdio.h>

int main(){

int num;

printf("enter the no.");
scanf("%d",&num);

for(int i=1; i<=num; i++){
    if(num %i ==0){
        printf("%d \t",i);
    }
}

printf("\n");


return 0;

}