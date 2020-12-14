#include <stdio.h>
int main()
{
	int n; // Variable declaration
	void tower(int, char, char, char); // function declaration
	printf("\nHow many disks ? ");
	scanf("%d",&n);
	if(n>0)
		tower(n,'S','A','D'); //function call
	else
		printf("\n Do not waste time, Press any key to exit");
	return(0);
}
void tower(int n, char beg, char aux, char end)
{
	if(n==1)
	{
		printf("\nMove Disk %d from peg %c to peg %c\n", n, beg, end);
		return;
	}
	tower(n-1,beg,end,aux);
	printf("\nMove Disk %d from peg %c to peg %c\n", n, beg, end);
	tower(n-1,aux,beg,end);
}
