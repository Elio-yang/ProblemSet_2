/*
��ǰn(n<=100000)��������˳��д��һ��,����n=3ʱ��123,
n=6ʱ��123456
ͳ������0~9���ֵĴ�����
*/
#include<stdio.h>
int arr[1000000][10];
int main()
{
	//�����ά����
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