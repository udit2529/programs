 
#include<iostream> 
#include <stdio.h>
#define size 5  
using namespace std;  
int deque[size];  
int f=-1, r=-1;  
void enquefront(int val){
	// for check is full or not
	if(f==0&&r==size-1||f==r+1){
		cout<<"\n queue is full";
	}
	else if(f==-1&&r==-1){
		f=r=0;
		deque[f]=val;
	}
	else if(f==0){
		f=size-1;
		deque[f]=val;
	}
	else{
		f--;
		deque[f]=val;
	}
}
void enquerear(int val){
	if(f==0&&r==size-1||f==r+1){
		cout<<"\n Queue is full";
	}
	else if(r==-1&&f==-1){
		f=r=0;
		deque[r]=val;
	}
	else if(r==size-1){
		r=0;
		deque[r]=val;
	}
	else{
		r++;
		deque[r]=val;
	}
}
    void dequefront(){
    	if (r==-1&&f==-1){
    		cout<<"\n queue is empty";
		}
		else if(f==r){
			f=r=-1;
		}
		else if(f==size-1){
			cout<<"\n dequeue element is:"<<deque[f];
			f=0;
		}
		else{
			cout<<"\n dequeue element is:"<<deque[f];
			f++;
		}
			}
			
			void dequerear(){
    	if (r==-1&&f==-1){
    		cout<<"\n queue is empty";
		}
		else if(f==r){
			f=r=-1;
		}
		else if(f==size-1){
			cout<<"\n dequeue element is:"<<deque[r];
			r=0;
		}
		else{
			cout<<"\n dequeue element is:"<<deque[r];
			r--;
		}
			}
			void display(){
				int i=f;
				while(i!=r){
					cout<<"\n element is :"<<deque[i];
					 i=(i+1)%size;  
				}
				cout<<"\n elemnt is :"<<deque[r];  
				
			}
int main(){
	enquefront(1);
	enquefront(2);
	enquefront(3);
	enquerear(4);
	dequerear();
	dequefront();
	display();
	
}
