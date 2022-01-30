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
			prev = NULL;
			next = NULL;
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
		
		doublyLinkedList<T> oddList(){
			
			node<T> *current = head;
			
			doublyLinkedList<T> list2;
			
			if(current == NULL){
				cout<<"List doesn't have odd elements";
			} else {
				
				if(size%2 == 0){
					while(current != NULL){
						list2.insertAtEnd(current->value);
						current = current->next->next;
					}
				} else {
					while(current->next != NULL){
						list2.insertAtEnd(current->value);
						current = current->next->next;
					}
					list2.insertAtEnd(current->value);
				}
				
			}
			
			return list2;
			
		}
		
		doublyLinkedList<T> evenList(){
			
			node<T> *current = head;
			
			doublyLinkedList<T> list2;
			
			if(current == NULL){
				cout<<"List doesn't have even elements";
			} else {
				
				current = current->next;
				
				if(size%2 == 1){
					while(current != NULL){
						list2.insertAtEnd(current->value);
						current = current->next->next;
					}
				} else {
					while(current->next != NULL){
						list2.insertAtEnd(current->value);
						current = current->next->next;
					}
					list2.insertAtEnd(current->value);
				}
				
			}
			
			return list2;
			
		}
		
};

int main(){
	
	doublyLinkedList<int> list1;
	list1.insertAtEnd(1);
	list1.insertAtEnd(2);
	list1.insertAtEnd(3);
	list1.insertAtEnd(4);
	list1.insertAtEnd(5);
	list1.insertAtEnd(6);
	list1.insertAtEnd(7);
	list1.insertAtEnd(8);

	cout<<"List 1 : ";
	list1.printList();
	cout<<endl;
	
	doublyLinkedList<int> oddList;
	doublyLinkedList<int> evenList;
	
	oddList = list1.oddList();
	cout<<"Odd List : ";
	oddList.printList();
	cout<<endl;
	
	evenList = list1.evenList();
	cout<<"Even List : ";
	evenList.printList();
	
	return 0;
}
