#include<stdio.h>
#include<math.h>
float power(int M, int N)
{
    float result,deno;
    if(N<0)
    {
        deno=pow(M,(-N));
        result=(1/deno);
        printf("Result: %0.3f",result);
    }
    else if(N>0)
    {
        result=pow(M,N);
        printf("Result: %0.0f",result);
    }
    else
    {
        result=1;
        printf("Result: %0.0f",result);
    }
}
int main()
{
    int N,M;
    printf("Enter base & power: ");
    scanf("%d%d",&M,&N);
    power(M,N);
    return 0;
}