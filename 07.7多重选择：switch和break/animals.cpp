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
			switch (ch)		//���α��ʽ
			{
			case 'a':		//case ����ƥ�䣬���ƥ��ɹ�����ִ��case�е����		����
				printf("argali, a wild sheep of Asia\n");
				break;		//break ����switch���
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
			default:		//Ĭ��ִ�У�������case��ƥ�䲻�ϵ�ʱ��ִ��
				printf("That's a stumper!\n");
			}
		}
		else
		{
			printf("I recognize only lowercase letters.\n");
		}
		while (getchar() != '\n')
		{
			continue;		//ֻ��ȡÿ�е����ַ������������е����ಿ��
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