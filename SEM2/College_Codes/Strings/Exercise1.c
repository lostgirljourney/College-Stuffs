#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int vowels=0,consonants=0,digits=0,i,length;
    printf("Enter a string: ");
    scanf("%[^\n]%*c", &str);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
        {
            vowels++;
        }
        else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            
            consonants++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            continue;
        }
    }
    printf("\nNumber of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of digits: %d\n", digits);
    return 0;
}