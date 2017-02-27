/*
name : Go Myeong Jun
description : Compare three words to use char function
date : 17.02.27
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[50], str2[50], str3[50];

	printf("Write three words : ");
	scanf("%s %s %s", str1, str2, str3);

	if(strcmp(str1, str3) < 0)
	{
		if(strcmp(str2, str1) < 0)
		{
			printf("%s %s %s", str2, str1, str3);
		}
		else if(strcmp(str2, str3) > 0)
		{
			printf("%s %s %s", str1, str3, str2);
			
		}
		else
		{
			printf("%s %s %s", str1, str2, str3);
		}
	}
	else
	{
		if(strcmp(str1, str2) < 0)
		{
			printf("%s %s %s", str3, str1, str2);

		}
		else if(strcmp(str2, str1) < 0)
		{
			if(strcmp(str2, str3) < 0)
			{
				printf("%s %s %s", str2, str3, str1);
			}
			else
			{
				printf("%s %s %s", str3, str2, str1);

			}
		}

	}

	return 0;
}
