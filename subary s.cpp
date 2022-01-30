#include<iostream>
using namespace std;
int main(){
	 int n;
	 int s ,i=0,j=0;
	 cin>>n;
	 cin>>s;
	 int st=0 , et=0;
	 int arr[n];
	 int sum=0;
	 for( i=0;i<n;i++){
	 	cin>>arr[i];
	 }

	 for(j=0;i<n;i++){
	 	if(sum+arr[j]<=s){
	 		sum +=arr[j];
		 }

	 }
	 if(sum==s){
	 	cout<<i+1<<" "<<j<<endl;
	 }
	 else if(sum>s){
	 	sum-=arr[i];
	 	i++;
	 }
//	 if(sum==s){
    //  st=i+1;
	//  et=j+1;
//	break;
//	 }
//	j++;
	cout<<i<<" "<<j;
	 
}
