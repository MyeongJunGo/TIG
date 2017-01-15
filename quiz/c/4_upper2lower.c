#include <stdio.h>

int main(void)
{
	int i = 0;
	int cnt = 0;
	char str[50];

	printf("Write string : ");
	gets(str);

	printf("Changed string : ");
	while(str[i] != '\0'){
		if((str[i] >= 65) && (str[i] <= 90)){
			printf("%c", str[i]+('a'-'A'));
			cnt++; 
		}else{
			printf("%c", str[i]);
		}
		i++;
	}
	
	puts(" ");
	printf("Count changed string : %d\n", cnt);

	return 0;
}
