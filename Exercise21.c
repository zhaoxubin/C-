#include<stdio.h>
#pragma warning(disable:4996);
int Fib(int k)
{
	if (1 == k || 2 == k)
	{
		return(1);
	}
	else
	{
		return Fib(k - 1) + Fib(k - 2);
	}
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	int sum=Fib(n);
	printf("%d", sum);
	return 0;
}
