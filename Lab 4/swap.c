#include <stdio.h>
int main ()
{
	int r, r_t, n = 1;
	printf("Enter the no: ");
	scanf("%d",&r);
	r_t = r;
	int l = r%10;
	
	while (r_t !=0)
	{
		r_t /= 10;
		n*= 10;
	}
	n/=10;
	
	int mid = r%n;
	mid /= 10;
	mid *= 10;
	int f = r/n;
	
	printf("swapped number: %d\n", l*n+mid+f);
}
