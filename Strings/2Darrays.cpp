#include<iostream> 

using namespace std;

int main(){
int arr[100][100];
int rows,col;
cin>>rows>>col;

for(int i=0;i<rows;i++){
	
	for(int j=0;j<col;j++){

	cin>>arr[i][j];

			}

}

//row wise
for(int i=0;i<rows;i++){
	
	for(int j=0;j<col;j++){

	cout<<arr[i][j]<<" ";

			}
	cout<<endl;

}

//col wise
for(int i=0;i<col;i++){
	
	for(int j=0;j<rows;j++){

	cout<<arr[j][i]<<" ";

			}
	cout<<endl;

}

}
