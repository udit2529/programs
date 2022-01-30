#include<iostream>
using namespace std;

template <class T>
class node{
	public:
		T value;
		node* prev;
		node* next;
		node(T value){
			this->value = value;
		}
};

template <class T>
class doublyLinkedList{
	private:
		node<T> *head;
		node<T> *tail;
		int size;
		
	public:
		doublyLinkedList(){
			head = NULL;
			tail = NULL;
			size = 0;
		}
		
		void insertAtEnd(T element){
			
			node<T> *temp = new node<T>(element);
			
			if(head == NULL){
				head = temp;
			} else {
				temp->prev = tail;
				tail->next = temp;
			}
			
			tail = temp;
			size++;
		}
		
		T removeFromEnd(){
			
			node<T> *removedNode = tail;
			
			if(tail->prev == NULL){
				head = NULL;
			}
			
			tail = tail->prev;
			tail->next = NULL;
			size--;
			
			removedNode->prev = NULL;
			
			return removedNode->value;
		}
		
		void printList(){
			
			node<T> *current = head;
			
			if(current == NULL){
				cout<<"List is empty";
			} else {
				
				while(current != NULL){
					cout<<current->value<<" ";
					current = current->next;
				}
				
			}
			
		}
		
		int listSize(){
			return size;
		}
		
		doublyLinkedList<T> function(){
			
			node<T> *current = head;
			
			doublyLinkedList<T> list2;
			
			if(current == NULL){
				cout<<"List is empty";
			} else {
				
				int count = 0;
				
				while(current != NULL){
					
					count += current->value;
					
					list2.insertAtEnd(count);
					current = current->next;
					
				}
				
			}
			
			return list2;
			
		}
		
};

int main(){
	
	doublyLinkedList<int> in;
	doublyLinkedList<int> out;
	
	in.insertAtEnd(1);
	in.insertAtEnd(2);
	in.insertAtEnd(3);
	in.insertAtEnd(4);
	in.insertAtEnd(5);
	in.insertAtEnd(6);
	
	out = in.function();
	
	in.printList();
	cout<<endl;
	out.printList();
	
	return 0;
}
