/*#include<iostream>
#include<stdlib.h>
using namespace std;
struct Dequeue{
	int f;
	int size;
	int r;
	int *arr;
};*/
#include<iostream>  
#include <stdio.h>  
#define size 5  
using namespace std;
int deque[size];  
int f=-1, r=-1;  
void enQueueFront( int val){
	// check DEqueue is full or not
	if((q->f==0&&q->r==-1)||(q->f=q->r+1)){
		cout<<"queue is full \n";
	}
	else if(q->f==-1&&q->r==-1){
		q->f=q->r=0;
		q->arr[q->f]=val;
	}
	else if(q->f==0){
		q->f=q->size-1;
		q->arr[q->f]=val;
	}
	else{
		q->f--;
		q->arr[q->f]=val;
	}
}
int main(){
	 struct DeQueue q;
    q.size=4;
    q.f=q.r=-1;
 q.arr=(int*)malloc(q.size *sizeof(int));
 enQueueFront(&q,2);
 return 0;
}
