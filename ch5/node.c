#include <stdio.h>


typedef struct node { 
	int value;
	struct node* next;
} Node;

int main()
{
	Node n1,n2,n3,n4;
	
	n1.value = 5;
	n2.value = 8;
	n3.value = 11;
	n4.value = 3;

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	
	printf("n1 value: %d\n", n1.value);
	printf("n2 value: %d\n", n2.value);
	printf("n3 value: %d\n", n3.value);
	printf("n4 value: %d\n", n4.value);

	printf("n2 value: %d\n", (*n1.next).value);
	printf("n3 value: %d\n", (*(*n1.next).next).value);
	printf("n4 value: %d\n", (*(*(*n1.next).next).next).value);
}

