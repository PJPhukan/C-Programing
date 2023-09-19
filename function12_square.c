//Calculate the square of a number given by user

#include<stdio.h>
#include<math.h>
int Square(int n);
int main(){
    int n,ans;
    printf("Enter the number  :");
    scanf("%d",&n);
    ans=Square(n);
    printf("Square of the number :%d",ans);
    return 0;
}
int Square(int x){
    return pow(x,2);
}