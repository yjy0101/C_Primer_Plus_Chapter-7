//divisors.c--ʹ��Ƕ��if�����ʾһ������Լ��
#include<stdio.h>
#include<stdbool.h>			
int main()
{
	unsigned long num;		//�����Ե���
	unsigned long div;		//���ܵ�Լ��
	bool isPrime;			//�������

	printf("Please enter an integer for analysis;");
	printf("Enter q to quit.\n");
	while (scanf_s("%lu",&num) == 1)
	{
		for (div = 2, isPrime = true;(div * div) <= num;div++)
		{
			if (num % div == 0)
			{
				if ((div * div) != num)
				{
					printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
				}
				else
				{
					printf("%lu is divisible by %lu.\n", num, div);
				}
				isPrime = false;		//������������
			}
		}
		if (isPrime)
		{
			printf("%lu is prime.\n", num);
		}
		printf("Please enter another integer for analysis; ");
		printf("Enter q to quit.\n");
	}
	printf("Bye.\n");

	return 0;
}
/*
Please enter an integer for analysis;Enter q to quit.
123456789
123456789 is divisible by 3 and 41152263.
123456789 is divisible by 9 and 13717421.
123456789 is divisible by 3607 and 34227.
123456789 is divisible by 3803 and 32463.
123456789 is divisible by 10821 and 11409.
Please enter another integer for analysis; Enter q to quit.
149
149 is prime.
Please enter another integer for analysis; Enter q to quit.
2013
2013 is divisible by 3 and 671.
2013 is divisible by 11 and 183.
2013 is divisible by 33 and 61.
Please enter another integer for analysis; Enter q to quit.
q
Bye.
*/