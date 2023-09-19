// Hear *ptr=value of a ;
//     ptr =address of a if ptr=&a;
//     a=value of a var
//     &a =address of  a var
//     &ptr=address of *ptr

#include<stdio.h>
int main(){
    int a, *ptr;
    a=7;
    ptr=&a;
    printf("Normal var stores %d at a location 0x%X\n",a,&a);
    printf("Pointer variable stores : 0x%X at location 0x%X\n",ptr,&ptr);
    printf("Using pointer to access the value of a normal var %d\n",*ptr);
    a+=10;
    printf("%d  at location %x\n",*ptr,ptr);
    *ptr+=20;
    printf("%d\n",a);
    return 0;
}