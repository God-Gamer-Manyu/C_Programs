#include <stdio.h>
int main ()
{
	int r;
	printf("Enter the row limit: ");
	scanf("%d",&r);
	for(int i = 1; i <= r * 2; i += 2)
	{
		for (int j = 0;  j < i; j++)
			printf("*");

		printf("\n");
	}
}
