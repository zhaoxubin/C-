#include<Stdio.h>
#pragma warning(disable:4996) /*在VS环境下忽略scanf函数产生的警告*/
int main()
{
	int a[10], j = 0, num = 0;
	printf("please enterten intger ten number " );
	for (; j < 10; j++)
	{
		scanf("%d/n", &a[j]);
		if (a[j]>num)           /*如果a[j]>num,即将a[j]赋值给num*/
			num = a[j];
	}
	printf("the large num is %d / n", num);
}

