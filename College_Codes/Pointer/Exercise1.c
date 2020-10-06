#include<stdio.h>
void swap(int a, int b) 
{
	int *p,*q,temp;
	p=&a;
	q=&b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("Before swapping %d , %d\n", a,b);
	temp=*q;
	*q=*p;
	*p=temp;
	printf("After Swapping %d , %d\n", a, b);
}
int main()
{
	int a,b;
	swap(a,b);
    return 0;
}