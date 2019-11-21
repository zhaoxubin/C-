#include<Stdio.h>
#include<windows.h>
int main()
{
	while (1){
		char a = getchar();

		if (a >= 'a'&&a <= 'z')
		{
			a = a - 32;
			putchar(a);
			printf("\n");
		}
		else	if (a >= 'A'&&a <= 'Z')
		{
			a = a + 32;
			putchar(a);
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
