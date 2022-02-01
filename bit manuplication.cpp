#include<bits/stdc++.h>
using namespace std;
// helps us to find set bit in any position
int setBit(int n ,int pos){
	return (n | (1<<pos));
}
// help us to find bit position
int getBit(int n,int pos){
	return (n & (1<<pos))!=0;
}
//help us to clear bit from that another positon
int clearBit(int n,int pos){
	int mask=~(1<<pos);
	return n & mask;
}
// update position of any positon
int updateBit(int n,int pos, int value){
	int mask=~(1<<pos);
	n=n&mask;
	return n | value<<pos;
	
}
int main(){
//cout<<setBit(5,1);
//cout<<getBit(5,2);
//cout<<clearBit(5,2);
cout<<updateBit(5,1,1);


	
}
