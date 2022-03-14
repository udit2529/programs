#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n,int i){
	int parent=(i-1)/2;
	if(arr[parent]>0){
		if(arr[i]>arr[parent]){
			swap(arr[i],arr[parent]);
			heapify(arr,n,parent);
		}
	}
//	int largest =i;
//	int l=2*i;
//	int r=2*i+1;
//	if(r<=n&&a[r]>a[largest]){
//		largest=r;
//	}
//	if(l<=n&&a[l]>a[largest]){
//		largest=l;
//	}
//	if(largest!=i){
//		swap(a[i],a[largest]);
//		heapify(a,n,largest);
//	}
}
void insertNode(int arr[],int &n, int key){
	//inc the size of heap
	n=n+1;
	//insert element in end of heap
	arr[n-1]=key;
	heapify(arr,n,n-1);
	
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
 
    cout << "\n";
}
int main(){
	int arr[5]={10,20,3,15,12};
	int n=5;
	int key=1;
	
	insertNode(arr,n,key);
	 printArray(arr, n);
}
