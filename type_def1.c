//Typedef syntax
// typedef <previous_name><alians_name> 

#include<stdio.h>
#include<string.h>
 typedef struct student
{
    int id;
    int marks;
    char fav;
    char name[100];
} std;
int main()
{
    std s1,s2;
    s1.id=2;
    s2.marks=39;
    printf("id of s1 %d\n",s1.id);
    printf("id of s1 %d\n",s2.marks);

    //int * a, b;//hera compiler take 'a' is a  integer pointer and 'b' is a integer
    typedef int* pointer;
    pointer a,b;
    int c=10;
    a=&c;
    b=&c;
    printf("%d\n",*a);
    printf("%d\n",*b);
    /* typedef unsigned long ul;
     ul var1,var2;
     typedef int integer;
     integer a=10;
     printf("Value of a =%d",a);
     */
    
return 0;
}