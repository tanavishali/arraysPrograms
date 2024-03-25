//16. Write a for loop to calculate the average of elements in an array.
#include<iostream>
using namespace std;
int main(){
	int num[5]={1,2,3,2,2};
	int average,sum=0;
	int length;
	length=sizeof(num)/sizeof(int); //find the length of array
	for(int i=0;i<5;i++){
sum=sum+num[i];
average=sum/length; //length is 5
	}
	cout<<average;
}