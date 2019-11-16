#include<stdio.h>
int main()
{
	int i = 0; int j = 0;
	for (i = 1; i <= 9; i++)    /*打印i行*/
	{
		for (j = 1; j <= i; j++)   /*打印i行应有j个的表达式*/
		{
			printf("%d*%2d=%d  ", i,j, i*j);
		}
		printf("\n");
	}
}
