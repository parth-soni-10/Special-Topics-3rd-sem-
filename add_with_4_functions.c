//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int n1();
int n2();
int sum(float,float);

void main()
{
    float x=n1();
    float y=n2();
    float z =sum(x,y);
    printf("The sum of the 2 numbers is:- %f",z);
}
int n1()
{
    float a;
    printf("Enter a number:-");
    scanf("%f",&a);
    return a;
}

int n2()
{
    float b;
    printf("Enter a number:-");
    scanf("%f",&b);
    return b;
}
int sum(float c, float d)
{
    float f = c+d;
    return f;
}
