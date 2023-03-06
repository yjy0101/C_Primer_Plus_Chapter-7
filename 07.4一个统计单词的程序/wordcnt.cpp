#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main(void)
{
	char c;					//�����ַ�
	char prev;				//�����ǰһ���ַ�
	long n_chars = 0L;		//�ַ���
	int n_lines = 0;		//����
	int n_words = 0;		//������
	int p_lines = 0;		//�����У���������������
	bool inword = false;	//��ǣ����c�ڵ����У�inword����true

	printf("Enter text to be analyzed (| to terminate��:\n");
	prev = '\n';			//����ʶ����������
	while ((c = getchar()) != STOP)
	{
		n_chars++;			//ͳ���ַ��������س�'\n'�Ϳո�' '
		if (c == '\n')
		{
			n_lines++;		//ͳ������
		}
		if (!isspace(c) && !inword)
		{
			inword = true;	//��ʼһ���µĵ���
			n_words++;		//ͳ�Ƶ���
		}
		if (isspace(c) && inword)
		{
			inword = false;	//�򵽵��ʵ�ĩβ
		}
		prev = c;			//�����ַ���ֵ
	}

	if (prev != '\n')		
	{
		p_lines = 1;
	}
	printf("characters = %ld, words = %d, lines = %d", n_chars, n_words, n_lines);
	printf(" partial lines = %d\n", p_lines);

	return 0;
}
/*
Enter text to be analyzed (| to terminate��:
ni gan ma
hai hai yo
ji ni tai mei
liang nian ban
ni hao fan | a
characters = 61, words = 16, lines = 4 partial lines = 1  
*/