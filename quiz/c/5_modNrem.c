#include <stdio.h>

void func(int * mod, int * rem)
{
	int num;

	printf("input num : ");
	scanf("%d", &num);

	*mod = num / 4;
	*rem = num % 4;
}

int main(void)
{
	int mod, rem;
	func(&mod, &rem);
	printf("mod : %d, rem : %d\n", mod, rem);

	return 0;
}
