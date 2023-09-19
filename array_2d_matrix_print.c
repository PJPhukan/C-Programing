//2D array or 2*3 matrix print

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     int array[2][3]={{1,2,3},{4,5,6}};
     array[1][1]=10;
     int i,j;
     for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
     }
     //scanf();
    
return 0;
}