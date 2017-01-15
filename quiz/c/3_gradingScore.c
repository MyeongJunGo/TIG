#include <stdio.h>

int main(void)
{
	int i;
	int score[5] = {0};
	double avg = 0;
	int max, min;

	printf("Write score which appraiser mark : ");
	
	//input score
	for(i = 0; i < sizeof(score) / sizeof(score[0]); i++){
		scanf("%d", &score[i]);
		avg += score[i];
	}

	avg = avg / (double)(sizeof(score) / sizeof(score[0]));

	//search max / min
	max = score[0];
	min = score[0]; // If you want to reuse vaild score, Make another array 
	for(i = 0; i < sizeof(score) / sizeof(score[0]); i++){
		if(max < score[i]){
			max = score[i];	
		}

		if(min > score[i]){
			min = score[i];
		}
	}

	//output vaild score
	printf("vaild score : ");
	for(i = 0; i < sizeof(score) / sizeof(score[0]); i++){
		if((score[i] != max) && (score[i] != min)){
			printf("%d ", score[i]);
		}
	}
	
	puts(" ");
	//output avg
	printf("avg : %.1lf\n", avg);

	return 0;
}
