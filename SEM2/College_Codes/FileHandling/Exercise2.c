#include <stdio.h>
int main ()
{
	FILE *fptr;
 	char name[20];
	int n, age;
	fptr = fopen("name.txt", "w");
	printf("Enter no. of people: ");
	scanf("%d",&n);
	for (int i=0; i<n; i++)
 	{
		printf("Enter name and age: ");
		scanf("%s %d",name,&age);
		if (age>16)
        {
  	        fprintf(fptr, "Name = %s\n", name);
 		    fprintf(fptr, "Age = %d\n", age);
 		}
	}
	fclose(fptr);
 	return 0;
}