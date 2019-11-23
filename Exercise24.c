#include<stdio.h>
#pragma warning(disable:4996)
int DigitSum(int a){
	if (a){
		return(a % 10 + DigitSum(a / 10));
	}
	else{
		return 0;
	}
}
int main(){
	int a = 0, c = 0;
	printf("please enter ");
	scanf("%d", &a);
	c = sizeof(a);
	int sum = DigitSum(a);
	printf("%d", sum);
	return 0;
}

