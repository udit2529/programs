#include<iostream>
#include<stdlib.h>
#include<string.h>
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
 int stackTop(struct stack *ptr){
 	return ptr->arr[ptr->top];
 }
 int stackBottom(struct stack *ptr){
 	return ptr->arr[0];
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
  int isOperator(char ch){
  	if(ch=='+'||ch=='-'||ch=='-'||ch=='*'){
  		return 1;
	  }
	  else {
	  	return 0;
	  }
  }
  int isprec(char ch){
  	if(ch=='*'||ch=='/'){
  		return 3;
	  }
	  else if(ch=='+'||ch=='-'){
	  	return 2;
	  }
	  else{
	  	return 0;
	  }
	  
  }
char* infixtoPostfix(char *p){
	struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
	sp->size=100;
	sp->top=-1;
	sp->arr=(char*)malloc(sp->size*sizeof(char));
	char *postfix=(char*)malloc((strlen(p)+1)*sizeof(char*));
	int i=0;// track infix traversal
	int j=0;// track psotfix addition
	while(p[i]!='\0'){
		if(!isOperator(p[i])){
			postfix[j]=p[i];
			i++;
			j++;
		}
		else{
			if(isprec(p[i])>isprec(stackTop(sp))){
				push(sp,p[i]);
				i++;
			}
			else{
				postfix[j]=pop(sp);
				j++;
			}
		}
	}
	while(!isEmpty(sp)){
		postfix[j]=pop(sp);
		j++;
	}
	postfix[j]='\0';
	return postfix;
}
	
	
 
 int main(){
  char* infix="x-y/z-k*d";
  cout<<"postfix :"<<infixtoPostfix(infix);
  return 0;
	}
 	
