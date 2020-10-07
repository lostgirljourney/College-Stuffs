#include <stdio.h>
int main ()
{
    FILE *fptr1, *fptr2;
    char filename[100], c;
    printf("Enter filename to open for reading: ");
    scanf("%s",filename);
    fptr1 = fopen(filename, "r");

    printf("Enter filename to open for writing: ");
    scanf("%s", filename);
    fptr2 = fopen(filename, "w");
    c = fgetc(fptr1);
    while (c!=EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
    printf("\nContents copied to %s",filename);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}