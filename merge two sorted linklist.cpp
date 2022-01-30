//merge two sorted linklist
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
  struct Node *mergeLinklist(struct Node * head,struct Node *head1){
  	struct Node *ptr1=head;
  	struct Node *ptr2=head1;
  	struct Node *dumb=(struct Node*)malloc(sizeof(struct Node));
  	struct Node *ptr3=dumb;
  	while(ptr1!=NULL&&ptr2!=NULL){
  		if(ptr1->data<ptr2->data){
  			ptr3->next=ptr1;
  			ptr1=ptr1->next;
		  }
		  else{
		  	ptr3->next=ptr2;
		  	ptr2=ptr2->next;
		  }
		  ptr3=ptr3->next;
	  }
	  while(ptr1!=NULL){
	  	ptr3->next=ptr1;
	  	ptr1=ptr1->next;
	  	ptr3=ptr3->next;
	  }
	  while(ptr2!=NULL){
	  	ptr3->next=ptr2;
	  	ptr2=ptr2->next;
	  	ptr3=ptr3->next;
	  }
	  return dumb->next;
  }

int main(){
struct Node *head;
struct Node *first;
struct Node *second ;
struct Node *third; 
struct Node *head1; 
struct Node *first1; 
struct Node *second1 ; 
 //first linklist
 head=(struct Node*)malloc(sizeof(struct Node));
first=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
//second linklist
   head1=(struct Node*)malloc(sizeof(struct Node));
   first1=(struct Node*)malloc(sizeof(struct Node));
   second1=(struct Node*)malloc(sizeof(struct Node));
   
   head->data=1;
   head->next=first;
   
   first->data=3;
   first->next=second;
   
   second->data=5;
   second->next=third;
   
   third->data=7;
   third->next=NULL;
  //trasversal(head);

   head1->data=2;
   head1->next=first1;
   
   first1->data=4;
   first1->next=second1;
   
   second1->data=6;
   second1->next=NULL;
  // trasversal(head1);
  head= mergeLinklist(head,head1);
  trasversal(head);
   return 0;
 
}

 

 

