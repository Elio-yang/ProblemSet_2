/*
字符串以某个长度为k的字符串重复多次出现得到，则称该串以k为周期
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char arr[85];
	int j;
	scanf("%s", arr);
	int length = strlen(arr);
	for (int i = 1; i <= length; i++)
	{
		if (length%i == 0)
		{
			for (j = i; j < length; j++)
			{
				if (arr[j] != arr[j%i])
				{
					break;//有不合条件的就跳出循环
				}
			}
			if (j == length)
			{
				printf("%d", i);
				break;
			}
		}
	}
	printf("\n");
	system("pause");
	return 0;
}

