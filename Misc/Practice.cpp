#include <iostream>

using namespace std;


int a=10;



void increment(int **p){

(**p)++;
 			}
 			


void square(int *p){


p=&a;

*p=(*p)*(*p);


}

void fun(int a[]){

cout<<a[0]<<endl;

                 }
                 

int main(){


int a=100;
int *p=&a;
int **q=&p;
int b=(**q)++ +4;

cout<<a<<"  "<<b<<endl;







/*
int num=10;
int *ptr=&num;
increment(&ptr);
//changes will be made bkz we are doing by reference
cout<<num<<endl;
*/



/*
square(&a);
cout<<a<<endl;
*/



/*
int a[]={1,2,3,4};

fun(a+1);
cout<<a[0]<<endl;


/*
char b[]="xyzabc";
char* c=&b[0];

cout<<c<<endl;
c+=3;
cout<<c<<endl;
*/











/*
char ch='a';
char *ptr=&ch;

//compiler first takes ascii val of given char and increments it and then return corresponding value for resultant integer
ch++;

cout<<ch<<" "<<*ptr<<endl;
*/







/*
char s[]="hello";
char *p=s;

//cout<<s<<" "<<p;
cout<<s[1]<<" "<<p[1]<<endl;
*/

}
