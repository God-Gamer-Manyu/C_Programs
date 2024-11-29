// A program to find the bill from user input
#include <stdio.h>
int main()
{
	int a,b,c = 0;
	printf("Enter the price of all 3 article ");
	scanf("%d%d%d",&a,&b,&c);
	int sum = a+b+c;
	printf("\nthe Total bill is %d\n", sum);
}
