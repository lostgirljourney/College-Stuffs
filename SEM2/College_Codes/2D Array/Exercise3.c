#include<stdio.h>

//Read data from A & B matrices
void read(int P[][10], int r, int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&P[i][j]);
        }
    }
}

//Print A, B & resultant matrices
void write(int P[][10], int r, int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",P[i][j]);
        }
        printf("\n");
    }
}

//Multiply both A & B matrices and stored it into resultant matrix
void multi(int A[][10], int B[][10], int C[][10], int m, int q, int p)
{
    int i,j,k,sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            for(k=0;k<p;k++)
            {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
            sum = 0;
        }
    }
}

int main()
{
    int m,n,p,q,A[10][10],B[10][10],C[10][10];
    printf("Enter no. of rows & columns of matrix A: ");
    scanf("%d%d",&m,&n);
    printf("Enter no. of rows & columns of matrix B: ");
    scanf("%d%d",&p,&q);
    if(n==p)
    {
        printf("\nEnter data in matrix A\n");
        read(A,m,n);

        printf("Enter data in matrix B\n");
        read(B,p,q);

        printf("\nMatrix A\n");
        write(A,m,n);

        printf("Matrix B\n");
        write(B,p,q);

        printf("Resultant matrix\n");
        multi(A,B,C,m,q,p);
        write(C,m,q);
    }
    else
    {
        printf("Error! Unequal Dimensions (Columns of Matrix A != Rows of Matrix B)");
    }
    return 0;
}