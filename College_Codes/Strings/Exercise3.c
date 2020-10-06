#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int vowels=0,consonants=0,digits=0,i,length,a;
    printf("Enter the full name: ");
    scanf("%[^\n]%*c", &str);
    printf("%c.",str[0]);   //First Name
    length=strlen(str);
    for(i=0;i<length;i++)   //To find last null place
    {
        if(str[i] == ' ')
        {
            a=i;
        }
    }
    for(i=0;i<a;i++)        //Middle Name
    {
        if(str[i] == ' ')
        {
            printf("%c.",str[i+1]);
        }
    }
    for(i=a+1;i<length;i++) //Last Name
    {
        printf("%c",str[i]);
    }
    return 0;
}