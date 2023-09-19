//Write a function to convert calsius to fahrenheit and  fahrenheit to calsius
#include<stdio.h>
float Convert(float );
int main(){
    float n,c;
    char ch;
    // printf("Enter 'c'for f-->c && 'f'for c-->f :");
    // scanf("%c",&ch);
    printf("Enter the degree  :");
    scanf("%f",&n);
    
    printf(" Required answer  is :%f",Convert(n));
    return 0;
} 
float Convert(float x){
    //  char ch;
    // if(ch=='c'){
    //     float cal= (5*(x-32))/9;
    //     return cal;
    // }
    // else if (ch=='f'){
        float far=(9/5)*x+32;
        return far;
    //}
}

