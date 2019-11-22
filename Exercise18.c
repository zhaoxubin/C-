#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int swp(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	return(*x);
	return(*y);
}
int main()
{
	int a = 0, b = 0;
	printf("please enter two integer ");
	scanf("%d %d", &a, &b);
	swp(&a, &b);
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}
