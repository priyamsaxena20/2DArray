#include<iostream>
using namespace std;
int LargestSumRow(int arr[][3],int row,int col){
	int maxi=INT_MIN;
	int RowIndex=-1;
	int sum=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			sum=sum+arr[i][j];
		}
		if(sum>maxi){
			maxi=sum;
			RowIndex=row;
		}
		//return row;
	}
	cout<<"the row is"<<endl;
	return RowIndex;
	
	
	
}
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
//	return 0;
	//int anss=LargestSumRow(arr,3,3);
	cout<<"the row index is"<<LargestSumRow(arr,3,3)<<endl;
	//cout<<anss;
	return 0;
	
	
	
	
}
