#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, i = 0,temp=0;
	printf("please entertwo intger num");
	scanf("%d %d", &a, &b);
	if (a > b){
		temp = b;
	}
	else
	{
		temp = a;
	}

		for (i = temp; i > 0; i--)
		{
			if (a%i == 0 && b%i == 0)
			{
				printf("%d/n", i);
				break;
		
			}
		}
		system("pause");
		return(0);
