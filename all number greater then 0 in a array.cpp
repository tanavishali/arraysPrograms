#include<iostream>
using namespace std;
int main(){
//	14. How can you use a for loop to check if all elements in an array are greater than 0?
int num[4],greater=true;
for(int i=0;i<4;i++){
	cin>>num[i];
}
for(int i=0;i<4;i++){
cout<<num[i]<<endl;	
if(num[i]<=0){
	greater=false;
//break;
}
}
	if(greater){
		cout<<"true";
	}
	else{
		cout<<"fals";
	}
}