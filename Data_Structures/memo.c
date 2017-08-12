#include <stdio.h>
#include <stdlib.h>

//Create Tree Node
typedef struct node
{
	int val;
	struct node* left;
	struct node* right;
}Node;


Node* createBinNode(int num)
{
	if(num < 0)
	{
		printf("Please input positive number\n");
	}
	else if(num >=0)
	{
		Node* newNode =(Node*)malloc(sizeof(Node));

		newNode->val = num;
		newNode->left = NULL;
		newNode->right = NULL;
		
		return newNode;
	}
}

void attach(Node* tree, Node* newNode)
{
	if(newNode->val < tree->val)
	{
		if(tree->left == NULL)
		{
			tree->left = newNode;
		}
		else
		{
			attach(tree->left, newNode);
		}
	}
	else if(newNode->val > tree->val)
	{
		if(tree->right == NULL)
		{
			tree->right = newNode;
		}
		else
		{
			attach(tree->right, newNode);
		}
	}

}

void printTree(Node* root)
{
	printf("root's value: %d\n", root->val);
	printf("\n");

	printf("root's left: %d\n", root->left->val);
	printf("root's left left: %d\n", root->left->left->val);
	printf("root's left right: %d\n", root->left->right->val);

	printf("\n");
	printf("root's right: %d\n", root->right->val);
	printf("root's right left: %d\n", root->right->left->val);
	printf("root's right right: %d\n", root->right->right->val);
	
	printf("\n");
	
}


int main()
{
	Node* Tree = createBinNode(9);
	
	attach(Tree, createBinNode(5));
	attach(Tree, createBinNode(15));
	attach(Tree, createBinNode(4));
	attach(Tree, createBinNode(6));
	attach(Tree, createBinNode(10));
	attach(Tree, createBinNode(17));
	
	printTree(Tree);
}

