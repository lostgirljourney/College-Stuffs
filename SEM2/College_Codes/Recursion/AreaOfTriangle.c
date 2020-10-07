//Calculate area of triangle

#include<stdio.h>
#include<math.h>
void area(float x,float y,float z)
{
	float s=0,ar=0;
	if((x+y>z) && (y+z>x) && (z+x>y))
	{
		s=(x+y+z)/2;
		ar=sqrt(s*(s-x)*(s-y)*(s-z));
		printf("Result: %0.2f", ar);	//gives result upto 2 decimal points
	}
	else
	{
		printf("Sum of two sides is smaller than third side.");
	}
}

int main()
{
	float a,b,c;
	printf("Enter your 1st side: ");
	scanf("%f",&a);
	printf("Enter your 2nd side: ");
	scanf("%f",&b);
	printf("Enter your 3rd side: ");
	scanf("%f",&c);
	area(a,b,c);
	return 0;
}
