#include<stdio.h>
#include<string.h>
int count = 0;
int strlen(char *a){
	if (*a != '\0'){
		count++;
		strlen(a + 1);
	}
	return(count);
}
int main(){
	char a[] = "abcd";
	char count= strlen(a);
	printf("%d",count );
	return 0;
}
