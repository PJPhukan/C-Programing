//Sum of n natural numbers
#include<stdio.h>
int sum(int n);
int main(){
    int n ;
    printf("Enter the number   :");
    scanf("%d",&n);
    printf("sum of %d number :%d ",n,sum(n));
    return 0;
}
int sum(int n){
    int s=1;
    for(int i=1;i<=n;i++){
        s=s+i;
    }
    return s;
}
