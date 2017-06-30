#include <stdio.h>

#define true 1
#define false 0

int series[] = {3,4,5,7,11,14,17,21};
int N = 9;

int pos, first, last , mid, flag;

int binSearch(int val)
{
	first = 0;
	last = (N-1);

	while((first <= last) && (flag == false))
	{
		mid = (first + last)/2;

		if(series[mid] == val)
		{
			pos = mid;
			flag = true;
			break;
		}

		else if(series[mid] < val)
		{
			first = mid +1;
		}
		else 
			last = mid -1;
	}

	if(flag == true)
	{
		printf("found the number :%d, at the array %dth\n", pos, series[pos]);
	}
	else
		printf("not found the number\n");

}

int main()
{
	binSearch(7);
}
