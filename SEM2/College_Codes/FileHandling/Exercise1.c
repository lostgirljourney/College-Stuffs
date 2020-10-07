#include<stdio.h>
int main ()
{
    FILE *fptr;
 	char filename[100], c;
 	int num_lines=0, num_tabs=0, num_spaces=0, num_characters=0;
 	printf("Enter filename to open : ");
 	scanf("%s",filename);
 	fptr = fopen(filename, "r");
 	c = fgetc(fptr);
 	while(c!=EOF)
 	{
	    printf("%c",c);
 	    c = fgetc(fptr);
 	    if (c == '\n')
        {  
            num_lines += 1;
        }
		if (c == '\t')
        {
 			num_tabs += 1;
        }
 		if (c == ' ')
	    {
            num_spaces += 1;
        }
 		else
        {
            num_characters += 1;
        }
 	}
 	printf("\nNo. of tabs = %d",num_tabs);
 	printf("\nNo. of spaces = %d",num_spaces);
 	printf("\nNo. of lines = %d",num_lines);
 	printf("\nNo. of characters = %d",num_characters);
 	fclose(fptr);
 	return 0;
}
