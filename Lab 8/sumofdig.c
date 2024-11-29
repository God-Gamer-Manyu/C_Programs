#include <stdio.h>

int sum(int);

int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d", &a);
	printf("The sum is %d\n", sum(a));
}

int sum(int a)
{
	if(a == 0)
		return 0;
	return a%10 + sum(a/10);	
}
