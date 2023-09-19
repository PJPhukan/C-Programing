// The number is perfact or not Using Funtion

#include<stdio.h>
int is_perfact(int n);
int main(){
    int i,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<100;++i){
        if(is_perfact(i)==1){
            printf("%d",i);
        }
        return 0;

    }

}
int is_perfact(int n){
    int i,sum=0;
    for(i=1;i<n/2;++i){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        return 1;
    }
    else{
        return 0;
    }
}