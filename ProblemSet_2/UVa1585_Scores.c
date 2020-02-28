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