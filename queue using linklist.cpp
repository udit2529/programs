#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node *f = NULL;
struct Node *r = NULL;
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr){
	printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void enqueue( int val){
	struct Node *ptr=(struct Node*)malloc (sizeof(struct Node));
	// memory allocate aagr nhi paayi isko is ka mtlb full h queue
	if(ptr==NULL){
		cout<<"\n queue is full";
	}
	else{
		ptr->data=val;
		ptr->next=NULL;
		// jab hamrri queue blkl empty h
		if(f==NULL){
			f=r=ptr;
		}
		else{
			r->next=ptr;
			r=ptr;
		}
	}
	
}
int dequeue(){
	struct Node *ptr=f;
		int a=-1;
	if(f=NULL){
		cout<<"\n queue is Empty";
	}
	else{
	
		f=f->next;
		a=ptr->data;
		free(ptr);
	}
	return a;
}
int main(){
	traversal(f);
	enqueue(24);
	enqueue(34);
    enqueue(4);
    //enqueue(7);
  //  enqueue(f,r,17);
//    printf("Dequeuing element %d\n", dequeue(f));
 cout<<"Dequeuing element\n"<<dequeue();
   traversal(f);
    return 0;
}
