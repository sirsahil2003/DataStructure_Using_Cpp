#include<iostream>
using namespace std;
#define PI 3.14

int a;


void g(){
a++;
cout<<a<<endl;
}

void f(){
cout<<a<<endl;
a++;
g();

}


int main(){

a=10;
f();
cout<<a<<endl;






/*
int r;
cout<<"enter radius"<<endl;
cin>>r;
cout<<PI*r*r<<endl;
*/





}


