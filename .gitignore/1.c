#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int str[13][13];
	int i, j;
	for (i =0, j = 0; i<=11; (j == 12) ? (j = 0, i++) : (j++))
	{
		if ((i == 11) || (j == 11) || (i == 0) || (j == 0))
		{
			str[i][j] = '1';
		}
		else
		{
			str[i][j] = '0';
		}
	}
	for (i = 0, j = 0; i <= 11; (j == 11) ? (j = 0, i++) : (j++))
	{
		if (str[i][j] == 1)
		{
			printf("■");
			if (j == 11)
			{
				printf("\n");
			}

		}
		else
		{
			printf("□");
		}
	}
	system("pause");
	return 0;
}
