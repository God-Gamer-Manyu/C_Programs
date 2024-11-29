#include <stdio.h>
#include <stdbool.h>
int main ()
{
	int r;
	printf("Enter the range: ");
	scanf("%d",&r);
	bool isPrime = true;
	
	for (int i = 2; i <= r; i++)
	{
		isPrime = true;
		for (int j = 2; j < i; j++)
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		if (isPrime)
			printf(",%d", i);
	}
}
