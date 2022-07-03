#include<iostream>

using namespace std;


int factorial(int n){

if(n==0){

return 1;
}

return n*factorial(n-1);

 		   }
 		   



int main(){
int n;
int output;
cout<<"Enter a Number to get factorial"<<endl;
cin>>n;

output=factorial(n);
cout<<output<<":: is the factorial"<<endl;
}


