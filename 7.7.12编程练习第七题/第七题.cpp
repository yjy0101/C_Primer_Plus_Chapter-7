/*7����дһ��������ʾ�û�����һ�ܹ�����Сʱ����Ȼ���ӡ�����ܶ˰��;����롣�����¼��裺
	a����������= 100��Ԫ/Сʱ
	b.�Ӱࣨ����40Сʱ��= 1.5����ʱ��
	c��˰��:ǰ300��ԪΪ15%
		    ��150��ԪΪ20%
			���µ�Ϊ25%
	��#define������ų��������������Ƿ���ϵ�ǰ��˰����*/
#include<stdio.h>
#define BASE_SALARY 100
int main(void)
{
	int hours;
	float taxes;
	int total;
	printf("������һ�ܵĹ���Сʱ����\n");
	scanf_s("%d", &hours);
	if (hours <= 40)
	{
		total = hours * BASE_SALARY;
		printf("�����ܶ�Ϊ%d;", total);
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
		printf("˰��Ϊ%.2f", taxes);
		printf("������Ϊ%.2f", total - taxes);
	}
	if (hours >= 40)
	{
		total = 40 * 100 + (hours - 40) * 1.5 * 100;
		printf("�����ܶ�Ϊ%d;", total);
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
		printf("˰��Ϊ%.2f", taxes);
		printf("������Ϊ%.2f", total - taxes);
	}

	return 0;
}