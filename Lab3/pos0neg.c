#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if (n<0)
		printf("The number is negative\n");
	else if (n==0)
		printf("The number is 0\n");
	else
		printf("The number is positive\n");
}
