#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	float q;
	float f,w;
	printf("�п�J�q? ��? �϶�?");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("\n");
	while (a<=b)
	{
		q = 0.454;
		f = a;
		w = f*q;
		printf("%d�S=%.2f����",a,w);
		a += c;
		printf("\n");
	}


	int t, y, u;
	float g, h;
	printf("�п�J�q? ��? �϶�?");
	scanf_s("%d %d %d", &t, &y, &u);
	printf("\n");
	
	do
	{
		q = 0.454;
		g = t;
		h = g/q;
		printf("%d����=%.2f�S", t, h);
		t += u;
		printf("\n");
	} while (t <= y);
	system("pause");
	return 0;
}