#include<stdio.h>
#include<windows.h>
int main()
{
int a[5] = { 1, 2, 3, 4, 5 },
	b[5] = { 6, 7, 8, 9, 10 },temp=0,i = 0;
printf("before a[5]:");
 for (i=0; i < 5; i++)
{
	printf("%d",a[i]);
}
 printf("\n");
 printf("before b[5]:");
for (i=0; i < 5; i++)
{
	printf("%d",b[i]);
}


for (i=0; i < 5; i++)
{
 temp = a[i];
a[i] = b[i];
b[i] =temp;

}
printf("\n");
printf("after a[5]:");
for (i=0; i < 5; i++)
{
	printf("%d",a[i]);
}
printf("\n");
printf("after b[5]:");
for (i=0; i < 5; i++)
{
	printf("%d",b[i]);
}
system("pause");
return 0;
}
