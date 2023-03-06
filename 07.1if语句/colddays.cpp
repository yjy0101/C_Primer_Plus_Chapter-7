//colddayes.c--�ҳ�0��һ�µ�����ռ�������İٷֱ�
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
		if (temperature < FREEZING)			//if�����һ�������ж���䣬���������������ִ��if����������Ĵ��룬�����������ִ��if���֮��Ĵ���
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