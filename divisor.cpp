#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ct=0;
	int sum=0;
	for(int i=0;i<=sqrt(n);i++){
      if(n%i==0){
      	cout<<i<<" "<<n/i<<endl;
		
	  ct+=1;
	  sum+=i;
	  if(n/i!=i){
	  	sum+=n/i;
	  	ct+=i;
	  }
	}
}

	cout<<ct<<" "<<sum<<endl;
	
}
