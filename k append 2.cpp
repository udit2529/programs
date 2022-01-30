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
int length(struct Node *head){
    int l=0;
    struct Node* temp=head;
    while(temp!=NULL){
        l++;
    }
    return l;
}
struct Node * kappend(struct Node *head,int k){
	struct Node *p=head;// tail
	struct Node *q;// new head
	struct Node *y;// new tail
	int l=length(head);
    int count=1;
   // k=k%l;
    while(p->next!=NULL){
         if(count==l-k){
             y=p;
         }
         if(count=l-k+1){
             q=p;
         }
         p=p->next;
         count++;
     }
     y->next=NULL;
      p->next=head;
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
   head->data=1;
   head->next=first;
   
   first->data=2;
   first->next=second;
   
   second->data=3;
   second->next=third;
   
   third->data=4;
   third->next=four;
   
   four->data=5;
   four->next=NULL;
   cout<<"linklist before upadte"<<endl;
  trasversal(head);

    head=kappend(head,3);
  
  cout<<"linklist after upadate"<<endl;
  trasversal(head);
   
 return 0;
}
