//Write a C program to calculate the commision of a salesman considering three regions X,Y and Z depending on the sales amount as follow
#include<stdio.h>
int main(){
    float sales,com=0;
    char area_of_code;//x,y,z;
    printf("Enter the area code (x,y,z)    :");
    scanf("%c\n",&area_of_code);
    printf("Enter the sales of amount  :");
    scanf("%f\n",&sales);
    // switch (area_of_code)
    // {
    // case 'x':{
     if(area_of_code=='x'){
        if(sales<1000){
            com=sales*0.10;
        }
        else{
            if(sales>=1000 && sales<5000){
                com=sales*0.12;
            }
            else{
                if(sales>=5000){
                    com=sales*0.15;
                }
            }
        }
}
    //     break;
    // }
    //case 'y':{
    else if(area_of_code=='y'){
       if(sales<1500){
            com=sales*0.10;
        }
        else{
            if(sales>=1500 && sales<7000){
                com=sales*0.12;
            }
            else{
                if(sales>=7000){
                    com=sales*0.15;
                }
            }
        }

        //break;
    }
    //case 'z':{
    else if(area_of_code=='z'){
         if(sales<1200){
            com=sales*0.10;
        }
        else{
            if(sales>=1200 && sales<6500){
                com=sales*0.12;
            }
            else{
                if(sales>=6500){
                    com=sales*0.15;
                }
            }
        }

       // break;
    }
    //default:
    else{
        printf("Not a valid Area code");
        //break;
    }
    printf("The commission of the salesman : %f\n",com);
    return 0;
}