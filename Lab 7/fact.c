#include <stdio.h>

int fact(int);

int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d", &a);
	printf("The factorial of the number is %d\n", fact(a));
}

int fact(int a)
{
	if (a < 2)
		return 1;
	
	return a*fact(a-1);
}
