#include <stdio.h>

typedef struct node  
{
	int value;
	struct node* next;
}Node;

int main()
{
	Node* n1 =  malloc (sizeof(Node));
	(*n1).value = 3;
	printf("n1 value :%d\n", (*n1).value);
	
	Node* n2 = malloc(sizeof(Node));
	(*n2).value = 5;
	printf("n2 value: %d\n", (*n2).value);

	(*n1).next = n2;
	printf("n1's next vlaue:%d\n",(*(*n1).next).value); 
}



