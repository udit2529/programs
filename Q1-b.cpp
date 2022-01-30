#include<iostream>
using namespace std;
bool game(int n){
	int bears=n;
	while(bears!=42){
		
		if(bears%5 == 0){
			bears = bears - 42;
		}
		if(bears%2==0){
			bears = bears/2;
		}
		if(bears%4==0 || bears%3==0){
			int last = bears%10;
			int secondlast = (bears%100)/10;
			bears = bears - last*secondlast;
		}
		
		if(bears<42){
			return false;
		} else if(bears == 42){
			return true;
		} else if (bears%5!=0 && bears%2!=0 && bears%3!=0 && bears%4!=0){
			return false;
		}
		
	}
	
}

int main(){
	
	int n = -1;
	
	while(n<0){
		cout<<"Enter the numbers of bear : ";
		cin>>n;
		
		if(n<0){
			cout<<"Number of bears can't be less than 0";
		}
	}
	
	if(game(n)==true){
		cout<<"Game won";
	} else {
		cout<<"Game lost";
	}
	
}

