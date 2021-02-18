//WAP to find the sum of n fractions.
#include <stdio.h>
struct fracs
{
    int num,den;
}f;
int main()
{
    struct fracs a[100];
    int n;
    printf("Enter the number of fractions:- ");
    scanf("%d",&n);
    input(a,n);
    addition(a,n);
}
int input(struct fracs a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the numerator for fraction %d :- ",i+1);
        scanf("%d",&a[i].num);
        printf("Enter the denominator for fraction %d :-    ",i+1);
        scanf("%d",&a[i].den);
    }
}
int addition(struct fracs a[], int n)
{
    struct fracs sum;
    sum.num = 0;
    sum.den = a[0].den;
    for(int i=0;i<n;i++)
    {
        sum.den = ((a[i].den*sum.den)/gcd(a[i].den,sum.den));
    }
    for(int i=0;i<n;i++)
    {
        sum.num = sum.num + (a[i].num)*(sum.den/a[i].den);
    }
    int hcf = gcd(sum.num,sum.den);
    sum.num = sum.num/hcf;
    sum.den = sum.den/hcf;
    printf("The sum of the fractions is :- %d/%d",sum.num,sum.den);
}
int gcd(int a, int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
