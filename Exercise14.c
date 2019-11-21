#include<stdio.h>
#pragma warning(disable:4996) /* 屏蔽scanf输入的警告 */
int main()
{
	int number = 0;
	printf("请输入你想要的查找的数字");
	scanf("%d", &number);
	int array[] = { 2, 12, 22, 32, 42, 52, 62, 72, 82, 92, 102 };
	int right = (sizeof(array) / sizeof(array[0]))-1;
	int left = 0;
	
	while (left <= right)   /*当left《=right成立时持续查找*/
	{
		int mid = left + (right - left) / 2; /*找出中间位置*/
		if (number>array[mid])
		{
			left = mid + 1;        /*如果要查找的数字大于数组中间位置数据，便将中间位置mid赋给left，下次即在数组右边查找*/

		}
		else if (number < array[mid])
		{
			right = mid - 1;      /*如果要查找的数字小于数组中间位置数据，便将中间位置mid赋给right，下次即在数组左边查找*/
		}
		else
		{
			printf("%d", mid);   /*找到了返回相应位置*/
			break;
		}
		if (left>right)
			printf("%d", -1);  /*没找到返回-1*/

	}
	return 0;
}
