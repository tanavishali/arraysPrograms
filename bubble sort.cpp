#include<iostream>
using namespace std;
int main(){
	int array[4];
	for(int i=0;i<4;i++){
		cin>>array[i];
	}
	//unsorted array 
	for(int i=0;i<4;i++){
		cout<<array[i]<<" ";
	}
//	first sort the array to find the given number in array
    int temp=-1;
    for(int i=0;i<4;i++){
    	for(int j=0;j<3;j++){
    		if(array[j]>array[j+1]){
    			    		
    			temp=array[j];
    			array[j]=array[j+1];
    			array[j+1]=temp;
			}
		}
	}
	cout<<endl;
	for(int i=0;i<4;i++){
		cout<<array[i]<<" ";
	}
	int mid, lock=-2, start=0, end=4, num;
	cin>>num;
	for( ; start<=end ; ){
		mid=(start+end)/2;
		if(num==array[mid]){
			lock=mid;
			break;
		}
		else if (num<array[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	if(lock==-2){
		cout<<"number not found";
	}
	else{
		cout<<" number index is "<<lock;
	}
}