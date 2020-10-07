#include<stdio.h>
int main()
{
    int arr[100],n,i,high,low;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter data\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nElements in the array:");
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
    printf("Highest element = ");
    high = arr[0];
    for(int i=0;i<n;i++)
    {
        if(high<=arr[i])
        {
            high = arr[i];
        }
    }
    printf("%d\n",high);
    printf("Lowest element = ");
    low = arr[0];
    for(int i=0;i<n;i++)
    {
        if(low>=arr[i])
        {
            low = arr[i];
        }
    }
    printf("%d\n",low);
    return 0;
}