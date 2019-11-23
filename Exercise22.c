#include<stdio.h>
#pragma warning(disable:4996);
int Power(int k)
{
	
	return	k > 0 ? k*Power(k - 1) : 1; /*三目表达式*/
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	int sum=Power(n);
	printf("%d", sum);
	return 0;
}
