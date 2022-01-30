#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
int data;
struct Node* next;
struct Node* pre;

};
void trasversal(struct Node *head){
	struct Node* ptr=head;
while(ptr!=NULL){
	cout<<"element is "<<ptr->data<<endl;
	ptr=ptr->next;
}
}
struct Node* insertAtFirst(struct Node* head, int data){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->next=NULL;
	ptr->data=data;
	struct Node *p=head;
	ptr->next=head;
	p->pre=ptr;
    head=ptr;
	ptr->pre=NULL;
	return head;
}

struct Node* insertAtEnd(struct Node* head, int data){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->next=NULL;
	ptr->data=data;
	struct Node *p=head;
	while(p->next!=NULL){
		p=p->next;
	
	}
		p->next=ptr;
		ptr->pre=p;
	ptr->next=NULL;
	return head;
}
struct Node* insertAtIndex(struct Node* head, int data,int val){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->next=NULL;
	ptr->data=data;
	struct Node *p=head;
	struct Node *q;
	int i=0;
	while(i!=val-1){
		p=p->next;
		i++;
}
    q=p->next; 
	p->next=ptr;
	ptr->pre=p;
	ptr->next=q;

	return head;
}
struct Node* deleteAtFirst(struct Node* head){

	struct Node *p=head;
     head=head->next;
	free(p);
    
	return head;
}
struct Node* deleteAtEnd(struct Node* head){

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
struct Node* deleteAtIndex(struct Node* head, int val){

	struct Node *p=head;
    struct Node *q;
    int i=0;
    while(i!=val){
    	p=p->next;
    	i++;
	}
	q = p->next;;
  p->pre=q->next;
  q->next->pre=p;	
	free(q);
    
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
   head->pre=NULL;
   
   first->data=3;
   first->next=second;
   first->pre=head;
   
   second->data=2;
   second->next=third;
   second->pre=first;
   
   third->data=1;
   third->next=NULL;
   second->pre=third;
   cout<<"\n circular linked list before updation"<<endl;
  trasversal(head);
 // head=insertAtFirst(head,5);
//   head=insertAtEnd(head,5);
 //head=insertAtIndex(head,5,3);
// head=deleteAtFirst(head);
 // head=deleteAtEnd(head);
 head=deleteAtIndex(head,2);
  
cout<<"\n circular linklist after upadtaion"<<endl;
trasversal(head);
   
 
}
