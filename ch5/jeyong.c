#include <stdio.h>

//10개 정수를 가지는 Stack 정의

#define MAXSTACKSIZE 10

int Stack[MAXSTACKSIZE];

//stack에 값을 넣기 : push
int push(int item);

//stack에서 값을 가져오기 : pop
int pop();

//size를 알수 있을까?
int get_size();
int top;
void print_stack();

int push(int item)
{
	Stack[top] = item;
	top++;
}
int pop()
{
	return Stack[--top];
}

void print_stack()
{
	for(int i=top-1; i >=0; i--)
	{
		printf("From top index: %d, item value : %d \n", i,	Stack[i]);
	}
}

	

void main() 
{
	int i;
	//초기화 
	for (i=0; i<MAXSTACKSIZE; i++)
	{
		Stack[i] = 0;
	}

	//item을 넣자! : 2
	push(2);
	print_stack();

	printf("After Insert item 2 in Stack\n");

	push(5);
	print_stack();
	printf("Aftger Insert item 5 in Stack\n");

	printf("Call pop() : %d\n", pop());

	print_stack();
}
