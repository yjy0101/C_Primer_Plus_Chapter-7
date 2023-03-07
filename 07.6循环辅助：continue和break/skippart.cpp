/*skippart.c--ʹ��continue��������ѭ��*/
#include<stdio.h>
int main(void)
{
	const float MIN = 0.0f;
	const float MAX = 100.0f;

	float score;
	float total = 0.0f;
	int n = 0;
	float min = MAX;
	float max = MIN;

	printf("Enter the first score (q to quit): ");
	while (scanf_s("%f",&score) == 1)	//	<<<<========================
	{																// ||
		if (score < MIN || score > MAX)	//�Է������кϷ���У��		// ||
		{															// ||
			printf("%0.1f is an invalid value.Try again: ", score);	// ||
			continue;	//������whileѭ���Ĳ�������(������ִ�к�������);continueֻ����ѭ���������д
		}
		printf("Accepting %0.1f:\n", score);
		min = (score < min) ? score : min;
		max = (score > max) ? score : max;
		total += score;
		n++;
		printf("Enter next score (q to quit): ");
	}
	if (n > 0)
	{
		printf("Average of %d scores is %0.f.\n", n, total / n);
		printf("Low = %0.1f, high = %0.1f\n", min, max);
	}
	else
	{
		printf("No valid scores were entered.\n");
	}

	return 0;
}
//ʹ��continue�ĺô��Ǽ�����������е�һ�������������ܳ���Ƕ�׽϶��ʱ�򣬽��ռ��ĸ�ʽ����˴���Ŀɶ���

/*
Enter the first score (q to quit): 50
Accepting 50.0:
Enter next score (q to quit): 30
Accepting 30.0:
Enter next score (q to quit): 44
Accepting 44.0:
Enter next score (q to quit): 23
Accepting 23.0:
Enter next score (q to quit): 200
200.0 is an invalid value.Try again: 3
Accepting 3.0:
Enter next score (q to quit): -5
-5.0 is an invalid value.Try again: 01
Accepting 1.0:
Enter next score (q to quit): q
Average of 6 scores is 25.
Low = 1.0, high = 50.0
*/