#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int mul(int n)
{
	int i = 0; int j = 0;
	for (i = 1; i <= n; i++)     /*让i<n，即可控制输出行数*/
	{
		for (j = 1; j <= i; j++)   /*让j<i，即可控制输出每行的表达式个数*/
		{
			printf("%d*%2d=%d  ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	printf("please enter the number");
	scanf("%d", &n);
	mul(n);
	system("pause");
}
