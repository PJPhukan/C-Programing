//Write a function to calculate percentage of a student from marks in science ,math,chem.
#include<stdio.h>
float Percentage(int a,int b, int c){
    return (a+b+c)/3;
}
int main(){
    int ch,mh,sc;
    printf("Enter mark chemistry,science,math");
    scanf("%d %d %d",&ch,&mh,&sc);
    printf(" the percentage is %f",Percentage(ch,mh,sc));
    return 0;
}