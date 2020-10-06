#include<stdio.h>
int reverse(int a)
{
    int temp=a,remainder=0,reverse=0;
    while (temp!=0)
    {
        remainder=temp%10;
        temp/=10;
        reverse=(reverse*10)+remainder;
    }
    printf("Reverse of %d is %d.",a,reverse);
}
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    reverse(a);
    return 0;
}