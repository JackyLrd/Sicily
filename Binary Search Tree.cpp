#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

typedef struct Node
{
	int key;          
    struct Node * left;   
	struct Node * right;  
	struct Node * parent; 
}Node,*PNode;

void inseart(PNode * root,int key)
{
	PNode p=(PNode)malloc(sizeof(Node));
	p->key=key;
	p->left=p->right=p->parent=NULL;
	if((*root)==NULL){
		*root=p;
		return;
	}
	if((*root)->left == NULL && (*root)->key > key){
		p->parent=(*root);
        (*root)->left=p;
		return;
	}
	if((*root)->right == NULL && (*root)->key < key){
		p->parent=(*root);
        (*root)->right=p;
		return;
	}
	if((*root)->key > key)
		inseart(&(*root)->left,key);
	else if((*root)->key < key)
		inseart(&(*root)->right,key);
	else
		return;
}
void create(PNode* root,int *keyArray,int length)
{
	int i;
	for(i=0;i<length;i++)
		inseart(root,keyArray[i]);
}

void mid(Node* a)
{
	if(a->left != NULL)
	{
		mid(a->left);
	}
	cout << (a)->key << " ";
	if(a->right != NULL)
	{
		mid(a->right);
	}
}
void pre(Node* a)
{
	cout << (a)->key << " ";
	if(a->left != NULL)
	{
		pre(a->left);
	}
	if(a->right != NULL)
	{
		pre(a->right);
	}
}
int main()
{
	int n, temp[3001], x;
	while(cin >> n && n != 0)
	{
		cin >> x;
		auto a = new Node;
		a->left = NULL;
		a->right = NULL;
		a->parent = NULL;
		a->key = x;
		for(int i = 0; i < n - 1; i++)
		{
			cin >> temp[i];
		}
		create(&a, temp, n - 1);
		mid(a);
		cout << endl;
		pre(a);
		cout << endl;
	}
}
