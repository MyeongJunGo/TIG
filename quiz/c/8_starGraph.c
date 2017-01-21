#include <stdio.h>

void print_graph(int * ps, int size);

int main(void)
{
	int score[5] = {72, 88, 95, 64, 100};

	print_graph(score, sizeof(score) / sizeof(score[0]));

	return 0;
}

void print_graph(int * ps, int size)
{
	int i, j;
	int starNum;
	
	for(i = 0; i < size; i++)
	{
		starNum = ps[i] / 5;
		printf("( %d)\t", ps[i]);

		for(j = 0; j < starNum; j++)
		{
			printf("*");
		}

		puts(" ");
	}
}
