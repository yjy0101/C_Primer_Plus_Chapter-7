#include<stdio.h>
#define SPACE ' '			//SPAECE��ʾ������-�ո�-������
int main(void)
{
	char ch;					//�Ӽ�����¼��������ַ���Ȼ��Enter�������뻺����

	ch = getchar();				//��ȡһ���ַ�
	while (ch != '\n')			//��һ��δ����ʱ
	{
		if (ch == SPACE)		//���¿ո�
		{
			putchar(ch);		//���ַ�����
		}
		else
		{
			putchar(ch + 1);	//�ı������ַ�
		}
		ch = getchar();			//��ȡ��һ���ַ�
	}
	putchar(ch);				//��ӡ���з�

	return 0;
}
/*
Hello world!
Ifmmp xpsme"
*/