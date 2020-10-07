#include<stdio.h>
int main()
{
    int c,d,temp,flag;
    int array[10] = {12,78,-9,19,45,88,5,15,-100,29};    
    for (c=1;c<=10-1;c++) 
    {
        temp=array[c];
        for (d=c-1;d>=0;d--)
        {
            if (array[d]>temp)
            {
                array[d+1] = array[d];
                flag = 1;
            }
            else
            {
                break;
            }
        }
        if (flag)
        array[d+1] = temp;
    }
    printf("Sorted Array is");
    for(c=0;c<10;c++)
    {
        printf(" %d",array[c]);
    }
    return 0;
}