#include<stdio.h>
#define SIZE 100
void linearS(int arr[], int size, int item)
{
	int position=0, index=0, i=0;
	while(i<size)
	{
		if(item == arr[i])
		{
			index=i;
			position=i+1;
			break;
		}
		else
		{
			position=0;
			index=0;
			i++;
		}
	}
	if(position<=0)
	{
		printf("Element isn't present here.");
	}
	else
	{
		printf("Element present here at position %d and at index number %d.", position, index);
	}
}

int main()
{
	int size, arr[SIZE], item, i;
	printf("Enter the size of array: \n");
	scanf("%d",&size);
	printf("Enter the data: \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the item to be searched: ");
	scanf("%d",&item);
	linearS(arr, size, item);
	return 0;
}
