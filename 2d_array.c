//2D array practice

#include<stdio.h>
int main(){
    int arr[2][4]={{2,3,4,5},{6,7,8,9}};
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}