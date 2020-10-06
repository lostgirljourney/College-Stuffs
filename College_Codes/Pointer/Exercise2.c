#include<stdio.h>
#define SIZE 25
int main()
{
    int max, a, array[SIZE];
    int *ptr;
    ptr = &array[0];
    printf("\nEnter no. of elements: ");
    scanf("%d", &max);
    printf("\nEnter data\n");
        for (a = 0; a < max; ++a) 
        {
            scanf("%d", ptr);
            ++ptr;
        }
    ptr = &array[max - 1];
    printf("\n%d elements in the list in reverse order\n", max);
    for (a = max - 1; a >= 0; a--)
    {
        printf("%d ",*ptr);
        --ptr;
    }
    return 0;
}