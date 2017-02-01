#include <stdio.h>

int check_same(int *lotto_nums, int *my_nums);

int main(void)
{
	int validNum = 0;
	int lotto_nums[6] = {4, 10, 25, 30, 41, 45};
	int my_nums[6] = {1, 4, 7, 22, 41, 43};

	validNum = check_same(lotto_nums, my_nums);

	printf("valid num count : %d \n", validNum);

	return 0;
}

int check_same(int *lotto_nums, int *my_nums)
{
	int cnt = 0;
	int i, j;

	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
			if(lotto_nums[i] == my_nums[j]){
				cnt++;
			}
		}
	}

	return cnt;
}
