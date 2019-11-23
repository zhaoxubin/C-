#include<stdio.h>
void reverse_string(char *a){
	if (*a != '\0'){
		reverse_string(a + 1);
		printf("%c", *a);
	}
}
int main(){
	char a[] = "abcd";
	reverse_string(a);
	return 0;
}
