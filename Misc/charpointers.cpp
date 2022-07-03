#include <iostream>

using namespace std;

int main()
{
 
 char str[]="sahil";
 
 //try to avoid may be the location it is pointing is read only so we wont able to change so above one is good
 char *pp="sahil";
 

 int a[]={1,2,3};
 char b[]="abcd";
 
 cout<<a<<endl;
 cout<<b<<endl;
 
 char *c=&b[0];
 
 cout<<c<<endl;
 
 int *p=a;
 
 cout<<p<<endl;
 
 
 cout<<str<<endl;
 cout<<pp<<endl;
 
 
 
 
 
}
 
 
