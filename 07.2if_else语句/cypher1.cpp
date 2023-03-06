#include<stdio.h>
#define SPACE ' '			//SPAECE表示单引号-空格-单引号
int main(void)
{
	char ch;					//从键盘上录入输入的字符，然后按Enter键，输入缓存中

	ch = getchar();				//读取一个字符
	while (ch != '\n')			//当一行未结束时
	{
		if (ch == SPACE)		//留下空格
		{
			putchar(ch);		//该字符不变
		}
		else
		{
			putchar(ch + 1);	//改变其他字符
		}
		ch = getchar();			//获取下一个字符
	}
	putchar(ch);				//打印换行符

	return 0;
}
/*
Hello world!
Ifmmp xpsme"
*/