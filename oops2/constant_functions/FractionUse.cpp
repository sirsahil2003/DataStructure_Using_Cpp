#include<iostream>
using namespace std;
#include "FractionClass.cpp"

int main(){

Fraction f1(10,2);
Fraction f2(15,4);

Fraction const f3;

//constant objects will call only constant functions 

//it will not throw an err noe bkz we have made getNumerator getDenominator functions constant

//we will make constant to only those functions which make no change to the property of current object or we can say propert of this pointer

cout<<f3.getNumerator()<<" "<<f3.getDenominator()<<endl;

f3.setNumerator();

//it will throw an err bkz we cant make setNumerator() fun const bkz it is doing change to the property of this 


return 0;
}
