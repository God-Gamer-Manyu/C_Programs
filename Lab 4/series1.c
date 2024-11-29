#include <stdio.h>

int main ()
{
	int r;
	float sum = 0.0f;
	printf("Enter the value of n: ");
	scanf("%d",&r);
	
	int fact_mem[r];
	fact_mem[0] = 1;
	for(int i = 1; i < r; i++)
		fact_mem[i] = 0;
		
	int fact(int n)
	{
		if (n == 1)
			return 1;

		if(fact_mem[n-2] == 0)
			fact(n-1);
		
		int res = n * fact_mem[n-2];
			
		fact_mem[n-1] = res;
		return res;
	}
	
	for(int i = 1; i <= r; i++)
		sum += i/fact(i);
	
	printf("The sum of the series is: %f\n", sum);
}

