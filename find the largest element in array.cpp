#include<iostream>
using namespace std;
int main(){
//	 13. Can you implement a for loop to find the largest element in an array?
int num[4]={1,22,44,0};
int max=num[0]; 
for(int i=0;i<4;i++){
	if(num[i]>max){
		max=num[i];
		
	}
}
cout<<max;
}