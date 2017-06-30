#include <stdio.h>

typedef struct node
{
	int value;
	struct node* next;
}Node;

int main()
{
	Node* pt;
	int i;
	Node* s;
	s = malloc(sizeof(Node));
	pt = s;
	(*s).value = 1;

	for(i=2; i<6; i++)
	{
		Node* c = malloc(sizeof(Node));
		(*c).value = i;
		(*pt).next = c;
		pt = c;
		printf("pt value: %d\n", (*pt).value);
	}

	printf("pt value: %d\n",(*(*(*s).next).next).value);
}
