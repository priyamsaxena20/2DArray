#include<iostream>
using namespace std;
void printsum(int arr[][3],int col,int row){
	int sum=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			sum=sum+arr[i][j];
		}
		cout<<"the sum is "<<sum;
	}
	
	
	
}
int main(){
	int arr[3][3];
	cout<<"enter the element"<<endl;
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cin>>arr[row][col];
		}
	}
	cout<<"matrix will look like this"<<endl;
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cout<<arr[row][col]<<" ";
		}
		cout<<endl;
	}
	printsum(arr,3,3);
	return 0;
	
	
	
}
