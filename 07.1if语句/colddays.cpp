//colddayes.c--找出0℃一下的天数占总天数的百分比
#include<stdio.h>
int main(void)
{
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;

	printf("Enter the list of daily low temperatures.\n");
	printf("Use Celsius, and enter q to quit.\n");

	while (scanf_s("%f",&temperature) == 1)
	{
		all_days++;
		if (temperature < FREEZING)			//if语句是一个条件判断语句，如果条件成立，则执行if大括号里面的代码，如果不成立则执行if语句之后的代码
		{									//if(expression)
			cold_days++;					//	{statement}
		}
	}

	if (all_days != 0)
	{
		printf("%d days total: %.1f%% were below freezing.\n", all_days, 100.0 * (float)cold_days / all_days);
	}

	if (all_days == 0)
	{
		printf("No date entered!\n");
	}

	return 0;
}
/*
Enter the list of daily low temperatures.
Use Celsius, and enter q to quit.
12 5 -2.5 0 6 8 -3 -10 5 10 q
10 days total: 30.0% were below freezing.
*/