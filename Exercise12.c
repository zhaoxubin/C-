#include<stdio.h>
#include<windows.h>
#define sn(a) ((a)+(a)*(a)+(a)*(a)*(a)+(a)*(a)*(a)*(a)+(a)*(a)*(a)*(a)*(a))/*宏定义sn，并且对sn传参a，后面的表达式结果作为a传给sn*/
int main()
{
	int a = 0;
	printf("请输入一个任意整数");
	scanf("%d", &a);
	printf("%d", sn(a));
	return 0;
}
