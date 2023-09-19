//Array input from user and print all element
 
#include<stdio.h>
int main(){
    int marks[10],i;
    for ( i=0;i<10;i++){
        scanf("%d",&marks[i]);
    }
    for(i=0;i<10;i++){
        printf("marks of  %d index  %d\n",i,marks[i]);
    }
    return 0;
}