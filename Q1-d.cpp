#include<iostream>
using namespace std;
void permutations(string str,int start,int end){
	
	if(start == end){
		cout<<str<<endl;
	}
	
	for(int i=start ; i<=end ; i++){
		
		swap(str[start],str[i]);
		permutations(str,start+1,end);
		swap(str[start],str[i]);
		
	}
	
}

int main(){
	string str = "1234";
	int n = str.length();
	permutations(str,0,n-1);
	
	return 0;
}
