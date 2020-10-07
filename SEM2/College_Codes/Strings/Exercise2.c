#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
    char str[100];
    int flag=0,i,length;
    printf("Enter a word: ");
    scanf("%s", &str);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        if((str[i] == str[length-i-1]) || (str[i] == toupper(str[length-i-1])) || (str[i] == tolower(str[length-i-1])))
        {
            continue;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Given word is not palindrome.");
    }
    else
    {
        printf("Given word is palindrome.");
    }
    return 0;
}