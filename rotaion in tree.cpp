#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	int key;
	struct node * left;
	struct node *right;
	int height;
};
int getHeight(struct node *n){
	if (n==NULL){
		return 0;
	}
	return n->height;
}
struct node *createNode(int key){
	struct node *n=(struct node*)malloc(sizeof(struct node));
	n->key=key;
	n->left=NULL;
	n->right=NULL;
	n->height=1;
	return n;
}
int max(int a,int b){
	return(a>b?a:b);
}
int getBalncedFactor(struct node *n){
	if(n==NULL){
		return 0;
	}
	return getHeight(n->left)- getHeight(n->right);
}
struct node *rightRotate(struct node *y){
	struct node *x=y->left;
	struct node *t2=x->right;
	x->right=y;
	y->left=t2;
	x->right=max(getHeight(x->right),getHeight(x->left));
	y->left=max(getHeight(y->right),getHeight(y->left));
	return x;
}
struct node *leftRotate(struct node *x){
	struct node *y=x->right;
	struct node *t2=y->left;

	y->left=x;
	x->right=t2;
	x->right=max(getHeight(x->right),getHeight(x->left));
	y->left=max(getHeight(y->right),getHeight(y->left));
	return y;
}
struct node *insert(struct node*node ,int key){
	if(nood ==NULL){
		return createNode(key);
	}
	if(key<node->key){
		node->left=insert(node->left,key);
	}
	else if(key>node->key){
		node->right=insert(node->right,key);
	}
	node->height =1+max(getHeight(node->left),getHeight(node->right));
	int bf=getBalnacedFactor(node);
	if(bf>1&&key<node->left->key){
		return rightRotate(node);
	}
	if(bf<-1&&key>node->right->key){
		return leftRotate(node);
	}
	if(bf>1&&key>node->left->key){
		node->left=leftRotate(node->left);
		return rightRotate(node);
	}
	if(bf<-1&&key<node->right->key){
		node->right= rightRotate(node->right);
		return leftRotate(node);
	}
   return node;	
	
}
void preOrder(struct node* root){
  while(root!=NULL){
  	cout<<root->data;
  	preOrder(root->left);
  	preOrder(root->right);
  }	
}
 int  main(){
 	struct node *root=NULL;
 	root=insert(root,1);
 	root=insert(root,2);
 	root=insert(root,4);
 	root=insert(root,5);
 	root=insert(root,6);
 	root=insert(root,3);
 	preOrder(root);
 	return 0;
 	
 }
