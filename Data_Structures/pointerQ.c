#include <stdio.h>
#define UNINIT -100

void init_queue(int queue[], int* front, int* rear);
void print_queue(int queue[], int* front, int* rear);
int put(int queue[], int* front, int* rear,int item);
int get(int queue[], int* front);

int main()
{
	int head, tail;
	int Q[5];

	printf("Queue init:  ");
	init_queue(Q, &head, &tail);
	print_queue(Q, &head, &tail);

	printf("Queue Put 2:  ");
	put(Q, &head, &tail, 2);
	print_queue(Q,&head, &tail);

	printf("Queue Put 3:  ");
	put(Q, &head, &tail, 3);
	print_queue(Q,&head, &tail);

	printf("Queue Put 5:  ");
	put(Q, &head, &tail, 5);
	print_queue(Q,&head, &tail);

	printf("Printf get(2) : %d | front : %d | rear : %d\n",get(Q, &head), head, tail);
}

void init_queue(int queue[], int* front, int* rear)
{
	for(int i=0; i<5; i++)
	{
		queue[i] = 0;
	}
	*rear = *front = UNINIT;
}

void print_queue(int queue[], int* front, int* rear)
{
	for(int i=0; i<5; i++)
	{
		printf("%d ", queue[i]);
	}
	printf("| front : %d | rear : %d \n", *front, *rear);
}

int put(int queue[], int* front, int* rear, int item)
{
	if(*rear == UNINIT)
	{
		*rear = 0;
	}
	else
	{
		*rear = *rear+1;
	}

	queue[*rear] = item;

	if(*front == UNINIT)
	{
		*front = 0;
	}
}

int get(int queue[], int* front)
{
	int val;

	val = queue[*front];
	*front = *front +1;
	return val;
}
