#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;

	printf("Give me a letter of the alphabet, and I will give an animal name\nbeginning with that letter.\n");
	printf("Please type in a letter; type # to end my act.\n");
	while ((ch = getchar()) != '#')
	{
		if ('\n' == ch)
		{
			continue;
		}
		if (islower(ch))
		{
			switch (ch)		//整形表达式
			{
			case 'a':		//case 用于匹配，如果匹配成功，则执行case中的语句		常量
				printf("argali, a wild sheep of Asia\n");
				break;		//break 跳出switch语句
			case 'b':
				printf("babiruse, a wild pig of Malay\n");
				break;
			case 'c':
				printf("coati, racoonlike mammal\n");
				break;
			case 'd':
				printf("desman, aquatic, molelike critter\n");
				break;
			case 'e':
				printf("echidna, the spiny anteater\n");
				break;
			case 'f':
				printf("fisher, brownish marten\n");
				break;
			default:		//默认执行，当所有case都匹配不上的时候执行
				printf("That's a stumper!\n");
			}
		}
		else
		{
			printf("I recognize only lowercase letters.\n");
		}
		while (getchar() != '\n')
		{
			continue;		//只读取每行的首字符，跳过输入行的其余部分
		}
		printf("Please type another letter or a #.\n");
	}
	printf("Bye!\n");

	return 0;
}
/*
Give me a letter of the alphabet, and I will give an animal name
beginning with that letter.
Please type in a letter; type # to end my act.
a
argali, a wild sheep of Asia
Please type another letter or a #.
b
babiruse, a wild pig of Malay
Please type another letter or a #.
h
That's a stumper!
Please type another letter or a #.
#
Bye!
*/