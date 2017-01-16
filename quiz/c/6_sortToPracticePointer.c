#include <stdio.h>

void swap(double * pa, double * pb);
void line_up(double * maxp, double * midp, double * minp);

int main(void)
{
	double max, mid, min;

	printf("Write three real number : ");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("Sortd number : %.1f, %.1f, %.1f \n", max, mid, min);
	//my mistake : %1.f -> %.1f
	return 0;
}

void swap(double * pa, double * pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}


void line_up(double * maxp, double * midp, double * minp)
{
	if(*maxp < *midp)
	{
		swap(maxp, midp);
	}

	if(*maxp < *minp)
	{
		swap(maxp, minp);
	}

	if(*midp < *minp)
	{
		swap(midp, minp);
	}

}

