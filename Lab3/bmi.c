#include <stdio.h>
#include <ctype.h>
int main()
{
	float w,h;
	printf("Enter your weight and height seperated by space: ");
	scanf("%f%f",&w,&h);
	float bmi = w/(h*h);
	if (bmi>25)
		printf("Over Weight\n");
	else if (bmi >= 18.5f)
		printf("Normal Weight\n");
	else
		printf("Under Weight\n");
}
