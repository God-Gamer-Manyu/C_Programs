#include <stdio.h>
#include <math.h>

int main ()
{
	int r,r_t, sum = 0;
	printf("Enter the value of n: ");
	scanf("%d",&r);
	
	r_t = r;
	while (r_t != 0)
	{
		sum += pow(r_t%10, 3);
		r_t /= 10;
	}
	
	if (r == sum)
		printf("The number is an Amstrong\n");
	else
		printf("The number is not an Amstrong\n");
}
