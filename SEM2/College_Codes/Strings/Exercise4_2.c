#include <stdio.h>

char xStrcpy(char *str2, char *str1)
{
    int i;
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}

void main()
{
    char str1[100],str2[100];
    printf("Enter a string1: ");
    scanf("%[^\n]%*c", str1);
    xStrcpy(str2,str1);
    printf("\nString 1: %s\nString 2: %s\n",str1,str2);
}