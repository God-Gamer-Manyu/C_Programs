#include <stdio.h>
int main()
{
	float c;
	printf("Enter the temperature in Celcius ");
	scanf("%f",&c);
	float f = (9/5)*c+32;
	printf("\nThe temperature in Farenheight is %f\n",f);
}
