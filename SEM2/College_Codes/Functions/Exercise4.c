#include<stdio.h>
#include<math.h>
int convert(int binary)
{
    int temp=binary,remainder=0,decimal=0,i=0;
    while (temp!=0)
    {
        remainder=temp%10;
        temp/=10;
        decimal=decimal+remainder*pow(2,i);
        i++;
    }
    printf("Equivalent decimal number is %d.",decimal);
}
int main()
{
    int binary;
    printf("Enter binary number: ");
    scanf("%d",&binary);
    convert(binary);
    return 0;
}