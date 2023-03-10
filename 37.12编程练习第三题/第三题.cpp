/*编写一个程序，读取整数直到用户输入0。输入结束后，程序报告用户输入的偶数（不包括0）个数、
  这些偶数的平均值、输入的奇数个数及其奇数的平均值。*/
#include<stdio.h>
int main(void)
{
	int num;
	int even = 0;
	float even_sum = 0;			//even意思是偶数
	int	odd = 0;
	float odd_sum = 0;

	printf("输入0程序结束：\n");
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
	printf("偶数个数为%-3d, 偶数平均值为%-.2f;\n奇数个数为%-3d, 奇数平均值为%-.2f", even, even_sum / even, odd, odd_sum / odd);

	return 0;
}
/*
输入0程序结束：
23 432 56 7 5 21
32 54 76 87 1 9 0
偶数个数为5  , 偶数平均值为130.00;
奇数个数为7  , 奇数平均值为21.86
*/