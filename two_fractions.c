#include <stdio.h>

typedef struct
{
    int num,denom;
}frac;
frac input1()
{
    frac x;
    printf("\n Numerator Fraction 1:-- ");
    scanf("%d",&x.num);
    printf("\n Denominator Fraction 1:-- ");
    scanf("%d",&x.denom);
    return x;
}
frac input2()
{
    frac y;
    printf("\n Numerator Fraction 2:-- ");
    scanf("%d",&y.num);
    printf("\n  Denominator Fraction 2:-- ");
    scanf("%d",&y.denom);
    return y;
}
int gcd_calc(int x,int  y)
{
    int gcd;
    for (int i = 1; i<=x && i<=y;i++)
    {
        if (x%i==0 && y%i==0)
            gcd = i;
    }
    return gcd;
}
frac add(frac x, frac y)
{
    frac sum;
    sum.num = (x.num*y.denom)+(y.num*x.denom);
    sum.denom= x.denom*y.denom;
    int h=gcd_calc(sum.num,sum.denom);
    sum.num=sum.num/h;
    sum.denom=sum.denom/h;
 return sum;
}
void printing(frac x , frac y, frac f)
{
    int a = (x.num*y.denom)+(y.num*x.denom);
    int b = x.denom*y.denom;
    printf("The added fraction of %d/%d and %d/%d is %d/%d",x.num,x.denom,y.num,y.denom,f.num,f.denom);
}
int main()
{
    frac x,y,f;
    x=input1(x);
    y=input2(y);
    f=add(x,y);
    printing(x,y,f);
}
