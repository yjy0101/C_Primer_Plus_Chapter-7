/*ʹ��if else����дһ�������ȡ���룬����#ֹͣ���ø�̾�Ŵ����ţ���������̾���滻ԭ���ĸ�̾�ţ���󱨸�����˶��ٴ��滻*/
#include<stdio.h>
int main(void)
{
	char ch;
	int count = 0;

	printf("����#ֹͣ��\n");
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

	printf("\n�����%d���滻��\n", count);
	

	return 0;
}
/*
����#ֹͣ��
dasda!asdasd.#
dasda!!asdasd!
�����2���滻��
*/