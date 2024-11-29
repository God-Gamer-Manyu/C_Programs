#include <stdio.h>
int main ()
{
	int r;
	printf("Enter the range: ");
	scanf("%d",&r);

	for(int i = 1; i <=r; i++)
	{
		for(int j =1; j<= 10; j++)
			printf("%d x %d = %d\n",i,j,i*j);	
		printf("--------\n");
	}
}
