#include <stdio.h>

//int 10개짜리 배열만들기
#define MAXLINE 10

int queue[MAXLINE];

//변수선언
int front, rear;

//데이터를 더할 할수와 뺄 함수 만들기

int put(int item)
{
	queue[rear] = item; 
	rear++;
	return rear;
}	
int get()
{
	return queue[++front];
}

//큐배열 출력 함수
void print_queue()
{
	for(int i= front; i<rear; i++)
		printf( "%d ", queue[i]);
}


int main()
{
	printf("Insert 2,5,7\n");
	put(2);

	put(5);

	put(7);
	
	printf("Queue value: ");
	print_queue();

	printf("\n");

	printf("Call get\n");
	get();
	printf("After call get : ");
	print_queue();
	printf("\n");

}


