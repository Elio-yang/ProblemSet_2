/*
给出一个由O和X组成的字符串(长度为80以内)，每个O的得分为目前连续出现的O的数量，X得分为0，统计得分。
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char a[90];
	scanf("%s", &a);
	int score = 0;
	int sum = 0;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == 'O')
		{
			score++;
			sum += score;
		}
		else
		{
			score = 0;
		}
	}
	printf("%d", sum);

	return 0;
}