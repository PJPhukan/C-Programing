///structure first program
#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav;
    char name[100];
};
struct student parag,jyoti,phukan;//Globel variable
void printd(){
    printf("%s",parag.name);
}
int main()
{
    // struct student parag,jyoti,phukan;//local variable
    parag.id=1;
    jyoti.id=2;
    jyoti.id=3;
    parag.marks=98;
    jyoti.marks=100;
    phukan.marks=99;
    parag.fav='p';
    jyoti.fav='j';
    phukan.fav='p';
    strcpy(parag.name,"Parag jyoti phukan");
    strcpy(jyoti.name,"Jyoti phukan");
    strcpy(phukan.name,"Phukan p.j.");
    printf("Parag got marks %d\n",parag.marks);
    printf("Parag  id %d\n",parag.id);
    printf("Parag favorite %c\n",parag.fav);
    printf("Parag full name %s\n",parag.name);
    printf("Jyoti got marks %d\n",jyoti.marks);
    printf("Jyoti  id %d\n",jyoti.id);
    printf("Jyoti favorite %c\n",jyoti.fav);
    printf("Jyoti full name %s\n",jyoti.name);
    printf("Phukan got marks %d\n",phukan.marks);
    printf("Phukan  id %d\n",phukan.id);
    printf("Phukan favorite %c\n",phukan.fav);
    printf("Phukan full name %s\n",phukan.name);
    printd();
return 0;
}