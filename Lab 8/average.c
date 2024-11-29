#include <stdio.h>

int avg(int[]);

int main ()
{
	int a[5];
	printf("Enter 5 numbers seperated by space ");
	for(int i=0;i<5;i++)
		scanf("%d", &a[i]);
	printf("The average of the numbers are %d.\n", avg(a));
}

int avg(int a[])
{
	int sum = 0;
	for(int i = 0;i<5;i++)
		sum+= a[i];
	return sum/5;
}
