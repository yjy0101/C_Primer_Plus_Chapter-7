/*ʹ��switch������ϰ������*/
#include<stdio.h>
int main(void)
{
	char ch;
	int count = 0;

	printf("����#ֹͣ��\n");
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

	printf("\n�����%d���滻��\n", count);


	return 0;
}
/*
����#ֹͣ��
ni gan ma. ai yo!#
ni gan ma! ai yo!!
�����2���滻��
*/