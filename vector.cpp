
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
void display(vector<int> &v){
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
	
	vector<int>v;
	for(int i=0;i<4;i++){
		int x;
		cin>>x;
		v.push_back(x);

	}
	display(v);
    v.pop_back();
	display(v);	
	vector<int>:: iterator it;
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	v.insert(it,6);
	display(v);

}

