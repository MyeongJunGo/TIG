#include <stdio.h>

int main(void)
{
	char ch;

	while((ch = getchar()) != '\n'){
		if((ch >= 'A') && (ch <= 'Z')){
			printf("%c", ch + ('a' - 'A'));
		}else{
			printf("%c", ch - ('a' - 'A'));	
		}
	}
	puts("");
	return 0;
}
