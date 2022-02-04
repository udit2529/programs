#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x,a,b;
        cin>>x>>a>>b;
        if(x == 1 && a == b)
            cout<<"1"<<endl;
        else if(x % a != 0 || b >= a)
            cout<<"-1"<<endl;
        else
            cout<<(x*b)/a<<endl;
            
    }
    return 0;
}
