#include <stdio.h>

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return power(x, n / 2) * power(x, n / 2);
    }
    else
    {
        return x * power(x, n / 2) * power(x, n / 2);
    }
}

int main()
{
    int x, n;
    float res;
    printf("Enter Base(X): ");
    scanf("%d", &x);
    printf("Enter Exponent(n): ");
    scanf("%d", &n);

    if (n >= 0)
    {
        res = power(x, n);
        printf("Value of X^n is %0.2f\n", res);
    }
    else
    {
        n = n * (-1);
        res = (power(x, n));
        res = 1 / res;
        printf("Value of X^n is %f\n", res);
    }
    return 0;
}
