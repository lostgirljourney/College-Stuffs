#include<stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int element, size, searchIndex;
    
    printf("Give the size of the array: ");
    scanf("%d", &size);

    int arr[size]; 

    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter the array element: ");
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to be searched: ");
    scanf("%d", &element);
    
    searchIndex = linearSearch(arr, size, element);
    
    if (searchIndex == -1)
    {
        printf("Element not found.");
    }
    else
    {
        printf("Index is %d.", searchIndex);
    }
    return 0;
}