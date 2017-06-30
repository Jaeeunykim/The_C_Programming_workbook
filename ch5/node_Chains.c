#include <stdio.h>

typedef struct node
{
	int value;
	struct node* next;
}Node;

int main()
{
	Node* s;
	s = malloc(sizeof(Node));
	(*s).value = 1;
	Node* pn;
	pn = s;
	Node* pt;
    int i;	
	printf("start value: %d\n", (*s).value);
	
	for(i =2; i<6; i++)
	{
		Node* c = malloc(sizeof(Node));
		(*c).value = i;
		(*pn).next = c;
		pn = c;
		printf("pn value: %d\n", (*pn).value);
	}

	printf("s 4th value: %d\n",(*(*(*(*s).next).next).next).value); 

	Node* pn = s;
	for(i=1; i<6; i++)
	{
		pn = (*pn).next;
		printf("s value: %d\n", pn);
	}

}
