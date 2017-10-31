#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b,c,d,q,w,e,r,t,y;
	d = 0;
	while (d!=4)
	{
		printf("1.正方形2.長方形3.等腰直角3角形4.結束\n");
		printf("請輸入功能\n");
		scanf_s("%d", &c);
		switch (c)
		{
		case 1:
		{
			printf("正方形邊長\n");
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
			printf("長方形高和寬\n");
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
			printf("等腰直角三角形邊長\n");
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
	
	printf("結束\n");
	system("pause");
	return 0;
}