#include<stdio.h>
#include<windows.h>
int main()
{
	int i = 0, a = 0, b = 0, c = 0;
	for (; i <= 999; i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		if (a*a*a + b*b*b + c*c*c == i)
		{
			printf("%d是水仙花数\n",i);
		}
	}
	system("pause");
	return 0;
}
