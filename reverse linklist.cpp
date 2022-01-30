
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
int data;
struct Node* next;
};
void trasversal(struct Node *head){
	struct Node* ptr=head;
while(ptr!=NULL){
	cout<<"element is "<<ptr->data<<endl;
	ptr=ptr->next;
}
}
struct Node*  revlist(struct Node * head)
{
	struct Node *p=head;
	struct Node *q;
	struct Node *prevnode=NULL;
	while(p != NULL){
		q=p->next;
		p->next=prevnode;
	   prevnode=p;
	   p=q;
	}
	return prevnode;
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
  trasversal(head);
  head=revlist(head);
  trasversal(head);
  
   return 0;
 
}
