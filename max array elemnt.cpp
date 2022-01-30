//find a max element and max i in an array
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int max;
		for(int i=0;i<n;i++)
		{	
	cin>>a[n];
}
	max=a[0];
	for(int i=1;i<n;i++){
		
		if(max<a[i]){
			max=a[i];	
		}
		else{
			break;
		}
	
	}
	cout<<max<<endl;
}
