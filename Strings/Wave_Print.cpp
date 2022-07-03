#include<iostream> 

using namespace std;

int main(){
int arr[100][100];
int rows,cols,k;
cin>>rows>>cols;

for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
 		cin>>arr[i][j];

			    }
			  }
 

//row wise
for(k=0;k<cols;k++){

if(k%2==0){

for(int i=0;i<rows;i++)
    cout<<arr[i][k]<<" ";


}

else{
for(int i=rows-1;i>=0;i--)
    cout<<arr[i][k]<<" ";

}
	
}

}
