/*编写程序读取输入，读到#停止，报告ei出现的次数*/
#include<stdio.h>
int main(void)
{
	char ch;
	int ei_count = 0;
	
	printf("Enter any words(enter # to quit):\n");				
	while ((ch = getchar()) != '#')
	{
		if (ch == 'e')
		{
			ch = getchar();			//继续读取下一个字符
			if (ch == 'i')
			{
				ei_count++;
			}
		}
	}
	printf("ei出现的次数为：%d\n", ei_count);

	return 0;
}

/*
Enter any words(enter # to quit):
Receive your eieio award
#
ei出现的次数为：3
*/