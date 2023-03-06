#include<stdio.h>
#include<ctype.h>							//包含isalpha()函数的头文件
int main(void)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))					//isalpha()函数判断字符是否为一个字母
		{
			putchar(ch + 1);				//是字母就加1
		}
		else
		{
			putchar(ch);					//不是字母就直接打印
		}
	}

	return 0;
}
/*
Look! It's a programmer!
Mppl! Ju't b qsphsbnnfs!
*/