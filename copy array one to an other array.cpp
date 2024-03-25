#include<iostream>
using namespace std;
int main(){
//	copy one array into other array using loop
/*	int num[4]={1,22,33,4};
	int otherArr[4];
	cout<<"first array :";
	for(int i=0;i<4;i++){
		cout<<num[i]<<" ";
        otherArr[i]=num[i];	
	}
	cout<<"store one array to other array :"<<endl;
	cout<<"second array ";
	for(int j=0;j<4;j++)
	{
		cout<<otherArr[j]<<" ";
	}
*/

//if user enter values
int num[4],otherArr[4];
for(int i=0;i<4;i++){
	cin>>num[i];
}
cout<<"first array :";
for(int i=0;i<4;i++){
	cout<<num[i]<<" ";
	otherArr[i]=num[i]; //this store num arry to other arry variable
}
cout<<endl<<"second copy of first array :";

// this loop print second array
for(int j=0;j<4;j++){
	cout<<otherArr[j]<<" ";
}
}