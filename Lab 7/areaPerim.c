#include <stdio.h>

int area(int);
int perimeter(int);


int main()
{
	int a;
	printf("Enter the side of the square: ");
	scanf("%d",&a);
	printf("The area is %d\n", area(a));
	printf("The perimeteter is %d\n", perimeter(a));
}

int area(int a)
{
	return a*a;
}

int perimeter(int a)
{
	return 4*a;
}
