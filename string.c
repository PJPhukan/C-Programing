#include<stdio.h>
int main(){
    char src[100] , dest[100] ;
    int i,j,len;
    i=j=0;
    printf("Enter src string  :");
    scanf("%s",src);
     printf("Enter dest string  :");
    scanf("%s",dest);
     while(dest[i] != '\0'){
        i++;
     } 
     while (src[j] != '\0')
     {
        dest[i] = src[j];
        i++;
        j++;
     }
     dest[i]='\0';
     printf("%s\n",dest);
     return 0;
     
}