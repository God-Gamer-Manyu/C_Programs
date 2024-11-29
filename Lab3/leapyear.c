#include <stdio.h>
int main()
{
	int x;
	printf("Enter the year: ");
	scanf("%d",&x);
	if (x%4==0)
		printf("It is a leap year\n");
	else
		printf("It is not a leap year\n");
}
