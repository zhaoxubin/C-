#include<stdio.h>
#pragma warning(disable:4996)
int Index(int a, int b){
	if (b == 1){
		return(a);
	}
	else{
		return(a*Index(a, b - 1));
	}
}

int main(){
	int a = 0, b = 0;
	printf("enter the number \n");
	scanf("%d", &a);
	printf("entere the number index\n");
	scanf("%d", &b);
	int sum = Index(a, b);
	printf("%d\n", sum);
	return 0;
}
