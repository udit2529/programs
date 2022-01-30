#include<iostream>
using namespace std;
int main(){
	int m=-1,n=-1;
	while(m<0){
		cout<<"Enter the value of m :";
		cin>>m;
		if(m<0){
			cout<<"Value of m can't be less than 0 \n";
		}
	}
	
	while(m>n){
		
		cout<<"Enter the value of n :";
		cin>>n;
		if(m>n){
			cout<<"Value of n can't be less than m\n";
		}	
	}
	int lines = 2*(n-m+1);
	int q = m;
	for(int i=0 ; i<lines/2 ;i++){
		for(int j=0 ; j<q ;j++){
			cout<<"*";
		}
		q = q + 1;
		cout<<endl;	
	}
	q = n;
	for(int i=0 ; i<lines/2 ;i++){
		for(int j=0 ; j<q ;j++){
			cout<<"*";
		}
		q = q - 1;
		cout<<endl;	
	}
	
}
