//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
int a[50],coun,sum=0;
int main()
{
    int d=countt();
    int b =input(d);
    display(b);
}
int countt()
{
    printf("Enter the count:--");
    scanf("%d",&coun);
    return coun;
}
int input(int coun)
{
    printf("Enter the Numbers:--");
    for(int i =0;i<coun;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i =0;i<coun;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int display()
{
    printf("The sum of the given numbers is:-- %d",sum);
}
