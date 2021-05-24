#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void countSort(int A[], int size)
{
    int maxSize, i, max = INT_MIN, min = INT_MAX;
    
    for(int i = 0; i < size; i++)
    {
        if(max < A[i])
            max = A[i];
        if(min > A[i])
            min = A[i];
    }
    
    int range = max-min+1, count[range], output[size];
       
    for(i = 0; i < range; i++)
        count[i] = 0;

    for (int i = 0; i < size; i++)
        count[A[i] - min]++;
 
    for (int i = 1; i < range; i++)
        count[i] += count[i - 1];
        
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[A[i] - min] - 1] = A[i];
        count[A[i] - min]--;
    }
 
    for (int i = 0; i < size; i++)
        A[i] = output[i];

    return;
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter array element (%d): ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Unsorted array: ");
    printArray(A, n);
    countSort(A, n);
    printf("Sorted array: ");
    printArray(A, n);

    return 0;
}