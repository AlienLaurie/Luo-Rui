#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void exc(int a, int b);
void getmap(int str[31][31]);
void getsnake(int str[31][31]);

int main()
{
	int head = 2;
	int tail = 3;
	int apple = 4;			//����ͷ��β��ƻ���Ĵ���

	int lenth = 0;			//������ʼ����

	time_t t;			//����ÿ����ʼʱ��

	char direction = 'w';

	char button='w';			//���ڲ������
	int i, j;

	int str[31][31];			//ʹ�����鶨��һ������
	for (i = 0, j = 0; i <= 29; (j == 29) ? (j = 0, i++) : (j++))
	{
		if ((i == 29) || (j == 29) || (i == 0) || (j == 0))
		{
			str[i][j] = '1';
		}
		else
		{
			str[i][j] = '0';
		}
	}			//��һ�����̣���0/1��ʾ
	int snake[31][31];
	snake

	/*
	for (i = 0, j = 0; i <= 29; (j == 29) ? (j = 0, i++) : (j++))
	{
		if (str[i][j] == '1')
		{
			printf("��");
			if (j == 29)
			{
				printf("\n");
			}

		}
		else
		{
			printf("  ");
		}
	}			//����0/1�����̿��ӻ�
	*/
	/*
	*(*(str+27)+2) = head;
	*(*(str+28)+2) = tail;			//ȷ��������ͷ��β��λ��
	*/
	str[27][1] = head;
	str[28][1] = tail;
	int ihead = 27;
	int jhead = 1;
	int itails[100],jtails[100];
	itails[0] = 28;
	jtails[0] = 1;
	/*
	while (1)
	{
		if (getch() == ' ')
		{
			break;
		}
	}
	*/
	for(;1;)
	{
		t = time(NULL);
		int ihead2 = ihead;
		int jhead2 = jhead;
		if ((button == 'w')&&(direction+button!= 234||197||133||170))
		{
			exc(str[ihead][jhead], str[ihead + 1][jhead]);
			ihead += 1;
		}
		else if ((button == 's') && (direction + button != 234 || 197 || 133 || 170))
		{
			exc(str[ihead][jhead], str[ihead - 1][jhead]);
			ihead -= 1;
		}
		else if ((button == 'a') && (direction + button != 234 || 197 || 133 || 170))
		{
			exc(str[ihead][jhead], str[ihead][jhead - 1]);
			jhead -= 1;
		}
		else if ((button == 'd') && (direction + button != 234 || 197 || 133 || 170))
		{
			exc(str[ihead][jhead], str[ihead][jhead + 1]);
			jhead += 1;
		}
		exc(str[itails[0]][jtails[0]], str[ihead2][jhead2]);			//β�ͺ�ͷ��λ
		itails[0] = ihead2;
		jtails[0] = jhead2;
		for (int i=1,j=1;i<=lenth;i++,j++)
		{
			exc(str[itails[i]][jtails[j]], str[itails[i-1]][jtails[j-1]]);			//��β�ͺ���β�ͻ�λ
		}
		if ((ihead == 0 || 29) || (jhead == 0 || 29))//�����ж�
		{
			break;
		}
		getmap(str);
		direction = button;
		button = getch();
		while (1)
		{
			if (t + 1 == time(NULL))
			{
				break;
			}
		}
	}
	system("pause");
	return 0;
}
void exc(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void getmap(int str[31][31])
{
	int i, j;
	for (i = 0, j = 0; i <= 29; (j == 29) ? (j = 0, i++) : (j++))
	{
		if (str[i][j] == 1)
		{
			printf("��");
			if (j == 29)
			{
				printf("\n");
			}
		}
		else if (str[i][j] == 0)
		{
			printf("  ");
		}
		/*
		else if (str[i][j] == 2)
		{
			printf("��");
			if (j == 29)
			{
				printf("\n");
			}
		}
		else if (str[i][j] == 3)
		{
			printf("��");
		}
		else if (str[i][j] == 4)
		{
			printf("��");
		}
		*/
	}
}
void getsnake(int str[31][31])
{

}