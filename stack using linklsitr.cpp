#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
void trasversal(struct Node *ptr){
while(ptr!=NULL){
	cout<<"element is "<<ptr->data<<endl;
	ptr=ptr->next;
}
}
struct Node *top=NULL;

int isEmpty(struct Node *top)
{
    if(top==NULL)
	{
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct Node *top){
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
	if(p==NULL){
		return 1;
	} 	
	return 0;
}
struct Node* push(struct Node *top, int data){
	if(isFull(top)){
		cout<<"\n stack overflow";
	}
	else{
	struct Node *p=(struct Node*)malloc(sizeof(struct Node));
	p->data=data;
	p->next=top;
	top=p;
	return top;
	}
	return 0;
}
 int pop(struct Node *tp){
if(isEmpty(tp))	{
	cout<<"\n stack underflow";
}
else{
	struct Node *p=tp;
	tp=tp->next;
	int x=p->data;
	free(p);
	return x;
}
return 0;
}
int peek(struct Node *top,int pos){
	struct Node *p=top;
	for(int i=0;(i<pos-1&&p!=NULL);i++){
		p=p->next;
	}
	if(p!=NULL){
		return p->data;
	}
	else{
		return -1;
	}
}
int stackTop(struct Node *top){
	return top->data;
}

int main(){
	 trasversal(top);
	 cout<<"\n before psuhing through linklist,fUll :"<<isFull(top);
	  cout<<"\n before psuhing through linklist,empty :"<<isEmpty(top);
	 
	top=push(top,5);
	top=push(top,4);
	top=push(top,3);
	top=push(top,2);
	top=push(top,1);
	trasversal(top);
	cout<<"\n elemnt pop is :"<<pop(top);
	 for (int i = 1; i <= 4; i++)
    {
        cout<<"\n Value at position is :i "<< peek(top,i);
    }
    cout<<"\n element at top :"	<<stackTop(top);
      	// cout<<"\n element at bottom :"	<<stackBottom(s);
      	
	
	
}
