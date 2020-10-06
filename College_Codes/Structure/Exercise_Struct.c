#include <stdio.h>
#include <string.h>
struct student 
{
    char name[50], stream[50];
    int roll;
} s[100];

int main() 
{
    int i,n,CSE,CSEc=0,cse;
    printf("Enter no. of students: ");
    scanf("%d",&n);
    printf("\n");

    // storing information
    for (i=0;i<n;++i)
    {
        printf("Rl. No. : ");
        scanf("%d",&s[i].roll);
        printf("Name: ");
        scanf("%s", &s[i].name);
        printf("Stream: ");
        scanf("%s", &s[i].stream);
        printf("\n");
        CSE = strcmp(s[i].stream, "CSE");
        cse = strcmp(s[i].stream, "cse");
 		if (cse==0 || CSE==0)
        {
 			CSEc += 1;
 		}
    }

    // displaying information
    printf("Rl. No.\t\t Name\t\t Stream\n");
	for (i=0; i<n; i++)
 	{
 		printf("\n%d\t\t %s\t\t %s\n",s[i].roll,s[i].name,s[i].stream);
 	}
 	printf("\nTotal number of students in ''CSE'' = %d",CSEc);
    return 0;
}