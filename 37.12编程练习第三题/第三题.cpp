/*��дһ�����򣬶�ȡ����ֱ���û�����0����������󣬳��򱨸��û������ż����������0��������
  ��Щż����ƽ��ֵ�������������������������ƽ��ֵ��*/
#include<stdio.h>
int main(void)
{
	int num;
	int even = 0;
	float even_sum = 0;			//even��˼��ż��
	int	odd = 0;
	float odd_sum = 0;

	printf("����0���������\n");
	while (scanf_s("%d", &num) == 1)
	{
		if (num == 0)
		{
			break;
		}
		if (num % 2 == 0)
		{
			even++;
			even_sum += num;
			continue;
		}
		if (num % 2 == 1)
		{
			odd++;
			odd_sum += num;
			continue;
		}
	}
	printf("ż������Ϊ%-3d, ż��ƽ��ֵΪ%-.2f;\n��������Ϊ%-3d, ����ƽ��ֵΪ%-.2f", even, even_sum / even, odd, odd_sum / odd);

	return 0;
}
/*
����0���������
23 432 56 7 5 21
32 54 76 87 1 9 0
ż������Ϊ5  , ż��ƽ��ֵΪ130.00;
��������Ϊ7  , ����ƽ��ֵΪ21.86
*/