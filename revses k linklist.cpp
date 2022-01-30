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
struct Node*  revlistk(struct Node * head, int k)
{
	struct Node *currptr=head;
	struct Node *nextptr;
	struct Node *preptr=NULL;
	int count=0;
	while(currptr!=NULL&&count<k){
		nextptr=currptr->next;
		currptr->next=preptr;
		preptr=currptr;
		currptr=nextptr;
		count++;
	}
	if(nextptr!=NULL){
		head->next=revlistk(nextptr,k);
	}
	return preptr;
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
  head=revlistk(head,2);
  trasversal(head);
  
   return 0;
 
}
