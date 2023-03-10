/*编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行符和其他所有字符的数量*/
#include<stdio.h>
int main(void)
{
	char ch;
	int blankNum = 0;
	int enterNum = 0;
	int otherNum = 0;

	printf("Enter any words and enter # to stop:\n");
	while ((ch = getchar()) != '#')
	{
		
		if (ch == ' ')
		{
			blankNum++;
			continue;
		}
		else if (ch == '\n')
		{
			enterNum++;
			continue;
		}
		else
		{
			otherNum++;
			continue;
		}
	}
	printf("空格数：%d; 换行符数：%d; 其他字符数：%d", blankNum, enterNum, otherNum);


	return 0;
}
/*
Enter any words and enter # to stop:
ni gan ma haihai yo!
ni hao fan #
空格数：7; 换行符数：1; 其他字符数：24
*/