#include <stdio.h>

void tower(int n, char beg, char aux, char end)
{
	if(n==1)
	{
		printf("Move Disk %d from peg %c to peg %c\n", n, beg, end);
		return;
	}
	tower(n-1,beg,end,aux);
	printf("Move Disk %d from peg %c to peg %c\n", n, beg, end);
	tower(n-1,aux,beg,end);
	return;
}

int main()
{
	int n;
	void tower(int, char, char, char);
	printf("How many disks? ");
	scanf("%d",&n);
	if(n>0)
		tower(n,'S','A','D');
	else
		printf("Invalid! Press any key to exit.\n");
	return(0);
}