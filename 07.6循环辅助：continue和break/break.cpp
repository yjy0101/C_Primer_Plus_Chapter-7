/*break.c--ʹ��break�˳�ѭ��*/
#include<stdio.h>
int main(void)
{
	float length, width;

	printf("Enter the length of the rectangle:\n");
	while (scanf_s("%f",&length) == 1)
	{
		printf("Length = %0.2f:\n", length);
		printf("Enter its width:\n");
		if (scanf_s("%f",&width) != 1)
		{
			break;		//ֱ������whileѭ��
		}				//ִ����break�����ֱ��ִ��ѭ������ĵ�һ����䣬�����²���Ҳ������
		printf("Width = %0.2f:\n", width);//Ƕ��ѭ���ڲ�breakֻ���ó��������������ĵ�ǰѭ����
		printf("Area = %0.2f:\n", length * width);
		printf("Enter the length of the rectangle:\n");
	}
	printf("Done!\n");

	return 0;
}
/*
Enter the length of the rectangle:
3.0
Length = 3.00:
Enter its width:
4.0
Width = 4.00:
Area = 12.00:
Enter the length of the rectangle:
5.0
Length = 5.00:
Enter its width:
q
Done!
*/