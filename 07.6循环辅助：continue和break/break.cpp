/*break.c--使用break退出循环*/
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
			break;		//直接跳出while循环
		}				//执行完break语句后会直接执行循环后面的第一条语句，连更新部分也跳过。
		printf("Width = %0.2f:\n", width);//嵌套循环内层break只会让程序跳出包含它的当前循环。
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