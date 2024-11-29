#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int fir = 0, sec = 1, r, third;
	printf("Enter the no. of terms: ");
	scanf("%d",&r);
	
	if (r <= 0)
		exit(0);
	else if (r == 1)
	{
		printf("0\n");
		exit(0);
	}
	else if (r==2)
	{
		printf("0,1\n");
		exit(0);
	}
	
	printf("0,1");
	
	for (int i = 3; i <= r; i++)
	{
		third = fir + sec;
		fir = sec;
		sec = third;
		printf(",%d", sec);
	}
}
