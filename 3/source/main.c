#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b,c,d,q,w,e,r,t,y;
	d = 0;
	while (d!=4)
	{
		printf("1.�����2.�����3.���y����3����4.����\n");
		printf("�п�J�\��\n");
		scanf_s("%d", &c);
		switch (c)
		{
		case 1:
		{
			printf("��������\n");
			scanf_s("%d", &q);
			for (t = 1; t <= q; t++)
			{
				for (y = 1; y <= q; y++)
				{
					printf("* ");
				}
				printf("\n");
			}
			break;
		}
		case 2:
		{
			printf("����ΰ��M�e\n");
			scanf_s("%d %d", &w,&e);
			for (t = 1; t <= w; t++)
			{
				for (y = 1; y <= e; y++)
				{
					printf("* ");
				}
				printf("\n");
			}
			break;
		}
		case 3:
		{
			printf("���y�����T�������\n");
			scanf_s("%d", &r);
			for (t = 1; t <= r; t++)
			{
				for (y = 1; y <= t; y++)
				{
					printf("* ");
				}
				printf("\n");
			}
			break;
		}
		case 4:
		{
			d=4;
			break;
		}
		}
	}
	
	printf("����\n");
	system("pause");
	return 0;
}