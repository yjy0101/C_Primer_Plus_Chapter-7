/*��дһ�������ȡ���룬����#�ַ�ֹͣ��Ȼ�󱨸��ȡ�Ŀո��������з������������ַ�������*/
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
	printf("�ո�����%d; ���з�����%d; �����ַ�����%d", blankNum, enterNum, otherNum);


	return 0;
}
/*
Enter any words and enter # to stop:
ni gan ma haihai yo!
ni hao fan #
�ո�����7; ���з�����1; �����ַ�����24
*/