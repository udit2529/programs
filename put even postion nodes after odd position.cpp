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
void evenAFterOdd(struct node *head){
	if(head->data%2==0){
	struct Node *even=head;
	struct Node *strteven=even;
	}
	else{
		struct Node *odd=head;
	}
	
	if(head->next->data%2==0){
	struct Node *even=head->next;
	struct Node *strteven=even;
	}
	else{
		struct Node *odd=head->next;
	}
	while(odd->next!=NULL||even->next!=NULL){
		if(even->next->data%2!=0){
		odd->next=even->next;
		odd=odd->next;
		}
		else if (odd->next->data%2==0){
		even->next=odd->next;
		even=even->next;	
		}
	}
	while()
	
}


int main(){
struct Node *head;
struct Node *first;
struct Node *second ;
struct Node *third; 
struct Node *four; 
struct Node *five; 


 //first linklist
 head=(struct Node*)malloc(sizeof(struct Node));
first=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
four=(struct Node*)malloc(sizeof(struct Node));
five=(struct Node*)malloc(sizeof(struct Node));
   
   head->data=1;
   head->next=first;
   
   first->data=2;
   first->next=second;
   
   second->data=3;
   second->next=third;
   
   third->data=4;
   third->next=four;
  //trasversal(head);

   four->data=5;
   four->next=five;
   
   five->data=6;
   five->next=NULL;
   
  
  // trasversal(head1);
  trasversal(head);
   return 0;
 
}


