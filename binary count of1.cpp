#include <iostream>
using namespace std;
  
  int numberofone(int n){
	  int count=0;
	  while(n){
		  n=n&n-1;
		  count++;
	  }
	  return count;
  }
int main() {
	// your code goes here
	int n;
	cin>>n;
	int a=numberofone( n);
	cout<<a<<endl;
		return 0;
}
