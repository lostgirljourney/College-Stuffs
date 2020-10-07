#include<stdio.h>

//Function to Transpose a Matrix
void transpose(int p, int q)
{
    int i,j,A[100][100];
    printf("Enter data in matrix A\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nMatrix A\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("Transposed Matrix B\n");
    for(i=0;i<q;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d ",A[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int p,q;
    printf("Enter no. of rows & columns of matrix A: ");
    scanf("%d%d",&p,&q);
    transpose(p,q);
    return 0;
}