#include<stdio.h>
#define PERIOD '.'
int main(void)
{
	char ch;
	int char_count = 0;					//�շ巨������charCount,��һ������һ��Сд��ʼ������Ĵ�д��ʼ

	while ((ch = getchar()) != PERIOD)
	{
		if (ch != '"' && ch !='\'')		//&&=�룬||=��!=��
		{
			char_count++;
		}
	}

	printf("There are %d non-quote characters.\n", char_count);

	return 0;
}
/*
I didn't read the "I'm a Programming Fool" best seller.
There are 50 non-quote characters.
*/