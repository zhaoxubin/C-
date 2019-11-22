#include<stdio.h>
#include<windows.h>
#include<math.h>
#pragma warning(disable:4996)
void isPrime(int x){
	int i = 2;
	for (; i <= sqrt(x); i++){
		if (x%i == 0)
		{
			break;
		}
	}
	if (i <= sqrt(x)){
		printf("%d isn't prime",x);
	}
	else{
		printf("%d is prime",x);
	}
}
int main()
{
	int i = 0;
	printf("please enter a integer");
	scanf("%d", &i);
	isPrime(i);
	system("pause");
	return 0;
}


