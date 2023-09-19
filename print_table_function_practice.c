//Write a function to print a table of a number 
#include<stdio.h>
int table(int n){
    int tab;
    for(int i=0;i<=10;i++){
        printf(" %d",i*n);
    
    
    }
}
int main(){
    int n,nt;
    printf("Enter the number :");
    scanf("%d",&n);
    table(n);
    return 0;
}