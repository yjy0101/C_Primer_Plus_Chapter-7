/*使用if else语句编写一个程序读取输入，读到#停止。用感叹号代替句号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换*/
#include<stdio.h>
int main(void)
{
	char ch;
	int count = 0;

	printf("输入#停止：\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			putchar('!');
			count++;
		}
		else if (ch == '!')
		{
			putchar(ch);
			putchar(ch);
			count++;
		}
		else
		{
			putchar(ch);
		}
	}

	printf("\n完成了%d次替换。\n", count);
	

	return 0;
}
/*
输入#停止：
dasda!asdasd.#
dasda!!asdasd!
完成了2次替换。
*/