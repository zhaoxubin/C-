#include<stdio.h>
#include<windows.h>
int main()
{
	int i = 0;
	for (i = 1000;i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))/*判定条件：每四年一闰并且百年不闰 或者四百年再闰一次*/
			printf("%d ", i);
	}
	system("pause");
}
