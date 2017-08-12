#include <stdio.h>
#include <stdlib.h>

typedef enum{false, true}bool;

typedef struct node
{
	int value;
	struct node* left;
	struct node* right;
}Node;

Node* createNode(int val)
{
	Node* n = (Node*)malloc(sizeof(Node));

	n->value = val;
	n->left = NULL;
	n->right = NULL;

	return n;
}

bool addTree(Node** root, Node* node)
{
	if((*root) == NULL)
	{
		(*root) = node;
	}
	else if((*root)->left == NULL)
	{
		(*root)->left = node;
	}
	else if((*root)->right == NULL)
	{
		(*root)->right = node;
	}
	else
	{
		return false;
	}
	return true;
}

bool searchTree(Node* node, int value)
{
	if(node == NULL)
	{
		return false;
	}
	if(value == node->value)
	{
		return true;
	}

	else if(value < node->value)
	{
		searchTree(node->left, value);
	}
	else 
	{
		searchTree(node->right, value);
	}


}

Node*  insertTree(Node* node, int value)
{
	if(node == NULL)
	{
	Node* n = (Node*)malloc(sizeof(Node));

	n->value = value;
	n->left = NULL;
	n->right = NULL;

	node = n;

	return n;
	}
	
	if(value == node->value)
	{
		return node;
	}
	else if(value < node->value)
	{
		node->left = insertTree(node->left, value);
	}
	else
	{
		node->right = insertTree(node->right, value);
	}
}


void printTree(Node* root)
{
	printf("Root's value: %d\n", root->value);
	printf("value of Root's left Node: %d\n", root->left->value);
	printf("vlaue of Root's rightNode: %d\n", root->right->value);
	printf("vlaue of Root's left left Node: %d\n", root->left->left->value);
	printf("value of Root's right right Node: %d\n",root->right->right->value);
	printf("value of root's left right Node: %d\n", root->left->right->value);
}
void freeTree(Node* root)
{
	if(root == NULL)
	{
		return;
	}

	if(root->left == NULL && root->right == NULL)
	{
		free(root);
	}
	else
	{
		freeTree(root->left);
		freeTree(root->right);
	}
}

int main()
{
	Node* root = NULL;

	addTree(&root, createNode(10));

	addTree(&root, createNode(5));

	addTree(&root, createNode(11));

	insertTree(root, 2);
	
	insertTree(root, 15);
	insertTree(root, 8);

	printTree(root);

	freeTree(root);

/*
	printf("Value of Root node : %c \n", root->value);
	
	root->left = createNode('B');
	printf("Value of LeftRoot Node : %c\n", root->left->value);
	
	root->right = createNode('c');
	printf("Value of RightRoot Node : %c\n", root->right->value);
*/
}

