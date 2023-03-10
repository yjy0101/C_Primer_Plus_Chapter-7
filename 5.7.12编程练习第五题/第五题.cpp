/*使用switch重新练习第四题*/
#include<stdio.h>
int main(void)
{
	char ch;
	int count = 0;

	printf("输入#停止：\n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			putchar('!');
			count++;
			break;
		case '!':
			putchar(ch);
			putchar(ch);
			count++;
			break;
		default:
			putchar(ch);
			break;
		}
	}

	printf("\n完成了%d次替换。\n", count);


	return 0;
}
/*
输入#停止：
ni gan ma. ai yo!#
ni gan ma! ai yo!!
完成了2次替换。
*/