//Find the total price of the things with gst (if GST=18%)
#include<stdio.h>
float calculate_value();
/*void calculate_value();
int main(){
    
    calculate_value();
    return 0;
}
void calculate_value(){
    float value =0,orgvalue;
    printf("Enter the original value of the things   :");
    scanf("%f",&orgvalue);
    value=orgvalue+(0.18*orgvalue);
    printf("Total price of the things :%f",value);
}*/
int main(){
   // float value =0,orgvalue,s;
    float s;
    
    s=calculate_value();
    printf("Total price of the things :%f",s);
    return 0;
}
float calculate_value(){
    float value =0,orgvalue;
    printf("Enter the original value of the things   :");
    scanf("%f",&orgvalue);
    value=orgvalue+(0.18*orgvalue);
    //printf("Total price f the things :%f",value);
    return value;
}