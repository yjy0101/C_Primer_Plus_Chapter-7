#include<stdio.h>
#define PERIOD '.'
int main(void)
{
	char ch;
	int char_count = 0;					//驼峰法命名：charCount,第一个单词一般小写开始，后面的大写开始

	while ((ch = getchar()) != PERIOD)
	{
		if (ch != '"' && ch !='\'')		//&&=与，||=或，!=非
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