//Write a C program to enter a number and print it in words.
#include<stdio.h>

int main(){

    int num;

    int reverse=0;

    printf("enter the no. \n");
    scanf("%d",&num);

while (num > 0) {
        int rem = num % 10;  
        reverse = reverse * 10 + rem; 
        num = num / 10;   

    }

while(reverse > 0 ){
    int lastdigit = reverse % 10 ;

      switch(lastdigit){
    
    case 0:
    printf("zero ");
    break;

      case 1:
    printf("one ");
    break;

    case 2:
    printf("two ");
    break;

    case 3:
    printf("three ");
    break;

    case 4:
    printf("four ");
    break;

    case 5:
    printf("five ");
    break;

    case 6:
    printf("six ");
    break;

    case 7:
    printf("seven ");
    break;

    case 8:
    printf("eight ");
    break;

    case 9:
    printf("nine ");
    break;

    default:
    printf("you enter the wrong choice\n");
   
    
}

reverse = reverse / 10;

}




return 0;

}