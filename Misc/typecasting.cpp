#include <iostream>

using namespace std;

int main(){

int i=65;
char c=i;

cout<<c<<endl;


int *p = &i;

//char *pc = p;

char *pc =(char *)p;

cout<<pc<<endl;
cout<<*p<<endl;

//for three more values it will not print anything it gets 0 so terminates
cout<<*(pc+1)<<endl;
cout<<*(pc+2)<<endl;
cout<<*(pc+3)<<endl;





}


