#include<stdio.h>
#include<windows.h>
int reverse(int array1[],int size)
{
	int	i = 0, temp = 0,times=size/2;
	for (i = 0; i<times; i++)
	{
		temp = array1[i];
		array1[i] = array1[size - i];
		array1[size - i] = temp;
	}
	return array1;
}
int main()
{
	int array[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int i = (sizeof(array)/sizeof(array[0]))-1;
	int y = 0;
	reverse(array,i);
	for (; y < 8; y++)
	{
     printf("%d", array[y]);
	}
	system("pause");
	return 0;
}
