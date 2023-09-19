#include <stdio.h>

#include <string.h>
union structure
{
    int roll;
    char name[40];
    float marks;
} u1;
int main()
{
    u1.roll = 1;
    u1.marks = 75.5;
    strcpy(u1.name,"Parag jyoti phukan");
   
   
    printf("Roll no of the student %d\n",u1.roll);
    printf("Marks no of the student %f\n",u1.marks);
    printf("Name of the student %s\n",u1.name);

    return 0;
}