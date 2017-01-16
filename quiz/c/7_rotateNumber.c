#include <stdio.h>
#include <string.h>

void rotate(int * pa, int * pb, int * pc);

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;

	printf("befor : %d, %d, %d \n", num1, num2, num3);

	while(getchar() == 10) // escape codition is not enter
	{
		rotate(&num1, &num2, &num3);
		printf("after : %d, %d, %d ", num1, num2, num3);
	}

	return 0;
}

void rotate(int * pa, int * pb, int * pc)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;
}

