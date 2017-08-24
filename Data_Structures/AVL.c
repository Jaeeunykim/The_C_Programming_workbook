#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
	int value;
	struct node* left;
	struct node* right;
}Node;

Node* createTree(int value)
{
	Node* Tree = (Node*)malloc(sizeof(Node));
	Tree->value = value;
	Tree->left = NULL;
	Tree->right = NULL;
	
	return Tree;
}

Node* createNode(int value)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->value = value;
	node->left = NULL;
	node->right = NULL;

	return node;
}

Node* Insert(Node* Tree, Node* node)
{
	if(Tree == NULL)
	{
		return node;
	}
	else
	{
		if(Tree->value < node->value)
		{
			Tree->right = Insert(Tree->right, node);
		}
		else
		{
			Tree->left = Insert(Tree->left, node);
		}
	}
	return Tree;
}

void PreOrderPrintTree(Node* Tree)
{
	if(Tree == NULL)
	{
		return;
	}
	else
	{
		printf("%d ", Tree->value);
		PreOrderPrintTree(Tree->left);
		PreOrderPrintTree(Tree->right);
	}
}

Node* searchBST(Node* Tree, int value)
{
	if(Tree == NULL)
	{
		return Tree;
	}
	else
	{
		if(Tree->value == value)
		{
			return Tree;
		}
		else
		{
			if(Tree->value < value)
			{
				return searchBST(Tree->right, value);
			}
			else
			{
				return searchBST(Tree->left, value);
			}
		}
	}
}

Node* findParent(Node* Tree, Node* ptr)
{
	Node* pt;
	if(Tree == NULL)
	{
		return Tree;
	}
	else
	{
		if(Tree->left == ptr || Tree->right)
		{
			pt = Tree;
			return pt;
		}
		else if(ptr->value < Tree->value)
		{
			pt = findParent(Tree->left, ptr);
		}
		else
		{
			pt = findParent(Tree->right, ptr);
		}
	}
	return pt;
}

Node* findReplaceNode(Node* ptr)
{
	Node* replaceNode;

	replaceNode = ptr;

	while(ptr->left != NULL)
	{
		replaceNode = replaceNode->left;
	}
	return replaceNode;
}
	
Node* deleteNode(Node* Tree, int value)
{
	int replaceValue;

	Node* ptr;
	Node* replaceNode;
	Node* parent;
	
	if(Tree == NULL)
	{
		return Tree;
	}

	ptr = searchBST(Tree, value);
	parent = findParent(Tree, ptr);
	
	//case1. Leaf Node
	if(ptr->left == NULL && ptr->right == NULL)
	{
		if(parent->left == ptr)
			{
				parent->left = NULL;
			}
		else if(parent->right == ptr)
		{
			parent->right = NULL;
		}
		free(ptr);
	}

	//case2. the delete node have one child

	//have right child
	if(ptr->left == NULL && ptr->right != NULL)
	{
		if(parent->left == ptr)
		{
			parent->left = ptr->right;
		}
		else if(parent->right == ptr)
		{
			parent->right = ptr->right;
		}
		free(ptr);
	}
	//have left child
	else if(ptr->left != NULL && ptr->right == NULL)
	{
		if(parent->left == ptr)
		{
			parent->left = ptr->left;
		}
		else if(parent->right == ptr)
		{
			parent->right = ptr->left;
		}
		free(ptr);
		return Tree;
	}

	//case3. the delete Node have two children

	if(ptr->left != NULL && ptr->right !=NULL)
	{
		replaceNode = findReplaceNode(ptr->right);
		
		replaceValue = replaceNode->value;
		
		deleteNode(Tree, replaceNode);
		
		ptr->value = replaceValue;
	}
	return Tree;
}

	

int main()
{
	Node* BinTree;

	BinTree = createTree(7);

	Insert(BinTree, createNode(5));
	Insert(BinTree, createNode(3));

	PreOrderPrintTree(BinTree);

	printf("\nDelete BST Node(3)\n");
	deleteNode(BinTree,3);
	PreOrderPrintTree(BinTree);

}
