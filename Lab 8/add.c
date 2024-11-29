#include <stdio.h>

int len = 2;
void sum(int[len][len], int[len][len]);

int main ()
{
	int a[len][len], b[len][len];
	printf("Enter %d numbers of first matrix seperated by space ",len*len);
	for(int i=0;i<len;i++)
		for (int j = 0; j<len;j++)
			scanf("\n%d", &a[i][j]);
			printf("Enter %d numbers of second matrix seperated by space ",len*len);
	for(int i=0;i<len;i++)
		for (int j = 0; j<len;j++)
			scanf("\n%d", &b[i][j]);
	sum(a,b);
}

void sum(int a[len][len], int b[len][len])
{
	int c[len][len];
	for(int i = 0;i<len;i++)
		for (int j=0;j<len;j++)
			c[i][j] = a[i][j] + b[i][j];
	
	for(int i = 0;i<len;i++)
	{
		for (int j=0;j<len;j++)
			printf("%d ",c[i][j]);
		printf("\b\n");
	}
		
}
