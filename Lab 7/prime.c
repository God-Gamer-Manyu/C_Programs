#include <stdio.h>

void prime(int);

int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d", &a);
	prime(a);
}

void prime(int a)
{
	for(int i = 2; i < a; i++)
		if(a%i==0)
		{
			printf("The number is not prime\n");
			return;
		}
			
	printf("The number is prime\n");
}
