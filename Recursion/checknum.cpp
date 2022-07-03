#include<iostream>

using namespace std;

bool checknum(int arr[],int size,int item){
	if(size==0){
		return false;
		}
	if(arr[0]==item){
	return true;
			}

	bool check=checknum(arr+1,size-1,item);
	return check;
	
	
}




int main(){

int arr[]={2,3,32,56,78,8};
int size=6;
int item=8;   //item to be search
bool out=checknum(arr,size,item);
cout<<out<<endl;

}















