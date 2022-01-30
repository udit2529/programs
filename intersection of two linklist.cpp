#include <bits/stdc++.h>
using namespace std;
class listnode {
   public:
      int data;
   listnode * next;
};
// Find the length of the linked list
int count(listnode * head) {
   int count = 0;
   while (head != NULL) {
      count++;
      head = head -> next;
   }
   return count;
}
//Function to get the common point of two linked list
int commonPoint(listnode * headA, listnode * headB) {
	int len1=count(headA);
	int len2=count(headB);
	listnode *ptr1;
	listnode *ptr2;
	int diff=0;
 if(len1>len2){
 	diff=len1-len2;
 	ptr1=headA;
 	ptr2=headB;
 }
 else {
 	ptr1=headB;
 	ptr2=headA;
 }
 while(diff){
 	ptr1=ptr1->next;
 	if(ptr1==NULL){
 		return -1;
	 }
 	diff--;
 }
 while(ptr1!=NULL&&ptr2!=NULL){
 	if(ptr1==ptr2){
 		return ptr1->data;
	 }
	 ptr1=ptr1->next;
	 ptr2=ptr2->next;
 }
 return -1;
 



	
}
int main() {
   listnode * head;
   listnode * headA = new listnode();
   headA -> data = 5;
   listnode * headB = new listnode();
   headB -> data = 4;
   head = new listnode();
   head -> data = 9;
   headB -> next = head;
   head = new listnode();
   head -> data = 2;
   headB -> next -> next = head;
   head = new listnode();
   head -> data = 7;
   headA -> next = head;
   headB -> next -> next -> next = head;
   head = new listnode();
   head -> data = 3;
   headA -> next -> next = head;
   headA -> next -> next -> next = NULL;
   cout << commonPoint(headA, headB) << endl;
}
