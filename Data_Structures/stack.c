#include <stdio.h>

#define MAXSIZE 10

int stack[MAXSIZE];
int top;


void init_stack()
{
	top = -1;
}


int getsize() 
{

	return (top++);
}

int push (unsigned int val)
{
	if (top >= MAXSIZE){
		printf("\n Stack Overflow\n");
		return 0;
	}
	stack[++top] = val;
	return val;
}

int pop(void)
{
	if(top <0) {
		printf("\n Stack Underflow\n");
		return -1;
	}
	return stack[top--];
}

void print_stack()
{
	int i;
	printf("\n Stack From Top ---> to Bottom\n");
	for (i= top; i >= 0; i--)
		printf("\n%d\n", stack[i]);
}

int main()
{
	int i;
	init_stack();
	printf("after init size: %d\n", getsize());

	printf("Push 2");
	push (2);
	print_stack();


	printf("Push 5");
	push (5);
	print_stack();

	printf("Push 8");
	push (8);
	print_stack();

	printf("Push 7");
	push (7);
	print_stack();

	printf("after push 2 size: %d\n", getsize());
}
