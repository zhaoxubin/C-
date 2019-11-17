#include<Stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a[3], i = 0;
	printf("please enterthree intger num ");
	scanf("%d %d %d/n",
		&a[0], &a[1], &a[2]);
	if (a[0]<a[1])
	{
		i = a[0]; a[0] = a[1]; a[1] = i;
	}
	if (a[0] < a[2])
	{
		i = a[0]; a[0] = a[2]; a[2] = i;
	}
	if (a[1] < a[2])
	{
		i = a[1]; a[1] = a[2]; a[2] = i;
	}
	printf("%d %d %d/n", a[0], a[1], a[2]);
}
