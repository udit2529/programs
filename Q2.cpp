#include<iostream>
using namespace std;

class node{
	public:
		int value;
		node* prev;	
};

class stack{
	public:
		node *top;
		int stackSize = 0;
		
		stack(){
			top = NULL;
		}
		
		void push(int v){
			
			stackSize++;
			
			node *newNode;
			newNode = new node();
			
			if (!newNode)
		    {
		        cout << "\nHeap Overflow";
		        exit(1);
		    }
			
			newNode->value = v;
			
			newNode->prev = top;
			top = newNode;
		}
		
		int pop(){
			
			stackSize--;
			
			if(top == NULL){
				cout<<"Stack empty";
			}
			
			int removed = top->value;
			top = top->prev;
			
			return removed;
		}
		
		int size(){
			return this->stackSize;
		}
		
		int peek(){
			
			if(top == NULL){
				cout<<"Stack is empty";
				return 0;
			}
			
			return top->value;
		}
		
		bool isEmpty(){
			return stackSize == 0;
		}
		
		void printStack(){
			
			node *current = top;
			
			if(current == NULL){
				cout<<"Stack is empty";
			} else {
				while(current != NULL){
					
					cout<<current->value<<endl;
					current = current->prev;
					
				}
			}
			
		}
			
};

class queue{
	private:
		stack stack1;
		stack stack2;
		
	public:
		
		void enqueue(int element){
			
			stack1.push(element);
			
		}
		
		int dequeue(){
		
			if(stack2.isEmpty()){
				while(!stack1.isEmpty()){
					stack2.push(stack1.pop());
				}
			}
			
			stack2.pop();
			
		}
		
		int size(){
			return stack2.size();
		}
		
};

int main(){
	
	queue q1;
	q1.enqueue(3);
	q1.enqueue(4);
	q1.enqueue(5);
	cout<<"Element "<<q1.dequeue()<<" removed.";
	
	return 0;
}
