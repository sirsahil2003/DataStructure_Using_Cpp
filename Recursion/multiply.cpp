#include<iostream>

using namespace std;
int multiply(int m,int n){


if(m==0 || n==0)
	return 0;

   
return  multiply(m,n-1)+m;




}




int main(){

int m,n;
cout<<"enter value of m"<<endl;
cin>>m;
cout<<"enter value of n"<<endl;
cin>>n;
cout<<multiply(m,n)<<endl;




}


