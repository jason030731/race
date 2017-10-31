#include <stdio.h>
#include <stdlib.h>

int main()
{
	int q, w, e, r, t ,temp,u;
	float b;
	printf("請輸入5個數字");
	scanf_s("%d %d %d %d %d",&q, &w, &e, &r, &t);

	for (u = 1; u < 50; u++)
	{
		if (q > w)
		{
			temp = q;
			q = w;
			w = temp;
		}
		if (w > e)
		{
			temp = e;
			e = w;
			w = temp;

		}
		if (e > r)
		{
			temp = e;
			e = r;
			r = temp;

		}
		if (r > t)
		{
			temp = r;
			r = t;
			t = temp;
		}
	}
	b = (q + w + e + r + t) / 5;
	printf("最大值=%d\n最小值=%d\n平均值=%.2f\n中間值=%d\n",t,q,b,e);
	system("pause");
	return 0;
}