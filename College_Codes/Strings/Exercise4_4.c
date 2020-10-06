#include <stdio.h>

char *xStrcat(char *str1,char *str2)
{
    int i,j;
    for(i=0;str1[i]!='\0';i++)
    {
    }
    for(j=0;str2[j]!='\0';j++)
    {
        str1[i++] = str2[j];
    }
    str1[i] = '\0';
    return str1;
}

void main()
{
    char str1[100],str2[100];
    printf("Enter a string1: ");
    scanf("%[^\n]%*c", str1);
    printf("Enter a string2: ");
    scanf("%[^\n]%*c", str2);
    xStrcat(str1,str2);
    printf("\n%s\n",str1);
}