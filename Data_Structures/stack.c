#include <stdio.h>
#include <stdlib.h>

// 스택링크드로 구현하기
// 함수는 팝,푸쉬,
// 구조체는 탑, 새로운노드

typedef struct node
{
	int value;
	struct node* next;
}Node;

Node* top = NULL;

void push(int value)
{
	Node* n = (Node*)malloc(sizeof(Node));
	n->next = NULL;
	n->value = value;

	if(top == NULL)
	{
		top = n;
	}
	else
	{
		n->next = top;
		top = n;
	}
}

void pop()
{
	Node* p = NULL;
	p = top;

	if(p == NULL)
	{
		printf("This stack is Empty!\n");
	}
	else
	{
		printf("Popped value is %d \n", p->value);
		p = p->next;
		top = p;
	}
}

void printStack()
{
	Node* q = NULL;
	q = top;
	
	if(top == NULL)
	{
		printf("Stack is Empty!\n");
	}
	for(q; q != NULL; q = q->next)
	{
		printf("Key : %d \n", q->value);
	}
}



int main()
{
	push(5);
	push(4);
	push(1);
	push(10);

	printStack();

	pop();
	printStack();
}
