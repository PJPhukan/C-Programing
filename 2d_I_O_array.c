#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     int arr[2][3];
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Value of array index [%d][%d]   :",i,j);
            scanf("%d",&arr[i][j]);
        }
     }
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
     }
    //  printf();
    //  scanf();
    
return 0;
}