#include<bits/stdc++.h>
using namespace std;
void heapify(int a[],int n,int i){
	int largest =i;
	int l=2*i;
	int r=2*i+1;
	if(r<=n&&a[r]>a[largest]){
		largest=r;
	}
	if(l<=n&&a[l]>a[largest]){
		largest=l;
	}
	if(largest!=i){
		swap(a[i],a[largest]);
		heapify(a,n,largest);
	}
}
void deleteheap(int arr[], int &n)
{
    // Index of last non-leaf node
    int last = arr[n-1];
 
    // Perform reverse level order traversal
    // from last non-leaf node and heapify
    // each node
    arr[0]=last;
    n=n-1;
    heapify(arr,n,0);
}
void printHeap(int arr[],int n){
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[5]={10,30,40,50,60};
	int n=5;
	deleteheap(arr,n);
	printHeap(arr,n);
	
}
