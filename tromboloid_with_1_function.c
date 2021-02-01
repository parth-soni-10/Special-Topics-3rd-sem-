//Write a program to find the volume of a tromboloid using one function
#include <stdio.h>
void main()
{
    float h,b,d,vol;
    printf("Enter the values for height , breadth and depth respectively:- ");
    scanf("%f %f %f",&h,&b,&d);
    vol = (0.333)*((h*d*b)+(d/b));
    printf("The volume of the given tromboloid is:- %f",vol);
}
