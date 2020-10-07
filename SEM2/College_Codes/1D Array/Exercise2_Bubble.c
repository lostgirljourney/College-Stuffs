#include<stdio.h>
int main()
{
    int i,j,temp;
    int arr[10] = {12,78,-9,19,45,88,5,15,-100,29};
    for(i=0;i<10-1;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted Array is");
    for(i=0;i<10;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}