game.h
头文件及函数声明
#ifndef __GAME_H__
#define __GAME_H__
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<time.h>
#pragma warning(disable:4996)
#define Row 12      /*宏定义行为12*/
#define Col 12       /*宏定义列为12*/
#define Mine 20      /*宏定义炸弹数量为20*/
void Setmine(char board[][Col], int row, int col, int *x_pos, int *y_pos);  /*声明布雷函数*/
void Showboard(char board[][Col], int row, int col);       /*声明展示盘函数*/
int Count(char board[][Col], int x, int y);          /*声明统计某位置雷的个数函数*/
void Game();                /*声明游戏函数*/
# endif
```

```c
game.c
子函数的模块
#include "game.h"
void Setmine(char board[][Col], int row, int col, int *x_pos, int *y_pos)    /*定义布雷函数*/
{
	int count = Mine;
	int x = 0;
	int y = 0;
	while (count > 0){                       /*count=20,即循环随机生成20个雷*/
		x = rand() % (row - 2) + 1;         /*随机生成x，y作为一个坐标，并将雷盘此位置设为1，表示有雷*/
		y = rand() % (row - 2) + 1;
		if (board[x][y] == '0'){
			count--;
			board[x][y] = '1';
		}
	}
	int i = 1;
	for (; i <= 10; i++)
	{
		int j = 1;
		for (; j <= 10; j++){
			if (board[i][j] == '0'){
				*x_pos = i;           /*遍历雷盘数组，找到一个‘0’位，即无雷位，并将此位置x，y用指针*x_pos与*y_pos带出*/
				*y_pos = j;
			}
		}
	}
}


void Showboard(char board[][Col], char row, char col) {     /*定义展示盘函数*/
	int i = 1;
	for (; i <= 10; i++){
		printf("    %d", i);
	}
	printf("\n");
	for (i = 1; i <= 13;i++)
	{
		printf("----");
	}
	printf("\n");
	for (i = 1; i <= 10; i++){
		printf("%2d |", i);
		int j = 1;
		for (; j <= 10; j++){
			printf(" %c | ", board[i][j]);
		}
		printf("\n");
		int a = 1;
		for (; a <= 13; a++)
		{
			printf("----");
		}
		printf("\n");
	}
}
int Count(char board[][Col], int x, int y) {         /*定义统计某位置雷的个数函数*/

	return (board[x+1][y-1] + board[x][y-1] + board[x][y+1] + board[x+1][y] + \
		board[x-1][y] + board[x-1][y-1] + board[x+1][y+1] + board[x-1][y+1] - 8 * '0');
	/*方法：将雷盘某位置周围八个字符加起来，再减8*0，即可得到周围雷的个数/
}

void Game(){                       /*游戏函数定义*/
	srand((unsigned long)time(NULL));    /*随机数种子*/
	char mine_board[Row][Col];        /*定义字符雷盘*/
	char show_board[Row][Col];         /*定义字符展示用户盘*/
	memset(mine_board, '0', sizeof(mine_board));   /*初始化雷盘单字节为字符0*/
	memset(show_board, '*', sizeof(show_board));  /*初始化展示盘单字节为字符**/
	int n_x;    /*定义变量 n_x,n_y用于接收布雷函数中传出的无雷位*/
	int n_y;
	Setmine(mine_board, Row, Col,&n_x,&n_y);
	int x = 0;
	int y = 0;
	int times = 100 - Mine;   /*定义times为80，即用户需要排雷80次，才能成功排除所有雷，游戏才能获胜*/
	do{
		system("cls");
		Showboard(show_board, Row, Col);     /*游戏开始，首先展示用户盘即全‘*’盘*/
		printf("请输入你的选择\n");
		scanf("%d %d", &x, &y);  /*用户自由选择要排除的位置*/
		if (x<1 || x>10 || y<1 || y>10){            /*判断输入的合法性*/
				printf("你的输入有误，请重新输入\n");
				continue;
			}
		if (show_board[x][y] != '*'){         /*判断输入位置是否已经排除*/
				printf("该位置已经被排除，请重新输入\n");
			}
		if (mine_board[x][y] == '1'){     /*如果输入位置对应雷盘位置为‘1’*/
			if (times == 80){          /*且如果次数为80，即第一次，*/
				mine_board[x][y] = '0';/*即将雷盘此位置置为‘0’*/
				mine_board[n_x][n_y] = '1';  /*且将布雷时传出的雷盘空位'0'置为‘1’，目的改变雷的位置，
											 让用户不被第一次排雷就炸死*/
				}
				else{
					printf("Game over!");
					Showboard(mine_board, Row, Col); /*游戏结束后将雷盘展示出来给用户*/
					break;
				}
			}
			int count = Count(mine_board, x, y);
			show_board[x][y] = count + '0';    /*将统计出来的雷的个数设为指定位置的内容，即展示选中位置雷的个数*/
			times--;
	} while (times>0);
	
}
```

```c
main.c
游戏界面函数及main函数模块
#include "game.h"
void Menu(){
	printf("############################################\n");       /*游戏菜单    1：玩    2：退出*/
	printf("#####       欢迎来到扫雷游戏         #######\n");
	printf("##### 1：play          2：exit #############\n");
	printf("############################################\n");
	printf("游戏加载完成，请选择\n");
}
int main(){
	int quit = 0;        /*定义变量游戏循环判定条件*/
	while (!quit){       /*!quit  持续循环 游戏继续*/
		Menu();
		int select = 0;
		scanf("%d", &select);
		switch (select){      /*选择语句，游戏或者退出*/
		case 1:Game();
			break;
		case 2:quit = 1;    /*quit赋值为1，退出循环游戏结束*/
			break;
		default:
			printf("你的输入有误，请重新选择\n");
			break;
		}
		
	}
	printf("Bye Bye!欢迎再来挑战\n");
	system("pause");
	return 0;
}
