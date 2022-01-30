#include<iostream>
#include<stdlib.h>
using namespace std;
 struct stack{
 	int size;
 	int top;
 	char *arr;
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
 void push(struct stack *ptr,char data){
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
	 	char x=ptr->arr[ptr->top];
	 	ptr->top--;
	 	return x;
	 }
	 return 0;
 }
int parenthesis(char *p){
	struct stack *sp;
	sp->size=100;
	sp->top=-1;
	sp->arr=(char*)malloc(sp->size*sizeof(char));
	for(int i=0;p[i]!='\0';i++){
		if(p[i]=='('){
			push(sp,p[i]);
		}
		else if(p[i]==')'){
			if(isEmpty(sp)){
				return 0;
			}
			pop(sp);
		}
	}
	if(isEmpty(sp)){
		return 1;
	}
	else{
		return 0;
	}
}
 
 int main(){
  char* ep= "(8+(7*5)) ";
  if(parenthesis(ep)){
  	cout<<"\n parenthesis is balanced";
  }
  else{
  	cout<<"\n parenthesis is not balanced";
  }
  return 0;
	}
 	
 
