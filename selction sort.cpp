#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(min!=i){
			swap(arr[i],arr[min]);
		}
	}
}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
}
int main(){
	int arr[6]={6,7,8,1,2,5};
	int n=6;
	selectionSort(arr,n);
//	
printArray(arr,n) ;

}
