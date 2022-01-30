#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class que{
stack<int>s1;
stack<int>s2;
public:
void enqueue(int x){
	s1.push(x);
}
int dequeue(){
	if(s1.empty() && s2.empty()){
		cout<<"\n queus are empty";
		return -1;
	}
	else if(s2.empty()){
		s2.push(s1.top());
		s1.pop();
	}
	int topp=s2.top();
	s2.pop();
	return topp;
}
};
int main(){
	que q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	cout<<q1.dequeue();
	q1.enqueue(5);
		cout<<q1.dequeue();
}

