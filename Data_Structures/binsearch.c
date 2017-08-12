#include <stdio.h>

int binsearch(int *a, int t, int size)
{
	//배열의 처음위치, 중간위치, 마지막위치 선언
	int mid, low, high;

	//처음위치,  마지막위치 초기화
	low = 0;
	high = size-1;


	//low가 high보gh = size-1;
	다 작은동안 mid값 변화

	while(low <= high)
	{
	//중간값 선언

		mid = (low+high)/2;

	//mid값과 찾고자 하는 값이 같을 때
		if(t == a[mid])
		{
	 		return mid;
			break;
		}
	
	//mid보다 찾고자하는 값이 작을 때

		else if (t <a[mid])
		{
			high = mid -1;
		}
	//mid보다 찾고자하는 값이 클때
		else
		{
			low = mid +1;
		}
	}
	return mid;
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int target = 5;
	int size = 5;

	printf("Found at %dth\n", binsearch(arr, target, size));
}


