#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
 
/*typedef struct Node {
    struct Node *left;
    struct Node *right;
    int value;
}Node;*/
Node* init_root(int value)
{
	printf("1\n");
	return create_node(value);
}
Node* create_node(int value)
{
	printf("created\n");
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->value = value;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
void insert_node(Node *p, int value)
{
	if(p->value > value && p->left == NULL)
	{
		printf("%d l2\n", value);
		p->left = create_node(value);
		return;
	}
	if(p->value < value && p->right == NULL)
	{
		printf("%d r2\n", value);
		p->right = create_node(value);
		return;
	}
	if(p->value > value)
	{
		printf("%d l3\n", value);
		insert_node((p->left), value);
		return;
	}
	if(p->value < value)
	{
		printf("%d r3\n", value);
		insert_node((p->right), value);
		return;
	}
}
void traverse_tree_inorder(Node *p)
{
	if(p->left != NULL)
	{
		traverse_tree_inorder(p->left);
	}
	printf("%d ", p->value);
	if(p->right != NULL)
	{
		traverse_tree_inorder(p->right);
	}
}
 
void recycle_nodes(Node *p)
{
	if(p->left != NULL)
	{
		recycle_nodes(p->left);
	}
	if(p->right != NULL)
	{
		recycle_nodes(p->right);
	}
	free(p);
}
 
