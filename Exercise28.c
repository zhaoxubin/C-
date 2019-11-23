#include<stdio.h>
void OrderedOutput(int a)
{
	if (a > 9){
		OrderedOutput(a / 10);
	}
	printf("%d", a % 10);
}
int main(){
	int a = 1234;
	OrderedOutput(a);
	return 0;
}



