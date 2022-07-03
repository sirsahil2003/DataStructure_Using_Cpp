#include<iostream>
#include<cmath>
using namespace std;

double Gsum(int k,int i){
if(k==0){
	return 1;
	}

return (1/pow(2,k))+Gsum(k-1,i+1);


}




int main(){

int k;
cout<<"enter value of k"<<endl;
cin>>k;
int i=0;

cout<<Gsum(k,i)<<endl;



}
