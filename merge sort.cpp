 #include<iostream>
using namespace std;
void merge(int arr[], int s,int e){
	int mid=(s+e)/2;
	int len1=mid-s+1;
	int len2=e-mid;
//	int  *first=new int[len1];
//int  *second= new int[len2];
  int first[len1],second[len2];
	//copy values
	int k=s;
	for(int i=0;i<len1;i++){
		first[i]=arr[k++];
	}
    k=mid+1;
	for(int i=0;i<len2;i++){
		second[i]=arr[k++];
	}
	// merge 2 sorted array-[[']]
	int index1=0;
	int index2=0;
	k=s;
	while(index1<len1&&index2<len2){
		if(first[index1]<second[index2]){
			arr[k++]=first[index1++];
		}
		else{
		arr[k++]=second[index2++];
	}
}
while(index1<len1){
arr[k++]=first[index1++];
}	
while(index2<len2){
	arr[k++]=second[index2++];
}

}
void mergeSort(int arr[],int s,int e){
if(s>=e){
    return;
}
//cout<<"HI"<<endl;
	int mid=(s+e)/2;
	//left vale part ke liye sort
	mergeSort(arr,s,mid);
	//right vle part ke liye
	mergeSort(arr,mid+1,e);
	// for merging two sorted array
	merge(arr,s,e);

}
int main(){
	int arr[7]={5,6,2,2,1,4,8};
	int n=7;
	mergeSort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

