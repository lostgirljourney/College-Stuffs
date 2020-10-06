#include <stdio.h>

int xStrlen(char *str1)
{
    int length=0,i;
    for(i=0;str1[i]!='\0';i++)
    {
        length++;
    }
    return length;
}

void main()
{
    char str1[100];
    int length = 0;
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str1);
    length=xStrlen(str1);
    printf("\nLength = %d\n", length);
}