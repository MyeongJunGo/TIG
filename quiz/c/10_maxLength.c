#include <stdio.h>

int main(void)
{
	char ch;
	int cnt = -1;
	int max = 0;

	// This is the question that you can't use array
	while((ch = getchar()) != 'Q'){
		cnt++;

		if(ch == '\n'){
			if(max < cnt){
				max = cnt;
			}
			cnt = -1;
		}
	}

	printf("max lenght : %d\n", max);

	return 0;
}
