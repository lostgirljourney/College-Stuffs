#include<stdio.h>

//Function to add matrix
void matrix_adding(int m, int n, int p, int q)
{
    int i,j,A[100][100],r,c,x,y,B[100][100],C[100][100];
    printf("\nEnter data in matrix A\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter data in matrix B\n");    
    for(x=0;x<p;x++)
    {
        for(y=0;y<q;y++)
        {
            scanf("%d",&B[x][y]);
        }
    }
    printf("\nMatrix A\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B\n");
    for(x=0;x<p;x++)
    {
        for(y=0;y<q;y++)
        {
            printf("%d ",B[x][y]);
        }
        printf("\n");
    }
    printf("Resultant matrix \n");
    for(r=0;r<p;r++)
    {
        for(c=0;c<q;c++)
        {
            C[r][c] = A[r][c] + B[r][c];
            printf("%d ",C[r][c]);
        }
        printf("\n");
    }
}

int main()
{
    int m,n,p,q;
    printf("Enter no. of rows & columns of matrix A: ");
    scanf("%d%d",&m,&n);
    printf("Enter no. of rows & columns of matrix B: ");
    scanf("%d%d",&p,&q);
    if(m==p && n==q)
    {
        matrix_adding(m,n,p,q);     //Function Calling
    }
    else
    {
        printf("Error! Unequal Dimensions...");
    }
    return 0;
}