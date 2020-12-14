#include<stdio.h>
int reverse(int a)
{
    static int r=0,b=1;
    if(a>0)
    {
        reverse(a/10);
        r+=(a%10)*b;
        b*=10;
    }
    return r;
    
}
int main()
{
    int a;
    printf("Enter any integer number: ");
    scanf("%d",&a);
    printf("Reverse of %d is %d\n",a,reverse(a));
    return 0;
}
