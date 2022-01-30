#include<iostream>
#include<stdlib.h>
using namespace std;
struct  circularQueue{
	int f;
	int size;
	int r;
	int *arr;
};
int isEmpty(struct circularQueue *q){
	if(q->r==q->f){
		return 1;
	}
	return 0;
}
int isFull( struct circularQueue *q){
	if((q->r+1)%q->size==q->f){
		return 1;
	}
	return 0;
}
void enQueue(struct circularQueue *q,int val){
	if(isFull(q)){
		cout<<"\n circular queue is overflow \n";
	}
	else{
		q->r=(q->r+1)%q->size;
		q->arr[q->r]=val;
		cout<<"\n enqueue element is:"<<val;
	}
}
int deQueue(struct circularQueue *q){
	if(isEmpty(q)){
		cout<<"circular queue is underflow\n";
	}
	else{
		int a=-1;
		q->f=(q->f+1)%q->size;
		a=q->arr[q->f];
	}
}
int main(){
 struct circularQueue q;
 q.size=4;
 q.f=q.r=0;
 q.arr=(int*)malloc(q.size *sizeof(int));
 	
 	enQueue(&q,2);
 	enQueue(&q,1);
 	enQueue(&q,3);
   	enQueue(&q,2);
   	cout<<"\n deQueue elemnt is :"<<deQueue(&q);
   	cout<<"\n deQueue elemnt is :"<<deQueue(&q);
   	cout<<"\n deQueue elemnt is :"<<deQueue(&q);
   	enQueue(&q,2);
   	if(isFull(&q)){
   		cout<<"\n full circularqueue";
	   }
	   if(isEmpty(&q)){
	   	cout<<"\n empty circular Queue";
	   }
   	 return 0;
   	
   	
}
