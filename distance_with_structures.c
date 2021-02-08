//WAP to find the distance between two points using structures and 4 functions.
#include <math.h>
struct dis
{
    float x,y;
}one,two;
int distance()
{
    float total=((one.y-one.x)*(one.y-one.x))+((two.y-two.x)*(two.y-two.x));
    total = sqrt(total);
    printf("The distance between the points is:-- %f",total);
}
int input1()
{
    printf("Enter the values x coordinate of point 1:--");
    scanf("%f",&one.x);
    printf("Enter the values y coordinate of point 1:--");
    scanf("%f",&one.y);
}
int input2()
{
    printf("Enter the values x coordinate of point 2:--");
    scanf("%f",&two.x);
    printf("Enter the values y coordinate of point 2:--");
    scanf("%f",&two.y);
}
int main()
{
    input1();
    input2();
    distance();
}
