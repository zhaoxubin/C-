
#include<stdio.h>
int main()
{
	int a=4, b=5;
	a = b + a;
	b = a - b;    /* b=b+a-b-->b=a */
	a = a - b;     /*a=a-a-b-->a=b*/
	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
