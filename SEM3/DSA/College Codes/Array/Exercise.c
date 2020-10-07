#include<stdio.h>
#include<stdlib.h>

int main()

{
	int n,arr[n],num,size,i,j=1,pos=0,ele=0;
	printf("Enter the size: ");
	scanf("%d",&n);
	size=n;
	printf("Enter the elements: ");
	for(i = 0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(1)
	{
		printf("Operations:\n");
		printf("1. Insert data at specified position.\n");
		printf("2. Delete data from specified position.\n");
		printf("3. Reverse all the elements of the array.\n");
		printf("4. Traverse the array.\n");
		printf("5. Exit.\n");
		printf("Enter your choice(1-5): ");
		scanf("%d",&num);
		switch(num)
		{
			case 1:{
						printf("Enter the position : ");
						scanf("%d",&pos);
						int ele;
						printf("Enter the element : ");
						scanf("%d",&ele);
						if(pos>size)
						printf("Invalid Input\n");
						else
						{
							for (i = size - 1; i >= pos - 1; i--)
								arr[i+1] = arr[i];
							
							arr[pos-1] = ele;
							
							printf("Array after insertion is: ");
							
							for (i = 0; i <= size; i++)
							{
								printf("%d ", arr[i]);
								j+=1;
							}
							printf("\n");
						}
						size=j;
						j=1;
						break;
					}
					
			case 2: {
						printf("Enter the position : ");
						scanf("%d", &pos);
						if (pos>=size+1)
						{
							printf("Deletion not possible.\n");
						}
						else
						{
							for (i=pos-1;i<size-1;i++)
							{
								arr[i]=arr[i+1];
							}
							printf("Array after deletion : ");
							for (i = 0; i<size-1; i++)
							{
								printf("%d ", i);
								printf("%d ", arr[i]);
								printf("\n");
								j+=1;
							}
							printf("\n");
						}
						size=j;
						j=1;
						break;
					}
					
			case 3: {
						printf("Reversed array is: ");
						for(i = size;i>=0;i--)
						{
							printf("%d ",arr[i]);
						}
						printf("\n");
						break;
					}
			case 4: {
						printf("The array is: ");
						for(i = 0; i<size; i--)
						{
							printf("%d ",arr[i]);
						}
						printf("\n");
						break;
					}
			case 5: exit(1);
			default:printf("Invalid Input.");
					break;
		}
	}
	return 0;
}
