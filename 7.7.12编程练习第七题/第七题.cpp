/*7．编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。做如下假设：
	a．基本工资= 100美元/小时
	b.加班（超过40小时）= 1.5倍的时间
	c．税率:前300美元为15%
		    续150美元为20%
			余下的为25%
	用#define定义符号常量。不用在意是否符合当前的税法。*/
#include<stdio.h>
#define BASE_SALARY 100
int main(void)
{
	int hours;
	float taxes;
	int total;
	printf("输入你一周的工作小时数：\n");
	scanf_s("%d", &hours);
	if (hours <= 40)
	{
		total = hours * BASE_SALARY;
		printf("工资总额为%d;", total);
		if (total <= 300)
		{
			taxes = total * 0.15;
		}
		if (total >300 && total <= 450)
		{
			taxes = 45 + (total - 300) * 0.2;
		}
		if (total > 450)
		{
			taxes = 45 + 30 + (total - 450) * 0.25;
		}
		printf("税金为%.2f", taxes);
		printf("净收入为%.2f", total - taxes);
	}
	if (hours >= 40)
	{
		total = 40 * 100 + (hours - 40) * 1.5 * 100;
		printf("工资总额为%d;", total);
		if (total <= 300)
		{
			taxes = total * 0.15;
		}
		if (total > 300 && total <= 450)
		{
			taxes = 45 + (total - 300) * 0.2;
		}
		if (total > 450)
		{
			taxes = 45 + 30 + (total - 450) * 0.25;
		}
		printf("税金为%.2f", taxes);
		printf("净收入为%.2f", total - taxes);
	}

	return 0;
}