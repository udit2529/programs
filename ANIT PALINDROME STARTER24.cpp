#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes herei
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	     bool b=false;
	     int n;
	     string s;
	     cin>>n>>s;
	     sort(s.begin(),s.end());
	     reverse(s.begin(),s.begin()+n/2);
	     string t=s;
	     reverse(t.begin(),t.end());
	     for(int i=0;i<s.size();i++){
	          if(s[i]==t[i]){
	              b=true;
	              break;
	          }
	     }
	     if(b==false){
	     cout<<"Yes"<<"\n"<<s<<endl;
	     }
	     else{
	          cout<<"No"<<endl;
	     }
	     
	}
	return 0;
}

