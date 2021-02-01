//Write a program to add two user input numbers using one function.
#include<stdio.h>

void main()
{
  float a,b,c;
  printf("Enter 2 numbers:-");
  scanf("%f %f", &a, &b);
  c = a+b;
  printf("The addition of %f and %f is :- %f",a,b,c);
}
