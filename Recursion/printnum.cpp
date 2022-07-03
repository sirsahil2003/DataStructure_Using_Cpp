#include<iostream>

using namespace std;

int print(int n){

if(n==0){
  return 0;
        }
   
   print(n-1);
   cout<<n<<" ";
  
   }


int main(){

int n;
cin>>n;
print(n);


}











/*
//loop approach 

int n;
cin>>n;
int i=1;
while(i<=n){
cout<<i<<" ";
i++;
*/





	



