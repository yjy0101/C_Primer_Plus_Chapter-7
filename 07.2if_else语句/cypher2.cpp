#include<stdio.h>
#include<ctype.h>							//����isalpha()������ͷ�ļ�
int main(void)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))					//isalpha()�����ж��ַ��Ƿ�Ϊһ����ĸ
		{
			putchar(ch + 1);				//����ĸ�ͼ�1
		}
		else
		{
			putchar(ch);					//������ĸ��ֱ�Ӵ�ӡ
		}
	}

	return 0;
}
/*
Look! It's a programmer!
Mppl! Ju't b qsphsbnnfs!
*/