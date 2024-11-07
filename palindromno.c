// Write a C program to check whether a number is palindrome or not.

#include<stdio.h>
 int main(){

    int num;
    int reverse=0;

   

    printf("enter the no.");
    scanf("%d",&num);

     int originalnum=num;

while(num>0){
     int rem=num%10;
    reverse = reverse * 10 + rem;
    num = num / 10;

}

if(originalnum == reverse){
    printf("no. is palindrome");
}

else{
    printf("no. is not a palindrome");
}

    return 0;

 }