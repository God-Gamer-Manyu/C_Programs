#include <stdio.h>
int main()
{
	float math,chem,phy;
	printf("Enter your marks of Maths, chem and physics ");
	scanf("%f%f%f",&math,&chem,&phy);
	float tot = math+chem+phy;
	printf("\nMaths\t%f\nChemistry\t%f\nPhysics\t%f\nTotal Marks\t%f\n",math,chem,phy,tot);
}
