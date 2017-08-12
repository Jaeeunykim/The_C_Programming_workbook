/*링크드 리스트로 스택 구현하기!
  1. 스택 구조체 만들기
  2. 포인터 탑만들기
  3. 스택노드가 들어온 노드를 가르킨다
  */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int value;
	struct node* next;
	
}Node;

Node* top = NULL;
Node* init = NULL;

void push(int value)
{
	Node* n = (Node*)malloc(sizeof(Node));
	n->next = NULL;
	n->value = value;

	if(top == NULL)
	{
		init = top = n;
	}
	else
	{
		top->next =n;
		top = n;
	}
}
void pop(void)
{
	if(top == NULL)
	{
		printf("This stack is empty!\n");
	}
	else
	{
		top = top->next;

	}

}
void printStack()
{
	Node* p =NULL;
	for(p = init; p !=NULL; p = p->next)
	{
		printf("%d\n", p->value);
	}

}

int main()
{
	push(5);
	push(4);
	push(3);
	pop();
	printStack();

}

