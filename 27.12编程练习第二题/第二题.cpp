/*��дһ���������룬����#�ַ�ֹͣ������Ҫ��ӡÿ��������ַ��Լ���Ӧ��ASCII�루ʮ���ƣ���
  һ�д�ӡ8���ַ������飺ʹ���ַ�������ģ�������%����ÿ8��ѭ������ʱ��ӡһ�����з���*/
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
			printf("  |�س�=%-4d|  ",ch);
			if (char_num % 8 == 0)
			{
				printf("\n");
			}
		}
		else if (ch == ' ')
		{
			printf("  |�ո�=%-4d|  ", ch);
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