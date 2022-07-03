#include<iostream>

using namespace std;

bool isSorted(int a[], int size){

if(size==0 || size==1){
 return true;
                      }
                      
if(a[0]>a[1]){
return false;

}

bool smallerOutput=isSorted(a+1,size-1);

if(smallerOutput){
return true;
		}
else{
 return false;
    }
 




}


int main(){
int a[]={2,4,6,7,5};
bool out=isSorted(a,5);
cout<<"1::indicates arr is sorted"<<"0:: indicates arr is not soted"<<endl;
cout<<out<<endl;

}


