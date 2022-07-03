#include<iostream>

using namespace std;

#include "ComplexClass.cpp"

int main(){

int real1,imaginary1,real2,imaginary2;

cout<<"Enter Vals::"<<endl;

cin>>real1>>imaginary1;
cin>>real2>>imaginary2;


ComplexNumbers c1(real1,imaginary1);
ComplexNumbers c2(real2,imaginary2);

int choice;
cin>>choice;

if(choice==1){
c1.add(c2);
c1.print();

}

else if(choice==2){

c1.multiply(c2);
c1.print();


}
else
{
return 0;
}






}
