#include<iostream>
using namespace std;

#include "FractionClass.cpp"

int main(){

Fraction f1(10,2);
Fraction f2(15,4);

f1.print();

//f1+=(f1 += f2);

f1 += f2;

f1.print();





//post-increment
/*
Fraction f5 = f1++;

f1.print();      //no changes should be there 

f5.print();     // updation should be there 


f1.print();    //but now changes should persist in f1 post increment
*/

//pre-increment
/*
//Fraction f3 = ++f1;

++(++f1);
f1.print(); 

//Fraction f4 = ++(++f1);
//f4.print();

//f3.print();

*/






//add operator overloading
/*
Fraction f3 = f1.add(f2);

Fraction f4 = f1+f2; //using operator overloading

Fraction f5 = f1*f2;


f1.print();
f2.print();

f3.print();

f4.print();

f5.print();

if(f1 == f2){

cout<<"equal"<<endl;

}

else{

cout<<"Not equal"<<endl;

}


*/











}
