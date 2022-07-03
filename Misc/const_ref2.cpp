#include<iostream>

using namespace std;


void g(int const &a){

//a++;    //cant do change bkz of constant reference
 
}

void f(const int *p){
//*p=*p+9; //now we cant change bkz we are passing cnst ptr 
}


int main(){

int i=10;
int j=21;
//p itself is not constant but the location it is pointing is constant
int const *p=&i;

p=&j;
//(*p++);  //cant do so 

j=345;
cout<<*p<<endl;


int *const p2=&i;
(*p2)++;

p2=&j; //cannot do so
cout<<*p2<<endl;


//now both the p3 and location it is pointing are constants
int const *const p3=&i;
(*p3)++;

 












/*
int const i=10;
int const *p1=&i;

//*p=12;   //bad practice
cout<<i<<endl;

int j=17;
int const *p2=&j;
j++;
cout<<*p2<<endl;
//we cant change through ptr now
//*p2=19;

int z=12;
int *p3=&z;
f(p3);   
g(j);
cout<<z<<endl;
*/




}





