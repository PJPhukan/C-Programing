#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a;
    FILE *fp;
    // char data[50] = "parag";
    fp = fopen("first.txt", "w");
    if (fp == NULL)
    {
        printf("failed open");
        // exit(1);
    }
    else
    {
        printf("file sussecfully open\n");
        typedef struct emplyee
        {
            char name[20];
            int number;
            int salary;
        } driver;

        int n;
        driver e1;
        printf("Enter how many driver details you want to print  :");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("Enter the  %d number driver name :", i);
            gets(e1.name);
            scanf("%[^\n]", e1.name);
            printf(" Enter the %d number driver car number :", i);
            scanf("%d", &e1.number);
            printf("Enter the  %d number driver total distance (Km) :", i);
            scanf("%d", &e1.salary);
        }
        fprintf(fp, "----------DRIVER DETAILS ----------\n \n");
        fprintf(fp, "---------------------------------------\n\n");
        fprintf(fp,"\n");
        fprintf(fp, "SL NO.     NAME      CAR NUMBER       TOTAL DISTANCE\n ");
        for (int i = 1; i <= n; i++)
        {

            fprintf(fp, " %d        %s          %d            %d\n", i, e1.name, e1.number, e1.salary);
            /* fprintf(fp," %d number person car number is : %d\n", i, e1.number);
             fprintf(fp," %d number person total distance (Km) is : %d Km\n", i, e1.salary);*/
        }
        /* ;
         printf("Enter the number ");
         scanf("%d",&a);
         if(strlen(data>0)){
             fprintf(data,fp);
         }
         fprintf(fp,"%d\n",a);
         fprintf(fp,"%s   %s","parag","jyoti");*/
        fclose(fp);
    }
    return 0;
}