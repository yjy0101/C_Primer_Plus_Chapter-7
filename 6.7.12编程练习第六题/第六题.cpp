/*��д�����ȡ���룬����#ֹͣ������ei���ֵĴ���*/
#include<stdio.h>
int main(void)
{
	char ch;
	int ei_count = 0;
	
	printf("Enter any words(enter # to quit):\n");				
	while ((ch = getchar()) != '#')
	{
		if (ch == 'e')
		{
			ch = getchar();			//������ȡ��һ���ַ�
			if (ch == 'i')
			{
				ei_count++;
			}
		}
	}
	printf("ei���ֵĴ���Ϊ��%d\n", ei_count);

	return 0;
}

/*
Enter any words(enter # to quit):
Receive your eieio award
#
ei���ֵĴ���Ϊ��3
*/