#include <stdio.h>

int abs(int);


int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	printf("The absolute of the number is %d\n", abs(a));
}

int abs(int a)
{
	if (a>0)
		return a;
	else
		return -a;
}
