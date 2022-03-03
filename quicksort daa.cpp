#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int partition(int arr[], int s, int e)
 {
 	int pivot=arr[s];
 	int count=0;
 	for(int i=s+1;i<=e;i++){
 		if(arr[i]<=pivot){
 			count++;
		 }
	 }
	 int pivotIndex=s+count;
	 
	 //place pivot at right position
	 swap(arr[pivotIndex],arr[s]);
	 //left and right wala part sambhalna h
	 int i=s,j=e;
	 while(i<pivotIndex&&j>pivotIndex){
	 	while(arr[i]<pivot){
	 		i++;
		 }
		 while(arr[j]>pivot){
		 	j--;
		 }
		 if(i<pivotIndex&&j>pivotIndex){
		 	swap(arr[i++],arr[j--]);
		 }
	 }
	 return pivotIndex;
 }
void quicksort(int arr[],int s,int e){
	if(s>=e){
		return ;
	}
	int p=partition(arr,s,e);
	//left part sort
	quicksort(arr,s,p-1);
	//right part sort
	quicksort(arr,p+1,e);
}
int main(){
	int arr[6]={10,50,70,80,20, 30};
	int n=6;
	 quicksort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
