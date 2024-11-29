#include <stdio.h>

int len = 2;
void dis(int[]);

int main ()
{
	int i,j;
	int a[2] = {0,0};
	printf("Enter %d numbers of first matrix seperated by space ",len);
	for(i=0;i<len;i++)
		scanf("\n%d", &a[i]);
			
	for( i = 0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	dis(a);
}

void dis(int a[])
{
	//printf("\n%d", sizeof(a));
	int s = sizeof(a)/sizeof(a[0]);
	printf("\n%d\n",s); 
	int l = a[s-1];
	if (s==1)
	{
		printf("%d ", a[0]);
		return;
	}
	int b[s-1];
	for (int i=0;i<s-1;i++)
		b[i] = a[i];
	
	printf("\n%d\n", sizeof(b)/sizeof(b[0]));
	dis(b);
	printf("%d ",l);
}
