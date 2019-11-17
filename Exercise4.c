#include<stdio.h>
int main()
{
	int a = 4, b = 5;
	a = a^b;
	b = a^b;    /*因为a=a^b所以 b=a^b^b 其中b^b=0,则a^0=a,最终b=a */
	a = a^b;   /*因为b=a^b所以 b=a^a^b 其中a^a=0,则b^0=b,最终a=b */
	printf("a=%d   b=%d", a, b);
}



