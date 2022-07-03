#include<iostream>

using namespace std;

void increment(int &i){
i++;
                      }


//bad practice                     
int& f(int n){

int a=n;
return a;

	}
	
//bad practice

int* f2(){

int i=10;
return &i;
	}





int main(){

int *p=f2();


int i=10;
int& x=f(i);
cout<<x;





/*
int z=10;
increment(z);
cout<<z<<endl;
*/










/*
int i=10;


int &j=i;

j++;

cout<<i<<"  "<<j<<endl;

int k=100;

j=k;

cout<<j<<" "<<i<<" "<<k<<endl;
*/






}
