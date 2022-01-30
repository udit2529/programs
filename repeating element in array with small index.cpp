//given an array n. find the element repeating it self on small index in an array;
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int a[n+1];

	int midix=INT_MAX;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				a[j]=j;
			}
			else{
				a[j]=-1;
			}
		}
			}
			for(int i=0;i<n+1;i++){
				cout<<a[i]<<" ";
			}
			return 0;
}
