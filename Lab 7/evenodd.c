#include <stdio.h>

void evenOdd(int);


int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	evenOdd(a);
}

void evenOdd(int a)
{
	if (a%2==0)
		printf("The number is Even\n");
	else
		printf("The number is Odd\n");
}
