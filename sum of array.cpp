#include<iostream>
using namespace std;
int main(){
	// sum of array 
	int num[4]={1,2,3,4};
	int sum=0;
	for(int i=0;i<4;i++){
		sum=sum+num[i];
	}
	cout<<"sum of array is :"<<sum;
}