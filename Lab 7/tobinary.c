#include <stdio.h>

int bin(int);

int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d", &a);
	printf("The binary of the number is %d\n", bin(a));
}

int bin(int a)
{
	if (a == 1)
		return 1;
	return bin(a/2)*10 + a%2;
}
