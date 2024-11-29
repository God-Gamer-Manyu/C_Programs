#include <stdio.h>
#include <ctype.h>
int main()
{
	char a;
	int pt = 0;
	printf("Enter the character: ");
	scanf("%c",&a);
	if (islower(a))
		printf("It is in lowercase\n");
	else if (isupper(a))
		printf("It is in uppercase\n");
}
