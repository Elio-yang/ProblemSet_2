#include <stdio.h>
int arr[1000000][10];
int main()
{
	int i, j, k;
	for (i = 1; i <= 1000000; i++)
	{
		for (j = 0; j < 10; j++)
		{
			arr[i][j] = arr[i - 1][j];
		}
		for (k = i; k; k /= 10)
		{
			arr[i][k % 10]++;
		}
	}
	int num;
	scanf("%d", &num);
	for (i = 0; i < 10; i++)
        printf("%4d",i);
    printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%4d", arr[num][i]);
	}
	return 0;
}