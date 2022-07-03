#include<iostream>

using namespace std;

int countdigit(int n){
if(n==0){
   return 0;
  	}
  n=n/10;
  return countdigit(n)+1;
  
}


int main(){


int n;
cin>>n;
cout<<countdigit(n)<<endl;




// iterative approach
/*
int n;
int count;
cin>>n;
count=0;

while(n!=0){

n=n/10;
++count;


}
cout<<count<<endl;
*/

}

