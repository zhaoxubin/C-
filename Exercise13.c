#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<time.h>
#pragma warning(disable:4996)
#define user "zhaoxubin"        
#define paswd "123456"
void menu()                  /*游戏菜单函数*/
{
	printf("#################################\n");
	printf("##          猜数字游戏      #####\n");
	printf("##    1：PLAY       0:EXIT  #####\n");
	printf("#################################\n");
	printf("请输入你的选择\n");
}
void play()             /*游戏函数*/
{
	int n = rand() % 100 + 1;     /*生成随机数n*/
	do{
		int guess = 0;
		printf("please guess\n");
		scanf("%d", &guess);
		if (guess>n)
		{
			printf("your guess is big\n");
		}
		else if (guess < n)
		{
			printf("your guess is small\n");
		}
		else
		{
			printf("you are right\n");
			break;
		}

	} while (1);
}
int main()
{
	char name[32];
	char password[20];
	int i = 3;
	while (i)
	{
		i--;                                     /*登录游戏设计*/
		printf("please enter your name\n");
		scanf("%s", &name);
		printf("please enter your password\n");
			scanf("%s", &password);
			if (strcmp(user, name)==0 && strcmp(paswd, password)== 0)
			{
				break;
			}
			else
			{
				printf("你还有i次机会，请继续输入\n");
			}

	}
	if (i > 0){
		printf("login sucessful\n");
		int p = 9;
		while (p > 0)
		{
			printf("loding...........%d\r", p);   /*设计了一个加载的过程*/
				Sleep(1000);
		             p--;
		}
		printf("loding done\n");
		srand((unsigned long)time(NULL));    /*随机数种子*/
		int select = 0;
		int quit =1;
		while (quit)      /*选择逻辑，1游戏，0退出*/
		{
			menu();
			scanf("%d", &select);
			switch (select)
			{
			case 1:play();
				break;
			case 0:quit = 0;
				printf("BYE BYE\n");
				break;
			default:
				printf("你的选择有误请重新选择\n");
				break;
			}
		}
	}
	else
	{
		printf("login failed\n");
	}
	system("pause");
	return 0;

}

