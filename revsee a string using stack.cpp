#include<iostream>
#include<stack>
using namespace std;
void reverseStack(string s){
	stack<string>st;
	for(int i=0;i<s.length();i++){
		string words="";
		while(s[i]!=' '&&i<s.length()){
			words=s[i];
			i++;
		}
		st.push(words);
	}
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();

	}
	cout<<endl;
}
int main(){
	string s="how, are you doing?";
	reverseStack(s);
	
}
