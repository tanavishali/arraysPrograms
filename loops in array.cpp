#include<iostream>
//#include <string>
using namespace std;
int main(){
	// array in loops
	string name[3]={"ali", "asad", "random"};
	for(int i=0;i<3;i++){
		cout<<name[i]<<endl;
	}
	int num[3]={1,2,3};
	for(int i=0;i<=2;i++){
		cout<<num[i];
	}
	// how much the size of num find in this way
	int n=sizeof(num)/sizeof(int);
	cout<<n;
}