#include <stdio.h>
void quicksort(int list[], int lb, int ub);
void partition(int pivot, int list[], int lb, int ub);

void quicksort(int list[], int lb, int ub)
{
	int pivot;
	pivot = list[lb];
	lb++;
	partition(pivot, list, lb, ub);
}

void partition(int pivot, int list[], int lb, int ub)
{
	int i,j, temp;

	i = lb;
	j = ub;

	while(i<=j)
	{
		while(list[i] <= pivot)
			i++;
		while(list[j] > pivot)
			j--;

		if(i<=j)
		{
			temp = list[i];
			list[i] = list[j];
			list[j] = temp;
		}
	}
	temp = list[j];
	list[j] = list[lb-1];
	list[lb-1] = temp;

	if(j>lb)
		quicksort(list,0,(j-1));
	if(j<ub)
		quicksort(list,(j+1),ub);
}

int main()
{
	int list[] = {8,5,6,9,4,19,7,2};
	int low = 0;
	int high = 7;
	for(int i =0; i<8; i++)
	{
		printf("%d", list[i]);
	}
	printf("\n");

	quicksort(list,low, high);
	for(int i=0; i<8; i++)
	{
		printf("%d", list[i]);
	}
	printf("\n");
	
	return 0;
}

