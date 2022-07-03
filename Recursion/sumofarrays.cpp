#include<iostream>

using namespace std;

int sumofarray(int arr[],int size){
   int i=-1;
   if(size==0){
   	return 0;
   	}
   	i++;
   return sumofarray(arr+1,size-1)+arr[i];



				}


int main(){
int size;
int arr[]={2,4,6,18};
int out=sumofarray(arr,4);
cout<<"sum of arrays is::"<<out<<endl;





//iterative approach 
/*
int sum=0;
int n;
int i;
cin>>n;
int arr[n];
for(i=0;i<n;i++){
	
	cin>>arr[i];
	}
for(i=0;i<n;i++){

sum=sum+arr[i];

		}
cout<<sum<<endl;
*/




}
