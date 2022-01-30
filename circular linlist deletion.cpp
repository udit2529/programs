#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
int data;
struct Node* next;
};
void trasversal(struct Node *head){	
struct Node* ptr=head;
do{
	cout<<"element is "<<ptr->data<<endl;
	ptr=ptr->next;
}
while(ptr!=head);
}
struct Node* deleteAtFirst (struct Node *head ){
   struct Node *p=head;
   struct Node *q=head;
   while(p->next!=head){
   	p=p->next;
   }
   p->next=head->next;
   head=head->next;
   free(q);
   return head;
    
}
struct Node* deleteAtEnd (struct Node *head, int pos ){
   struct Node *p=head;
   int i=1;
   while(i!=pos-1){
   	p=p->next;
   	i++;
   }
   struct Node *q=p->next;
   p->next=head;
   free(q);
   return head; 
}
struct Node* deleteAtIndex (struct Node *head, int pos ){
   struct Node *p=head;
   struct Node *q=p->next;
   for(int i=0;i<pos-1;i++)
   {
   
   	p=p->next;
   	q=q->next;
   }
   p->next=q->next;
   free(q);
   return head; 
}



struct Node* insertAtIndex (struct Node *head ,int data,int index){

     struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
     struct Node* p = head;
     ptr->data=data;
     int i=0;
     while(i=index-1){
     	p=p->next;
     	i++;
	 }
//	 if(p->next==head){
	// 	ptr->next=p->next;
	// 	p->next=ptr;
	 	
//	 }
//	 else{
	 
	 ptr->next=p->next;
	 p->next=ptr;                                                         
	 return 0;  
}
struct Node* insertAtEnd (struct Node *head ,int data){

     struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
     struct Node* p=head;
     ptr->data=data;
     while(p->next!=head){
     	p=p->next;
	 }
	 p->next=ptr;
	 ptr->next=head;
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
   third->next=head;
   cout<<"\n circular linklist before insertion"<<endl;
  trasversal(head);
  // head=deleteAtFirst(head);
  // head=deleteAtEnd(head,4);
    head=deleteAtIndex(head,1);
   
 //   head=insertatfirst(head);
// head=insertAtIndex(head,5,3);
// head=insertAtEnd(head,6);
   cout<<"\n circular linklist after insertion"<<endl;
  trasversal(head);
  return 0;
}
