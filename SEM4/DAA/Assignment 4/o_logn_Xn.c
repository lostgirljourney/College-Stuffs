#include <stdio.h>

float power(float x, int n)
{
    float temp;
    if (n == 0)
    {
        return 1;
    }

    temp = power(x, n / 2);

    if (n % 2 == 0)
    {
        return (temp * temp);
    }
    else
    {
        if (n > 0)
        {
            return (x * temp * temp);
        }
        else
        {
            return ((temp * temp) / x);
        }
    }
}

int main()
{
    float x, res;
    int n;
    printf("Enter Base(X): ");
    scanf("%f", &x);
    printf("Enter Exponent(n): ");
    scanf("%d", &n);
    res = power(x, n);

    if (n >= 0)
    {
        printf("Value of X^n is %0.2f\n", res);
    }
    else
    {
        printf("Value of X^n is %f\n", res);
    }
    
    return 0;
}
