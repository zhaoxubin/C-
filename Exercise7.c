#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, i = 0;
	printf("please entertwo intger num");
	scanf("%d %d", &a, &b);
	if (a > b){
		for (i = b; i > 0; i--)
		{
			if (a%i == 0 && b%i == 0)
			{
				printf("%d/n", i);
				break;
			}

		}
	}
	else
	{
		for (i = a; i > 0; i--)
		{
			if (a%i == 0 && b%i == 0)
			{
				printf("%d/n", i);
				break;
			}

		}

	}
		system("pause");
		return(0);
}
