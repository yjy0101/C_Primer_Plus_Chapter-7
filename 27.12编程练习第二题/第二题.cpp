/*编写一个程序输入，读到#字符停止。程序要打印每个输入的字符以及对应的ASCII码（十进制）。
  一行打印8个字符。建议：使用字符计数和模运算符（%）在每8个循环周期时打印一个换行符。*/
#include<stdio.h>
int main(void)
{
	char ch;
	int char_num = 0;

	printf("Enter # to quit:\n");
	while ((ch = getchar()) != '#')
	{
		char_num++;
		if (ch == '\n')
		{
			printf("  |回车=%-4d|  ",ch);
			if (char_num % 8 == 0)
			{
				printf("\n");
			}
		}
		else if (ch == ' ')
		{
			printf("  |空格=%-4d|  ", ch);
			if (char_num % 8 == 0)
			{
				printf("\n");
			}
		}
		else
		{
			printf("  |%4c=%-4d|  ", ch, ch);
			if (char_num % 8 == 0)
			{
				printf("\n");
			}
		}
	}

	return 0;
}