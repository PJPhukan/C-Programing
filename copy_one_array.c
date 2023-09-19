//Copy one array elment into another array
#include<stdio.h>
int main(){
    int arr1[100],arr2[100],i,n;
    printf("how many number :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Array1:");
    for(i=0;i<n;i++){
        printf("%d",arr1[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        arr2[i]=arr1[i];
        printf("  %d",arr2[i]);
    }
    // printf("array2:");
    // for(i=0;i<n;i++){
    //     printf("%d",arr2[i]);
    // }
    return 0;
}