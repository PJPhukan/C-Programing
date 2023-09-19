//Write a functions to calculate area os square ,a circle and a rectangle(area of rectangle=l*b      and        area of a circle = 3.14*r**r)
#include<stdio.h>
#include<math.h>
float AreaRectangle(float a, float b);
float AreaCircle(float r);
float AreaSqueare(float c);
int main(){
    float a,b,r,side,AS,AC,AR;
    printf("Enter l and b of the rectangle");
    scanf("%f %f",&a,&b);
    printf("Enter the radius of the circle");
    scanf("%f",&r);
    printf("Enter the side of the squeare");
    scanf("%f",&side);
    AC=AreaCircle(r);
    printf("Area of circle  =  %f\n",AC);
    AR= AreaRectangle(a,b);
    printf("Area of rectangle  =  %f\n",AR);
    AS=AreaSqueare(side);
    printf("Area of squeare =  %f\n",AS);
    return 0;
}
float AreaRectangle(float m, float n){
    return m*n;
}
float AreaCircle(float x){
    return 3.14*x*x;
}
float AreaSqueare(float c){
    return c*c;
}

