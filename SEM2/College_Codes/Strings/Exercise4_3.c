#include<stdio.h>

int xStrcmp(char *str1, char *str2)
{
    int flag=0,i;
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int main()
{
    char str1[100],str2[100];
    int flag;
    printf("Enter a string1: ");
    scanf("%[^\n]%*c", str1);
    printf("Enter a string2: ");
    scanf("%[^\n]%*c", str2);
    flag=xStrcmp(str1,str2);
    if(flag == 1)
    {
        printf("\nMismatched.\n");
    }
    else
    {
        printf("\nMatched.\n");
    }
    return 0;
}