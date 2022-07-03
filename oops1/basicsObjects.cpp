#include<iostream>
using namespace std;
#include "classStudent.cpp"

int main(){

//creates objects statically and accesing them

Student s1;
Student s2;

s1.age=19;
s1.rollNumber=1901012111;

s2.age=18;
s2.rollNumber=1901012;

cout<<s1.age<<endl;
cout<<s1.rollNumber<<endl;


cout<<s2.age<<endl;
cout<<s2.rollNumber<<endl;

//creates objects dynamically and accesing them 

//int* a=new int;

// *a=5;


Student* s6 = new Student;

(*s6).age=20;
(*s6).rollNumber=100;

cout<<(*s6).age<<endl;
cout<<(*s6).rollNumber<<endl;



//another way to assign values in dynamic alloc

Student* s7 = new Student;

s7 -> age=26;
s7 -> rollNumber=190122334;

cout<<s7 -> age<<endl;
cout<<s7 -> rollNumber<<endl;






}
