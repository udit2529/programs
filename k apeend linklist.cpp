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
struct Node * kappend(struct Node *head,int k){
	struct Node *p=head;
	struct Node *q=p->next;
		struct Node *t;

		for(int i=0;i<k;i++){
			q=q->next;
			p=p->next;
		}
		while(t->next!=NULL){
			t=t->next;
		}
			p->next=NULL;
			t->next=head;
			head=q;
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
    //head =insertatEnd(head,6);
    head=kappend(head,3);
  
  cout<<"linklist after upadate"<<endl;
  trasversal(head);
   
 return 0;
}
