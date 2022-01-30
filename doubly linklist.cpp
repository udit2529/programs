#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
int data;
struct Node* next;
struct Node* pre;

};
void trasversal(struct Node *head){
	struct Node* ptr=head;
while(ptr!=NULL){
	cout<<"element is "<<ptr->data<<endl;
	ptr=ptr->next;
}
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
   head->pre=NULL;
   
   first->data=3;
   first->next=second;
   first->pre=head;
   
   second->data=2;
   second->next=third;
   second->pre=first;
   
   third->data=1;
   third->next=NULL;
   second->pre=third;
   
  trasversal(head);
   
 
}
