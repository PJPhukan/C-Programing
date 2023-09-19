//Dynamic allocation using malloc function
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     int *ptr,i,n;
     printf("Enter the number of element");
     scanf("%d",&n);
     printf("Entered element are %d\n",n);
     ptr=(int*)malloc(n*sizeof(int));
     if(ptr==NULL){
        printf("Memory not  allocated\n");
        exit(0);
     }
     else{
        for(i=0;i<n;i++){
           // ptr[i]=i+1;
           scanf("%d",&ptr[i]);
        }
        printf("The elements are :");
        for(i=0;i<n;++i){
            printf("%d,",ptr[i]);
        }
        printf("\n");
        printf("Revese print  :");
        for(i=n-1;i>=0;i--){
             printf("%d,",ptr[i]);
        }
     }
    
return 0;
}