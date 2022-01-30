#include<iostream>
#include<stdlib.h>
using namespace std;
struct queue {
	int size;
	int f;
	int r;
	int *arr; 
};
int isFull(struct queue *q){
	if(q->r==q->size-1){
		return 1;
	}
	return 0;
}
int isEmpty(struct queue *q){
	if(q->f==q->r){
		return 1;
	}
	return 0;
}
void enqueue(struct queue *q, int val){
	if(isFull(q)){
		cout<<"\nqueue is overflow";
	}
	else{
		q->r++;
		q->arr[q->r]=val;
	}
}
int dequeue(struct queue *q){
	int a=-1;
	if(isEmpty(q)){
		cout<<"\n queue is underflow";
	}
	else{
		q->f++;
		a=q->arr[q->f];
	}
	return a;
}

int main(){
	struct queue q;
	q.size=2;
		q.f=q.r=-1;
	q.arr=(int*)malloc(q.size *sizeof(int));
	 
   // struct queue *q;
  //  q->size=100;
  //  q->f=q->r=-1;
//	q->arr=(int*)malloc(q->size *sizeof(int)) ;
	enqueue(&q,5);
	enqueue(&q,6);
	printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    enqueue(&q,7);

   //printf("Dequeuing element %d\n", dequeue(&q))
	 if(isEmpty(&q)){
        printf("\n Queue is empty");
    }
    if(isFull(&q)){
        printf("\nQueue is full");
    }
	
	
	   
	
}
