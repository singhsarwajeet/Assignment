#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter the x radius:-");
    scanf("%f",&x);
    y=x*x*3.14;
    printf("Area of circle :-%f is %f",x,y);
    return 0;
}