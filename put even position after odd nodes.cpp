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
void oddNodes(struct Node* head){
	struct Node *even=head->next;
	struct Node *odd=head;
	struct Node *evenHead=head->next;
	
	while(odd->next!=NULL&&even->next!=NULL){
		odd->next=even->next;
		odd=odd->next;
		even->next=odd->next;
		even=even->next;
	}
	odd->next=evenHead;
	if(odd->next==NULL){
		even->next=NULL;
	}
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
   
   head->data=1;
   head->next=first;
   
   first->data=2;
   first->next=second;
   
   second->data=3;
   second->next=third;
   
   third->data=4;
   third->next=four;
   
   four->data=5;
   four->next=five;
   
   five->data=6;
   five->next=six;
   
   six->data=7;
   six->next=seven;
   
   seven->data=8;
   seven->next=NULL;
 

trasversal(head);
cout<<"after poeration"<<endl;
oddNodes(head);
trasversal(head);


  
   
 
}


