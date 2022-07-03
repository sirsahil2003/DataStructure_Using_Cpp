#include <iostream>

using namespace std;

int help(int arr[],int size,int item,int i){
if(size==0)
	return -1;



if(arr[0]==item)
	return i;

 return  help(arr+1,size-1,item,i+1);	
     
	}


int firstindex(int arr[],int size,int item){
int i=0;

int smallout=help(arr,size,item,i);

return smallout;
  
}




int main(){

int arr[]={5,5,6,5,6,7,8,7};
int size=8;
int item=7;
cout<<"first index is of item::"<<item<<"  is::"<<firstindex(arr,size,item)<<endl;


/*
//iterative approach
int i;
for(i=0;i<size;i++){

if(arr[i]==item){
	cout<<"index is::"<<i<<endl;
	break;
	}  

	           
	}

if(i==size){
	cout<<"not found"<<endl;
}


}
*/

//cout<<firstindex(arr,size,item)<<endl;



}
