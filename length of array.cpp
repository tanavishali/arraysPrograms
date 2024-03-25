#include<iostream>
using namespace std;
int main(){
	// length of array
	int num[4]={1,2,3,4};
//	first find the size of this array of one index
cout<<" size of array:"<<sizeof(num[0]);
int length;
cout<<endl<<sizeof(num);
length=sizeof(num)/sizeof(num[3]);
cout<<endl<<"LENGTH OF this array is :"<<length;
}