#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (((a==1)&&(b==5))||((a == 9) && (b == 5)))
			{
				printf("*");
			}
			if (((a == 2) && (b == 4)) || ((a == 2) && (b ==5))|| ((a == 8) && (b == 4)) || ((a == 8) && (b == 5)))
			{
				printf("*");
			}
			if (((a == 3) && (b == 3)) || ((a == 3) && (b == 6)) || ((a == 7) && (b == 3)) || ((a == 7) && (b == 6)))
			{
				printf("*");
			}
			if (((a == 4) && (b == 2)) || ((a == 4) && (b == 7)) || ((a == 6) && (b == 2)) || ((a == 6) && (b == 7)))
			{
				printf("*");
			}
			if (((a == 5) && (b == 1)) || ((a == 5) && (b == 9)) || ((a == 5) && (b == 1)) || ((a == 5) && (b == 9)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}