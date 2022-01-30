//given an array of n intergersand number s denoting the sum.find two distict integer that can make pair equals to s.ley assume there only be one pair.
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int arr[n];
	int s=4;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
/*	for(int i=0;i<n;i++){
		for(int j=n;j>0;j--){
			if(i==j){
				break;
			}
			else if(s==arr[i]+arr[j]){
				cout<<arr[i]<<" "<<arr[j];
			}
			else if(s==arr[i]-arr[j]){
					cout<<arr[i]<<" "<<arr[j];
			}
		}
	}*/
	for(int i=0;i<n;i++){
		for(int j=i+1;i<n;i++)
		if (s==arr[i]+arr[j]){
			cout<<arr[i]<<" "<<arr[j];
		}
		
			else if(s==arr[i]-arr[j]){
				cout<<arr[i]<<" "<<arr[j];
			}
			else {
				return 0;
			}
		}
	
	return 0;
}
