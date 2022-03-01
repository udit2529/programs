// inversion count
#include<iostream>
using namespace std;
int inversioncount(int arr[], int n){
	int count =0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				count++;
			}
			
		}
	}
	return count;
}
int main(){
	int arr[5]={6, 9 , 1 ,2,5};
	int n=5;
  	int c=inversioncount(arr,n);
    cout<<c;
	
}
