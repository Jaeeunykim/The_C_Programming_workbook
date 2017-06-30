#include <stdio.h>

typedef struct node
{
	int value;
	struct node* next;
}Node;

int main()
{
	Node* pt = malloc(sizeof(Node));
	(*pt).value = 1;
	printf("pt value:%d\n", (*pt).value);

	Node* pt1 = malloc(sizeof(Node));
	(*pt1).value = 2;
	printf("pt1 value: %d\n", (*pt1).value);

	Node* pt2 = malloc(sizeof(Node));
	(*pt2).value = 3;
	printf("pt2 value: %d\n", (*pt2).value);

	Node* pt3 = malloc(sizeof(Node));
	(*pt3).value = 4;
	printf("pt3 value: %d\n", (*pt3).value);

	Node* pt4 = malloc(sizeof(Node));
	(*pt4).value = 5;
	printf("pt4 value: %d\n", (*pt4).value);


	(*pt).next = pt1;
	printf("pt's next value: %d\n", (*(*pt).next).value);
	(*pt1).next = pt2;
	printf("pt1's next value: %d\n", (*(*pt1).next).value);
	(*pt2).next = pt3;
	printf("pt2's next value: %d\n", (*(*pt2).next).value);
	(*pt3).next = pt4;
	printf("pt3's next value: %d\n", (*(*pt3).next).value);
	

}
