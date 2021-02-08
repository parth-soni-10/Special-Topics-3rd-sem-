//WAP to find the sum of two fractions.
#include <stdio.h>

struct frac
{
    int num,denom;
}x,y;
int input1()
{
    printf("Enter the numerator for Fraction 1:-- ");
    scanf("%d",&x.num);
    printf("Enter the denominator for Fraction 1:-- ");
    scanf("%d",&x.denom);
}
int input2()
{
    printf("Enter the numerator for Fraction 2:-- ");
    scanf("%d",&y.num);
    printf("Enter the denominator for Fraction 2:-- ");
    scanf("%d",&y.denom);
}
int gcd_calc()
{
    int gcd;
    int a = (x.num*y.denom)+(y.num*x.denom);
    int b = x.denom*y.denom;
    for (int i = 1; i<=a && i<=b;i++)
    {
        if (a%i==0 && b%i==0)
            gcd = i;
    }
    printf("The added fraction is %d/%d",a/gcd,b/gcd);
}
int main()
{
    input1();
    input2();
    gcd_calc();
}
