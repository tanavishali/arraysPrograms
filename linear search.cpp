#include<iostream>
using namespace std;
int main(){
	int number[5]={11,43,74,0,2};
	int search,value=-1;
	for(int i=0;i<5;i++){
		cout<<number[i]<<endl;
	}
	cout<<"enter number for search in this array:";
	cin>>search;
	for(int i=0;i<5;i++){
		if(search==number[i]){
			cout<<"index number"<<i<<endl;
			value=i; //store the index value in other variable 
		break;
}
	
	}
	if(value==-1){
		cout<<"number not found";
	}
	else{
		cout<<" the index value of  "<<search<<" is "<<value;	
	}
	return 0;
}