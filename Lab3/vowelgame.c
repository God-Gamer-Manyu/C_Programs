#include <stdio.h>
int main()
{
	char a;
	int pt = 0;
	printf("Enter the character: ");
	scanf("%c",&a);
	if (a == 'a'|| a == 'e'|| a == 'i'|| a == 'o'|| a == 'u')
		pt += 5;
	else if (a == '0'|| a == '1'|| a == '2'|| a == '3'|| a == '4'|| a == '5'
			|| a == '6'|| a == '7'|| a == '8'|| a == '9')
		pt+=10;
	printf("The points are %d\n", pt);
}
