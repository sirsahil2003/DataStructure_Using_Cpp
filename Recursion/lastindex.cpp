#include <iostream>

using namespace std;

int help(int arr[],int size,int item,int i){
int ans=-1;
if(size==0)
	return -1;

if(arr[0]==item){

	ans=i;
	
}
	
//if(size==0) return ans;

	
 help(arr+1,size-1,item,i+1);	
     return ans;
	}


int lastindex(int arr[],int size,int item){
int i=0;

int smallout=help(arr,size,item,i);

return smallout;
  
}




int main(){

int arr[]={5,5,6,5,6,7,8,7};
int size=8;
int item=6;
cout<<lastindex(arr,size,item)<<endl;
/*
cout<<"first index is of item::"<<item<<"  is::"<<firstindex(arr,size,item)<<endl;
*/

/*
//iterative approach
int i,ans=-1;
for(i=0;i<size;i++){

if(arr[i]==item){
        ans=i;
	//cout<<"index is::"<<i<<endl;
	continue;
	}  

	           
	}
cout<<ans<<endl;

if(ans==-1){
	cout<<"not found"<<endl;
	
}

*/
}


//cout<<firstindex(arr,size,item)<<endl;



