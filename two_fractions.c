#include <stdio.h>

typedef struct
{
    int num,denom;
}frac;
frac input1(frac x)
{
    printf("\n Numerator Fraction 1:-- ");
    scanf("%d",&x.num);
    printf("\n Denominator Fraction 1:-- ");
    scanf("%d",&x.denom);
    return x;
}
frac input2(frac y)
{
    printf("\n Numerator Fraction 2:-- ");
    scanf("%d",&y.num);
    printf("\n Denominator Fraction 2:-- ");
    scanf("%d",&y.denom);
    return y;
}
frac gcd_calc(frac x,frac y)
{
    int gcd;
    int a = (x.num*y.denom)+(y.num*x.denom);
    int b = x.denom*y.denom;
    for (int i = 1; i<=a && i<=b;i++)
    {
        if (a%i==0 && b%i==0)
            gcd = i;
    }
    printf("\n The added fraction of %d/%d and %d/%d is %d/%d",x.num,x.denom,y.num,y.denom,a/gcd,b/gcd);
}
int main()
{
    frac x,y;
    x=input1(x);
    y=input2(y);
    gcd_calc(x,y);
}
