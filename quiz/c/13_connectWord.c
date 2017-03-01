/*
name : Go Myeong Jun
descripton : Connect char
date : 17.03.01
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char nowStr[20];
	char tempStr[20] = " \0";
	char str[100];

	printf("Write word : ");
	scanf("%s", str);	
	printf("now string : %s \n", str);

	while(1){
		printf("Write word : ");
		scanf("%s", nowStr);	

		if(strcmp(nowStr, "end") == 0){
			break;
		}

		strcat(tempStr, nowStr);
		strcat(str, tempStr);
		printf("now string : %s \n", str);
		strcpy(tempStr, " ");
	}
	
	return 0;
}
