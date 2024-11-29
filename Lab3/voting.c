#include <stdio.h>
int main()
{
	int n;
	printf("Enter your age: ");
	scanf("%d",&n);
	if (n>17)
		printf("You are eligible to vote\n");
	else
		printf("You are not eligible to vote\n");
}
