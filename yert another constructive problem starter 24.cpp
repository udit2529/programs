#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
     long long x;
     cin>>x;

     // we have to change basically one bit of 3 so that bitwise operation give x
     long long a=x;
     long long b=x^1;
     long long c=x^2;
     // we obsereve that 2 bit are goona be same in the anser so we have to change only 0 value to 1
    //  long long a=0;
    //  long long b=x;
    //  long long c=x;


    //  for(int i=0;i<31;i++){
    //      if((c& 1<<i)==0){
    //          c=c|1<<i;
    //      }

    //  }
     cout<<a<<" "<<b<<" "<<c<<endl;
    }
	return 0;
}


