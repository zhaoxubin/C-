#include<stdio.h>
#include<string.h>
#include<windows.h>
#pragma warning(disable:4996)
#define paswd "123456"
int main()
{
	int i = 3;

	char string[32];
	for (; i >0; i--){
		printf("please enter the six digits \n");
		scanf("%s", &string);
		if (strcmp(string, paswd) == 0){
			printf("login successful");
			break;
		}
		else {
			if (i != 1){
				printf("you have %d chance\n   ", i - 1);
			}
			printf("login failed,please lodin again%\n");
			continue;
		}
	}
	system("pause");
	return 0;
}
