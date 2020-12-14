#include<stdio.h>
int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    else
    {
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}
int main()
{
    int n,i,m=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid!\n");
    }
    else
    {
        printf("The series is as follows: ");
        for(i=1;i<=n;i++)
        {
            printf("%d ",fibonacci(m));
            m++;
        }
    }
    return 0;
}
