#include <stdio.h>
int main()
{
	int a;
	printf("Enter the average marks: ");
	scanf("%d",&a);
	if (a>80)
		printf("A\n");
	else if (a>60)
		printf("B\n");
	else if (a>40)
		printf("C\n");
	else
		printf("F\n");
}
