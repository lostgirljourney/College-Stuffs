#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    else if (a>b)
    {
        return gcd(a%b,b);
    }
    else
    {
        return gcd(a,b%a);
    }
}
int main()
{
    int a,b;
    printf("Enter two integer values: ");
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d is %d",a,b,gcd(a,b));
    return 0;
}
