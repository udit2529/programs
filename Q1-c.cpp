#include<iostream>
using namespace std;

string letters(char letter){
	if(letter == 'A'){
		return "A";
	}
	
	string part = letters(letter -1);
	string returnString = part + letter + part;
	return returnString;
	
}

int main(){
	
	cout<<letters('D');
	
	return 0;
}
