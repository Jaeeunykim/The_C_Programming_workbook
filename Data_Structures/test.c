#include <stdio.h>

void swap(int arr[], int a, int b);
void printarray(int* a, int size)
{
	printf("[");
	for(int i =0; i < size; i++)
	{
		printf("%d ",a[i]);
	}
	printf("]\n");
}

void qsort(int* v, int left, int right)
{
	int i,last;
	int pivot;

	printf("range %d %d\n", left, right);

	if(left >= right)
	{
		return;
	}
	swap(v, left, (left+right)/2);
	last = left;
	pivot = v[left];

	for(i=left+1; i<=right; i++)
	{
		if(v[i] < v[left])
		{
			++last;
			swap(v, last, i);

		}
	}
	swap(v, left, last);

	qsort(v,left, last-1);
	qsort(v,last+1, right);
}

void swap(int* v, int i, int j)
{
	int temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
	printf("%d %d", i, j);
	printarray(v, 5);
}


int main()
{
	int array[] = {1,2,3,4,7};
	int first = 0;
	int last = 4;
	
	qsort(array, first, last);

	for(int i=0; i<5; i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
}

