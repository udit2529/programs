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
void makeCycle(struct Node *head ,int pos){
	struct Node* ptr=head;
	struct Node* q;
	int i=1;
	if(ptr->next!=NULL){
		if(i==pos){
			q=ptr;		
		}
		ptr=ptr->next;
		i++;
	}
	ptr->next=q;
}
bool detect(struct Node* head){
	struct Node* fast=head;
	struct Node* slow=head;
	while(fast->next!=NULL && fast!=NULL){
		fast=fast->next->next;
		slow =slow->next;
		if (fast==slow){
			return true;
		}
	}
	return false;
}
void removal (struct Node *head){
	struct Node* fast=head;
	struct Node* slow=head;
	do{
		slow=slow->next;
		fast=fast->next->next;
	}
	while(slow==fast);
	fast=head;
	while(slow->next!=fast->next){
			slow=slow->next;
		fast=fast->next;
	}
	slow->next=NULL;
}

int main(){
struct Node *head;
struct Node *first;
struct Node *second ;
struct Node *third; 
struct Node *four; 
struct Node *five; 
struct Node *six; 
struct Node *seven; 



 
 head=(struct Node*)malloc(sizeof(struct Node));
first=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
four=(struct Node*)malloc(sizeof(struct Node));
five=(struct Node*)malloc(sizeof(struct Node));
six=(struct Node*)malloc(sizeof(struct Node));
seven=(struct Node*)malloc(sizeof(struct Node));
   
   head->data=4;
   head->next=first;
   
   first->data=3;
   first->next=second;
   
   second->data=2;
   second->next=third;
   
   third->data=1;
   third->next=four;
   
   four->data=5;
   four->next=five;
   
   five->data=6;
   five->next=six;
   
   six->data=7;
   six->next=six;
   
   seven->data=8;
   seven->next=NULL;
 // trasversal(head);
 //makeCycle(head,3);
  //trasversal(head);
  cout<<detect(head);
//removal(head);
trasversal(head);

  
   
 
}


