#include <stdio.h>
int main ()
{
    char filename1[100], filename2[100], filename3[100], c;
    FILE *fptr1, *fptr2, *fptr3;
    printf ("Enter the two filenames for reading: ");
    scanf("%s%s",filename1,filename2);
    fptr1 = fopen(filename1, "r");
    fptr2 = fopen(filename2, "r");
    printf("Enter the filename for writing: ");
    scanf("%s",filename3);
    fptr3 = fopen(filename3, "w");
    while((c = fgetc(fptr1)) != EOF)
    fputc(c, fptr3);

    while((c = fgetc(fptr2)) != EOF)
    fputc(c, fptr3);

    printf("Merged %s and %s into %s",filename1,filename2,filename3);
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    return 0;
}