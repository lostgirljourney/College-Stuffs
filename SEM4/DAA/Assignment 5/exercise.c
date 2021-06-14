#include <stdio.h>
#include <limits.h>

void printOptimalParent(int s[][5], int i, int j)
{
    if (i == j)
        printf("M%d ", i);
    else
    {
        printf(" ( ");
        printOptimalParent(s, i, s[i][j]);
        printOptimalParent(s, s[i][j] + 1, j);
        printf(" ) ");
    }
}

int matrixChainOrder(int a[], int n, int s[][5])
{
    int i, j, k, l, cost;
    int m[n][n];

    for (i = 1; i < n; i++)
        m[i][i] = 0;

    for (l = 2; l < n; l++)
    {
        for (i = 1; i < n - l + 1; i++)
        {
            j = l + i - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++)
            {
                cost = m[i][k] + m[k + 1][j] + a[i - 1] * a[j] * a[k];
                if (cost < m[i][j])
                {
                    m[i][j] = cost;
                    s[i][j] = k;
                }
            }
        }
    }
    return m[1][n - 1];
}

int main()
{

    int arr[] = {10, 20, 50, 1, 100};
    int i, n = 5;
    int s[5][5];

    printf("Chain values are: ");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\nMinimum number of multiplications is %d\n", matrixChainOrder(arr, n, s));

    printOptimalParent(s, 1, n - 1);

    printf("\n");
    return 0;
}
