#include <stdio.h>

int binsearch(int arr[], int n, int tar)
{
	int pos, first, middle, last;

	first = 0;
	last = n-1;
	middle = (first+last)/2;

	if(first>last)
	{
		printf("Not found! the target is not prsent\n");
		return 0;
	}

	while(first <= last)
	{
		if(arr[middle] == tar)
		{
			pos = middle;
			return pos;
			break;
		}
		else if(arr[middle] < tar)
		{
			first = middle+1;
		}
		else 
		{
			last = middle-1;
		}
		middle = (first+last)/2;
	}
}
int main()
{
	int series[] = {3,4,5,7,11,13,14,17,21};
	int n = 9;
	
	printf("the series : ");
	for(int i =0; i<9; i++)
	{
		printf("%d  ", series[i]);
	}
	printf("\nfind 14 at series\n");

	printf("found at location : %d\n ",binsearch(series, n, 14));
}
