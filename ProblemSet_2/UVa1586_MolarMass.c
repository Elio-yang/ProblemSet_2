/*
��һ������ʽֻ����C H O N����������Է���������
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[10];
	scanf("%s", &a);
	double mass=0;
	int num = 1;
	for (int i = 0; i < strlen(a); i++)
	{
		if (isalpha(a[i]))
		{
			if (isdigit(a[i + 1]))
			{
				num = a[i + 1] - '0';
				if (isdigit(a[i + 2]))
				{
					num = num * 10 + a[i + 2] - '0';
				}
			}
			if(a[i]== 'C')
				mass += 12.01*num;
			else if (a[i] == 'H') 
				mass += 1.008*num;
			else if (a[i] == 'O') 
				mass += 16.00*num;
			else if (a[i] == 'N')
				mass += 14.01*num;
		}
		else
		{
			num = 1;//�������ַ������֣���Ԫ�ط��ŵĸ�������Ϊ1
		}
	}
	printf("%lf", mass);

	return 0;
}