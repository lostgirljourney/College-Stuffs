#include<stdio.h>
int main()
{
    int arr[1000],flag=0,n,i,search;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter data\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the key element: ");
    scanf("%d",&search);
    for(int i=0;i<n;i++)
    {
        if(search==arr[i])
        {
            flag=1;
        }  
    }
    if(flag==1)
    {
        printf("Element successfully found");
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}