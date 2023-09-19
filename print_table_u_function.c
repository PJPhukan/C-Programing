// Print a table 
#include<stdio.h>
void printTable(int n);
int main(){
    int n;
    printf("Enter the number   :");
    scanf("%d",&n);
    printTable( n);
    return 0;
}
void printTable(int n){
    for(int i=0;i<=10;i++){
        printf("%d\t",i*n);
    }
}
