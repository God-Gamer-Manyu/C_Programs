#include <stdio.h>

int sum(int, int);
int mult(int, int);
int sub(int, int);
int div(int, int);
int rem(int, int);



int main()
{
	int a, b, ans;
	char c,cont = 'y';
	while (cont == 'y')
	{	
		printf("Enter the numbers with space: ");
		scanf("%d%d",&a, &b);
		printf("Enter the operation: ");
		scanf("\n%c", &c);
		switch (c)
		{	
			case '+':
				printf("The answer is %d\n", sum(a,b));
				break;
			case '-':
				printf("The answer is %d\n", sub(a,b));
				break;
			case '*':
				printf("The answer is %d\n", mult(a,b));
				break;
			case '/':
				printf("The answer is %d\n", div(a,b));
				break;
			case '%':
				printf("The answer is %d\n", rem(a,b));
				break;
			default:
				printf("The operation is not valid");
		}
		printf("Do you want to continue (y/n): ");
		scanf("\n%c", &cont);
	}
}

int sum(int a, int b)
{
	return a+b;
}

int mult(int a, int b)
{
	return a*b;
}

int sub(int a, int b)
{
	return a-b;
}

int div(int a, int b)
{
	return a/b;
}

int rem(int a, int b)
{
	return a%b;
}
