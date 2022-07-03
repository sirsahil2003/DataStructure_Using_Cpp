#include<iostream>

using namespace std;


int fib(int n){

if(n==0){

return 0;
}

if(n==1){
return 1;
	}



return fib(n-1)+fib(n-2);

 		   }
 		   



int main(){
int n,out;
cout<<"enter a number to get fibonacci:::";
cin>>n;
out=fib(n);
cout<<out<<"   is the fibonacci number at position::"<<n<<endl;
}


