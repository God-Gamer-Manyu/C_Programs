#include <stdio.h>
#include <ctype.h>
int main()
{
	int a,b,c;
	int pt = 0;
	printf("Enter the coefficient seperated by space: ");
	scanf("%d%d%d",&a,&b,&c);
	float d = b*b-(4*a*c);
	if (b>0)
		pt+=20;
	else if (b == 0);
	else
		pt+=10;
	printf("The points are %d\n",pt);
}
