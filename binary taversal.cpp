#include<iostream>
#include<malloc.h>
#include<stdlib.h>
using namespace std;
struct Node{
	int data; 
	struct Node* left;
	struct Node * right;
};
struct Node * createNode(int data){
	struct Node *n;
	n=(struct Node *)malloc(sizeof(struct Node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;

	return n;
}
void preOrder(struct Node * root){
	if(root!=NULL){
		cout<<root->data;
		preOrder(root->left);
		preOrder(root->right);
	}
	
}
void postOrder(struct Node * root){
	if(root!=NULL){
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data;
	}
	
}
void inOrder(struct Node * root){
	if(root!=NULL){
		inOrder(root->left);
		cout<<root->data;
		inOrder(root->right);
	}
	
}

int main(){
	struct Node *p=createNode(4);
	struct Node *p1=createNode(1);
	struct Node *p2=createNode(6);
	struct Node *p3=createNode(5);
	struct Node *p4=createNode(2);
//	struct Node *p5=createNode(4);
//	struct Node *p6=createNode(2);
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
//	p3->left=p6;
//	p3->right=p4;
//	p2->left=p5;
	preOrder(p);
	cout<<endl;
	postOrder(p);
	cout<<endl;
	inOrder(p);
	cout<<endl;	
	return 0;
}


