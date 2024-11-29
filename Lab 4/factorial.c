#include <stdio.h>
int main ()
{
	int r, fact = 1;
	printf("Enter the range: ");
	scanf("%d",&r);
	for (int i = 2; i <=r; i++)
		fact *= i;
		
	printf("The factorisl upto %d is %d\n", r, fact);
}
