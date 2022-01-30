#include<iostream>
#include<stdlib.h>
using namespace std;
 struct stack{
 	int size;
 	int top;
 	int *arr;
 };
 int isEmpty(struct stack* ptr){
 	if(ptr->top==-1){
 		return 1;
	 }
	 else{
	 	return 0;
	 }
 }
 int isFull(struct stack *ptr){
 	if(ptr->top==ptr->size-1){
 		return 1;
	 }
	 else{
	 	return 0;
	 }
 }
 void push(struct stack *ptr,int data){
 	if(isFull(ptr)){
 		cout<<"\n stack overflow";
	 }
	 else{
	 	ptr->top++;
	 	ptr->arr[ptr->top]=data;
	 }
 }
 int pop(struct stack *ptr){
 	if(isEmpty(ptr)){
 		cout<<"\n stack underflow";
	 }
	 else{
	 	int x=ptr->arr[ptr->top];
	 	ptr->top--;
	 	return x;
	 }
	 return 0;
 }
 int peek(struct stack *ptr, int i){
 	int arry=ptr->top-i+1;
 	if(arry<0){
 		cout<<"\n peek does not valid";
	 }
	 else{
	 	return ptr->arr[arry];
	 }
 }
 int stackTop(struct stack *ptr){
 	return ptr->arr[ptr->top];
 }
 int stackBottom(struct stack *ptr){
 	return ptr->arr[0];
 }
 
 int main(){
 	struct stack *s=(struct stack*)malloc(sizeof(struct stack));
 	s->size=10;
 	s->top=-1;
 	s ->arr=(int*)malloc(s->size* sizeof(int));
      	cout<<"\n before psuhing ,full "<<isFull(s);
      	cout<<"\n before psuhing ,empty "<<isEmpty(s);
      	push(s,5);
     	push(s,4);
      	push(s,3);
      	push(s,2);
      	push(s,1);
      	push(s,2);
      	push(s,3);
      	
      	cout<<"\n after psuhing ,full "<<isFull(s);
      	cout<<"\n after psuhing ,empty "<<isEmpty(s);
       cout<<"\n element poped by stack :"	<<pop(s);
       cout<<"\n element poped by stack :"	<<pop(s);
        cout<<"\n element poped by stack :"	<<pop(s);
        for(int i=1;i<=s->top+1;i++){
        	cout<<"\n peek value is :"<<peek(s,i);
		}
      	 cout<<"\n element at top :"	<<stackTop(s);
      	 cout<<"\n element at bottom :"	<<stackBottom(s);
      	
	}
 	
 
