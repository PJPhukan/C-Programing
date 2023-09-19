//Write a function to find squear root of a number ;
#include<stdio.h>
#include<math.h>
float squearroot(int n);
int main(){
    int n;
    printf("Enter the number  :");
    scanf("%d",&n);
    printf("Squear root of the number :%f",squearroot(n));
    return 0;
}
float squearroot(int n){
    float root;
    root=sqrt(n);
    return root;
}