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
/*  7
    /\
    4 10
	/\
	3 5
	*/
struct Node *checkBST(struct Node * root, int val){
	if(root==NULL){
		return  createNode(val);
	}
	else if(val<root->data){
		root->left=checkBST(root->left,val);
	}
	else{
		root->right=checkBST(root->right,val);
	}
	return root;
}

int main(){
	
	struct Node *root=NULL;
	root=checkBST(root,5);
	checkBST(root,1);
	checkBST(root,3);
	checkBST(root,4);
		
	checkBST(root,2);
	checkBST(root,7);
		
		inOrder(root);
		
	
	return 0;
}

