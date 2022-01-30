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
struct Node* insertatfirst(struct Node *head,int data)
{
	struct Node *ptr=(struct Node*)malloc(sizeof(struct Node)); 
     ptr->data=data;
     ptr->next=head;
	 return  ptr;    
}
struct Node* insertatindex(struct Node *head,int data,int index)
{
	struct Node *ptr=(struct Node*)malloc(sizeof(struct Node)); 
	struct Node *p=head;
     ptr->data=data;
     int i=0;
     while(i!=index-1){
     	p=p->next;
     	i++;
	 }
	 ptr->next=p->next;
     p->next=ptr;
	 return head;    
}
struct Node* insertatEnd(struct Node *head,int data)
{
	struct Node *ptr=(struct Node*)malloc(sizeof(struct Node)); 
	struct Node *p=head;
     ptr->data=data;
     while(p->next!=NULL){
     	p=p->next;
	 }
	 p->next=ptr;
     ptr->next=NULL;
	 return head;    
}


int main(){
struct Node *head;
struct Node *first;
struct Node *second ;
struct Node *third; 
struct Node *four;
 
 head=(struct Node*)malloc(sizeof(struct Node));
first=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
four=(struct Node*)malloc(sizeof(struct Node));
   head->data=4;
   head->next=first;
   
   first->data=3;
   first->next=second;
   
   second->data=2;
   second->next=third;
   
   third->data=1;
   third->next=four;
   
   four->data=5;
   four->next=NULL;
   cout<<"linklist before upadte"<<endl;
  trasversal(head);
 // head =insertatfirst(head,6);
  // head =insertatindex(head,6,2);
    head =insertatEnd(head,6);
  
  cout<<"linklist after upadate"<<endl;
  trasversal(head);
   
 return 0;
}
