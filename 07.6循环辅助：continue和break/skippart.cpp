/*skippart.c--使用continue跳过部分循环*/
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
		if (score < MIN || score > MAX)	//对分数进行合法性校验		// ||
		{															// ||
			printf("%0.1f is an invalid value.Try again: ", score);	// ||
			continue;	//跳过至while循环的测试条件(即不会执行后面的语句);continue只能在循环语句里面写
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
//使用continue的好处是减少主语句组中的一级缩进；当语句很长或嵌套较多的时候，紧凑简介的格式提高了代码的可读性

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