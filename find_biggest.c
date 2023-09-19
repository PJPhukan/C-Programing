//Find biggest number in an array 
#include<stdio.h>
int main(){
 int a[100] , n , i, max ;
printf("how many");
scanf("%d" ,&n);
   // reading inputs
for(i=0 ; i<n ; i++)
{
scanf("%d" , &a[i] );
}
max = a[0];
for(i=1 ; i<n ;i++)
{
if(max<a[i])
{
max = a[i];
}
}
printf("maximum = %d", max);
return 0;
}
