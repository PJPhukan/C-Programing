//2D  Array Example

#include<stdio.h>
int main(){
    int i,j;
    int a[3][4]={{5,6,7,8},{10,20,30,40},{111,12,13,14}} ;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}