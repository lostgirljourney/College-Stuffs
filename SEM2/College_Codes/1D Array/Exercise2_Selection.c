#include<stdio.h>
int main()
{
    int i,j,temp,position;
    int array[10] = {12,78,-9,19,45,88,5,15,-100,29};
    for(i=0;i<(10-1);i++)
    {
        position = i;
        for(j=i+1;j<10;j++)
        {
            if (array[position]>array[j])
            position = j;
        }
        if (position!=i)
        {
            temp = array[i];
            array[i] = array[position];
            array[position] = temp;
        }
    }
    printf("Sorted Array is");
    for(i=0;i<10;i++)
    {
        printf(" %d",array[i]);
    }
    return 0;
}