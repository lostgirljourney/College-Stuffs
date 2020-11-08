#include<stdio.h>
#define SIZE 100
void binaryS(int arr[], int size, int item)
{
	int begin=0, end=size, mid=0, index=0, i=0, position=0;
	while((begin<end))
	{
		mid = ((begin+end)/2);
		if(item == arr[mid])
		{
			index = mid;
			position=index+1;
			break;
		}
		else if(item < arr[mid])
		{
			end =  mid - 1;
		}
		else if(item > arr[mid])
		{
			begin =  mid + 1;
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
	binaryS(arr, size, item);
	return 0;
}
