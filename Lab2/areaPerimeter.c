#include <stdio.h>
int main()
{
	int choice;
	printf("Enter 1 for circle and 2 for triangle ");
	scanf("%d",&choice);
	printf("%d",choice);
	switch (choice)
	{
		case 1:
		{
			float r;
			printf("\nEnter the radius of the circle ");
			scanf("%f",&r);
			float ar = 3.14f*r*r;
			float cir = 2*3.14*r;
			printf("\nArea of the circle is %f.",ar);
			printf("\nCircumfurence of the circle is %f.\n",cir);
			break;
		}
		case 2:
		{
			float a,b,c,s,ar;
			printf("Enter the value of the sides of triangle ");
			scanf("%f%f%f",&a,&b,&c);
			s = (a+b+c)/2;
			ar = s*(s-a)*(s-b)*(s-c);
			printf("\nThe perimeter of the triangle is %f.",s*2);
			printf("\nThe area of the triangle is %f.\n",ar);
			break;
		}
		default:
		{
			printf("\nPlease check the value entered\n");
		}
	}
}
