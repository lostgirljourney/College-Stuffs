#include<stdio.h>
int gcd(int a,int b)
{
    int num,deno,remainder,gcd;
    if(a>b)
    {
        num=a; deno=b;
    }
    else
    {
        num=b; deno=a;
    }
    remainder = num%deno;
    while(remainder!=0)
    {
        num=deno;
        deno=remainder;
        remainder = num%deno;
    }
    gcd=deno;
    return gcd;
}
int lcm(int a,int b)
{
    int lcm;
    lcm = a*b / gcd(a,b);
    printf("GCD of %d & %d is %d\n",a,b,gcd(a,b));
    printf("LCM of %d & %d is %d\n",a,b,lcm);
}
int main()
{
    int a,b;
    printf("Enter any number: ");
    scanf("%d%d",&a,&b);
    lcm(a,b);
    return 0;
}