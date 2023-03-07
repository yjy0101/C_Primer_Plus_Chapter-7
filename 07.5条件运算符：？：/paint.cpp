#include<stdio.h>
#define COVERAGE 350
int main(void)
{
	int sq_feet;
	int cans;

	printf("Enter number of square feet to be painted:\n");
	while (scanf_s("%d",&sq_feet) == 1)
	{
		cans = sq_feet / COVERAGE;
		cans += ((sq_feet % COVERAGE == 0) ? 0 : 1);								//max = (a > b) ? a : b;
		printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");		//如果a大于b，那么将max设置为a;否则，设置成b
		printf("Enter next valu(q to quit):\n");
	}

	return 0;
}
/*
Enter number of square feet to be painted:
349
You need 1 can of paint.
Enter next valu(q to quit):
351
You need 2 cans of paint.
Enter next valu(q to quit):
q
*/