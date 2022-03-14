
#include <iostream>
using namespace std;
int PowerOf(int n){
    return !((n&n-1)&&n);
}
int main() {
	// your code goes here
    int n;
    cin>>n;
    int a=PowerOf(n);
    cout<<a;
}
