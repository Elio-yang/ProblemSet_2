/*
把前n(n<=100000)个整数按顺序写在一起,例如n=3时，123,
n=6时，123456
统计数字0~9出现的次数。
*/
#include<stdio.h>
int arr[1000000][10];
int main()
{
	//处理二维数组
	int i, j, k;
	for ( i = 1; i <= 1000000; i++)
	{
		for ( j = 0; j < 10; j++)
		{
			arr[i][j] = arr[i - 1][j];
		}
		for ( k = i; k; k /= 10)
		{
			arr[i][k % 10]++;
		}
	}
	int num;
	scanf("%d", &num);
	for (i = 0; i < 9; i++)
	{
		printf("%d", arr[num][i]);
	}
	return 0;
}