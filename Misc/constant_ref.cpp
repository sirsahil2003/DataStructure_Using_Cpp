#include<iostream>

using namespace std;

int main(){

//const int 
/*
int const i=13;
const int i=13;
*/



//const ref from non const int 

int j=15;
const int &k=j;
//k++;  cant do so bkz path of k is constant 
j++;
cout<<k<<endl;




//const ref from const int 
int const j2=12;
int const & k2=j2;
//bot k2 and j2 read only 
cout<<k2<<" "<<j2<<endl;


//reference from  a const int 
 int const j3=123;
 
 //not allowed to do so
 //int &k3=j3;
 //k3++;
 


 













}
