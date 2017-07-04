#include <stdio.h>

#define MAXSIZE 10

int stack[MAXSIZE];
int top = -1;

int push(int val)
{
	if(top >= MAXSIZE)
	{
		printf("Stack FUll!");
		return 0;
	}
	else
	{
		top = top+1;
		stack[top] = val;
	}
	return stack[top];
}

int pop(int val)
{
	if(top <0)
	{
		printf("Stack is empty!");
		return -1;
	}
	else 
	{
		val = stack[top];
		top = top-1;
	}
	return val;
}

void print_stack()
{

	printf("From top to bottom \n");
	for(int i=top; i >= 0; i--)
	{
		printf("\n%d\n", stack[i]);
	}
}

int main()
{
	push(2);
	print_stack();

	push(5);
	print_stack();
	
	push(7);
	print_stack();

	push(9);
	print_stack();

	printf("after call pop : ");
	pop(9);
	print_stack();
}

