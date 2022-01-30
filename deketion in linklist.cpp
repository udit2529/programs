#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
int data;
struct Node* next;
};
void trasversal(struct Node *ptr){
while(ptr!=NULL){
	cout<<"element is "<<ptr->data<<endl;
	ptr=ptr->next;
}
}
struct Node* deleteAtFirst(struct Node* head)
{
//  	struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
	struct Node *p=head;
	head=head->next;
	free(p);
	return head;
	 
}
struct Node* deleteAtEnd(struct Node* head)
{
 
	struct Node *p=head;
	struct Node *q=p->next;
     while(q->next!=NULL){
		p=p->next;
		q=q->next;
	}
     p->next=NULL;
     free(q);
	return head;
	 
}
struct Node* deleteAtIndex(struct Node* head,int index)
{

	struct Node *p=head;
	struct Node *q=p->next;
	for(int i=0;i<index-1;i++){
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return head;
	 
}
struct Node* deleteAtNode(struct Node* head,int data)
{
	struct Node *p=head;
	struct Node *q=p->next;
while(q->data!=data&&q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	if(q->data==data){	
	p->next=q->next;
	free(q);
	
}
return head;
}

int main(){
struct Node *head;
struct Node *first;
struct Node *second ;
struct Node *third; 
 
 head=(struct Node*)malloc(sizeof(struct Node));
first=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
   
   head->data=4;
   head->next=first;
   
   first->data=3;
   first->next=second;
   
   second->data=2;
   second->next=third;
   
   third->data=1;
   third->next=NULL;
   cout<<"linklist before upadte"<<endl;
  trasversal(head);
  //head = deleteAtFirst(head);
  // head =deleteAtIndex(head,2);
   // head =deleteAtEnd(head);
   head =deleteAtNode(head,2);
  
  cout<<"linklist after upadate"<<endl;
  trasversal(head);
   
 return 0;
 
}
