   //sum of given number using array
   
   #include<stdio.h>
int main(){
    int a[100],i=0,sum=0,n;
    printf("how many terms :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum = sum + a[i]; 
    }
    printf("sum is %d",sum);
    printf("average is %d",sum/n);
    return 0;
}