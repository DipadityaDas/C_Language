// Write a C Program to Find Profit and Loss.

#include <stdio.h>

int main()
{
	float sp, cp, pf, ls;

	printf("Enter cost price: ");
	scanf("%f", &cp);
	printf("Enter selling price: ");
	scanf("%f", &sp);

	if (sp > cp)
	{
		pf = sp - cp;
		printf("Profit = %.2f", pf);
	}
	else if (cp > sp)
	{
		ls = cp - sp;
		printf("Loss = %.2f", ls);
	}
	else
		printf("No profit and loss.");

	return 0;
}