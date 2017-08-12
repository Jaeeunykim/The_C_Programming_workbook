#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	char value;
	struct node* left;
	struct node* right;
} Node;

Node* createNode(char value)
{
	Node* n = (Node*)malloc(sizeof(Node));

	n->value = value;
	n->left = NULL;
	n->right = NULL;

	return n;
}


int main()
{
	Node* root;

	root = createNode('A');
	printf("Value of Root node : %c \n", root->value);
	
	root->left = createNode('B');
	printf("Value of LeftRoot Node : %c\n", root->left->value);
	
	root->right = createNode('c');
	printf("Value of RightRoot Node : %c\n", root->right->value);

}

