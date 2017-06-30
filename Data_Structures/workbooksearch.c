#include <stdio.h>

int search(int v, int* array, int size)
{
	int index;
	
	for(int i =0; i<size; i++)
	{
		if(v == array[i])
		{
			index = i;
			break;
		}
	}
	return index;
}

int main() 
{
	int num_List[] = {0,1,2,3,4,5,6,7,8,9};
	
	printf("Hear is the list for search ");
	
	for(int i =0; i<10; i++)
	{
		printf("%d ", num_List[i]);
	}

	printf("\nfound the number : %d\n", search(7, num_List,10));
}

