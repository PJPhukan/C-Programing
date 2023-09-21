//calculator using c 

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a ,b ;
    char ch;
    printf("enter the character  ");
    scanf("%c",&ch);
    printf("Enter the a and b:  ");
    scanf("%d %d",&a,&b);
 
    switch (ch)
    {
    case '+':
        
        printf("sum = %d",a+b);
        break;
    case '-':
       
        printf("subtraction = %d",a-b);
        break;
    case '*':
      
        printf("multiplication = %d",a*b);
        break;
    case '/':
       
        printf("division = %f",a/b);
        break;
    
    default:
        printf("Invalid operator");
        break;
    }
    return 0;
}